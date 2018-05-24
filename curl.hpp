/*
 * curl.hpp
 *
 *  Created on: 23 May 2018
 *      Author: humandrive
 */

#ifndef SRC_CURL_HPP_
#define SRC_CURL_HPP_

#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <curl/curl.h>

void curlget();
void curlputstart();
void curlputstop();
void curlpost();


#endif /* SRC_CURL_HPP_ */
