#include "ofApp.h"

void ofApp::drawShape(float diam) {
    
    
    ofSetColor(abs(sin(ofGetElapsedTimef()/3))*255, abs(cos(ofGetElapsedTimef()/2))*255, abs(cos(ofGetElapsedTimef()/4))*255, 255);
    
    ofNoFill();
    
    ofRect(0, 0, 50, diam);
    
    diam = diam*1.007;
    
    if(diam < 1200){
        
        ofPushMatrix();
        ofRotate(2);
        drawShape(diam);
        ofPopMatrix();
        
    }
}

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0, 20);
    ofFill();
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
   
    drawShape(abs(cos(ofGetElapsedTimef()/7))*100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
