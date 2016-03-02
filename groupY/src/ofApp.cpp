#include "ofApp.h"

void ofApp::drawBranch(float x, float y, float diam1, float diam2){
    
    ofSetCircleResolution(50);
    ofSetColor(abs(sin(ofGetElapsedTimef()/3))*255, abs(cos(ofGetElapsedTimef()/2))*255, abs(cos(ofGetElapsedTimef()/4))*255, 255);
    ofNoFill();
    ofDrawEllipse(x, y, diam1, diam2);
    ofTranslate(30*sin(ofGetElapsedTimef()), 30*sin(ofGetElapsedTimef()));
    diam1 = diam1 * 0.8;
    diam2 = diam2 * 0.8;
    
    if(diam1 > 10){
        ofPushMatrix();
        drawBranch(0, 0, diam1, diam2);
        ofPopMatrix();
    }
}


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
    posX = ofGetWidth()/2;
    posY = ofGetHeight()/2;
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
    drawBranch(0, 0, abs(cos(ofGetElapsedTimef()/7))*200, abs(cos(ofGetElapsedTimef()/7))*200);
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
