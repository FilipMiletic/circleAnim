#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(30); //background color
    ofSetColor(255); //draw color white
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2); //center drawing
    ofSetLineWidth(7);
    ofColor clr = ofColor::fromHex(0x379392);
    ofSetColor(clr);
    

    int circle_resolution = 1000;
    int radius = 100;
    int wave_height = radius*0.1;

    ofPolyline circle;
    

    
    int anim_shape = 16;
    float sine_pct = 0.5;
    int sine_radius = radius*0.1;
    float speed_increment = ofGetElapsedTimef()/2;
    float radius_addon = wave_height*sin((angle+speed_increment)*anim_shape);
    

    
    for (int i=0; i<circle_resolution; i++) {
        
        float angle = TWO_PI/circle_resolution*i;
        float radius_addon = wave_height*sin(angle*anim_shape);
        
        float x=cos(angle)*(radius);
        float y=sin(angle)*(radius);
        
        // drawing sine wave for only part of the circle
        if(i<sine_pct*circle_resolution){
            x=cos(angle)*(radius+radius_addon);
            y=sin(angle)*(radius+radius_addon);
        }
        
        circle.addVertex(ofPoint(x,y));
    }
    
    
    circle.close(); //connecting last and first point of drawing
    circle = circle.getSmoothed(10);
    circle.draw();
    

    
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
