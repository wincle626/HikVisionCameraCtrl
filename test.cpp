/*
 * main.cpp
 *
 *  Created on: 9 May 2018
 *      Author: yunwu
 */

#include "curl.hpp"

int main(int argc, char** argv){

	curlget();
	curlputstart();
	usleep(1000*1000);
	curlputstop();
	// curlpost();

	return 0;
}


