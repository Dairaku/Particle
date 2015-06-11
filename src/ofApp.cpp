#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0, 0, 0);
    ofSetCircleResolution(60);
    ofEnableAlphaBlending();
    mouse_pressed = false;
    
    for(int i=0;i<NUM;i++){
        loc_x[i]=ofRandom(0,ofGetWidth());
        loc_y[i]=ofRandom(0, ofGetHeight());
        speed_x[i]=ofRandom(-10,10);
        speed_y[i]=ofRandom(-10,10);
        radius[i]=ofRandom(10, 50);
        red[i]= ofRandom(255);
        green[i]= ofRandom(255);
        blue[i]=ofRandom(255);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0;i<NUM;i++){
        if(mouse_pressed){
            speed_x[i]=(mouseX-loc_x[i])/8.0;
            speed_y[i]=(mouseY-loc_y[i])/8,0;
        }
        loc_x[i]=loc_x[i]+speed_x[i];
        loc_y[i]=loc_y[i]+speed_y[i];
        
        if(loc_x[i]>ofGetWidth()-radius[i]||loc_x[i]<radius[i]){
            speed_x[i] =speed_x[i]*-1;
        }
        if(loc_y[i]>ofGetHeight()-radius[i]||loc_y[i]<radius[i]){
            speed_y[i] =speed_y[i]*-1;
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    for(int i=0;i<NUM;i++){
        ofSetColor(red[i], green[i], blue[i],128);
        ofCircle(loc_x[i], loc_y[i], radius[i]);
    }

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
    mouse_pressed = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    mouse_pressed = false;
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
