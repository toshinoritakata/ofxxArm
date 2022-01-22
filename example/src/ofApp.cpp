#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	XArmAPI* arm = new XArmAPI(std::string("192.168.1.213"));

	arm->motion_enable(true);
    arm->set_mode(0);
    arm->set_state(0);
    sleep_milliseconds(1000);

    printf("=========================================\n");

    int ret;
    unsigned char version[40];
    ret = arm->get_version(version);
    printf("ret=%d, version: %s\n", ret, version);

    int state;
    ret = arm->get_state(&state);
    printf("ret=%d, state: %d, mode: %d\n", ret, state, arm->mode);

    int cmdnum;
    ret = arm->get_cmdnum(&cmdnum);
    printf("ret=%d, cmdnum: %d\n", ret, cmdnum);

    int err_warn[2];
    ret = arm->get_err_warn_code(err_warn);
    printf("ret=%d, err: %d, warn: %d\n", ret, err_warn[0], err_warn[1]);

    fp32 pose[6];
    ret = arm->get_position(pose);
    printf("ret=%d, ", ret);
    print_nvect("pose: ", pose, 6);

    fp32 angles[7];
    ret = arm->get_servo_angle(angles);
    printf("ret=%d, ", ret);
    print_nvect("angles: ", angles, 7);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
