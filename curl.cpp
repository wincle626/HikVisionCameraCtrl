/*
 * curl.cpp
 *
 *  Created on: 23 May 2018
 *      Author: humandrive
 */

#include "curl.hpp"


void curlget(){
	CURL *curl;
	CURLcode res;
	/* In windows, this will init the winsock stuff */
	curl_global_init(CURL_GLOBAL_ALL);

	/* get a curl handle */
	curl = curl_easy_init();
	if(curl) {
		/* First set the URL that is about to receive our POST. This URL can
		just as well be a https:// URL if that is what should receive the
		data. */
		curl_easy_setopt(curl, CURLOPT_URL,
				"http://ADMIN:Qwer1234@10.42.0.64/System/deviceInfo");
		/* HTTP GET please */
	    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET"); /* !!! */
		/* Perform the request, res will get the return code */
		res = curl_easy_perform(curl);
		/* Check for errors */
		if(res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform() failed: %s\n",
		curl_easy_strerror(res));

		/* always cleanup */
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}

void curlputstart(){
	CURL *curl;
	CURLcode res;
	/* In windows, this will init the winsock stuff */
	curl_global_init(CURL_GLOBAL_ALL);

	/* get a curl handle */
	curl = curl_easy_init();
	if(curl) {
		/* First set the URL that is about to receive our POST. This URL can
		just as well be a https:// URL if that is what should receive the
		data. */
		curl_easy_setopt(curl, CURLOPT_URL,
				"http://ADMIN:Qwer1234@10.42.0.64/PTZ/channels/1/PTZControl?command=PAN_LEFT&mode=start&speed=4");
	    /* HTTP PUT please */
	    // curl_easy_setopt(curl, CURLOPT_PUT, 1L); /*dont use this !!!*/
	    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "PUT"); /* !!! */
		/* Perform the request, res will get the return code */
		res = curl_easy_perform(curl);
		/* Check for errors */
		if(res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform() failed: %s\n",
		curl_easy_strerror(res));

		/* always cleanup */
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}

void curlputstop(){
        CURL *curl;
        CURLcode res;
        /* In windows, this will init the winsock stuff */
        curl_global_init(CURL_GLOBAL_ALL);

        /* get a curl handle */
        curl = curl_easy_init();
        if(curl) {
                /* First set the URL that is about to receive our POST. This URL can
                just as well be a https:// URL if that is what should receive the
                data. */
                curl_easy_setopt(curl, CURLOPT_URL,
                                "http://ADMIN:Qwer1234@10.42.0.64/PTZ/channels/1/PTZControl?command=PAN_LEFT&mode=stop&speed=4");
            /* HTTP PUT please */
            // curl_easy_setopt(curl, CURLOPT_PUT, 1L); /*dont use this !!!*/
            curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "PUT"); /* !!! */
                /* Perform the request, res will get the return code */
                res = curl_easy_perform(curl);
                /* Check for errors */
                if(res != CURLE_OK)
                        fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

                /* always cleanup */
                curl_easy_cleanup(curl);
        }
        curl_global_cleanup();
}

void curlpost(){
	CURL *curl;
	CURLcode res;
	/* In windows, this will init the winsock stuff */
	curl_global_init(CURL_GLOBAL_ALL);

	/* get a curl handle */
	curl = curl_easy_init();
	if(curl) {
		/* First set the URL that is about to receive our POST. This URL can
		just as well be a https:// URL if that is what should receive the
		data. */
		curl_easy_setopt(curl, CURLOPT_URL,
				"http://ADMIN:Qwer1234@10.42.0.64/PTZ/channels/1/PTZControl?command=PAN_LEFT&mode=start&speed=4");
		/* Now specify the POST data */
		/*curl_easy_setopt(curl, CURLOPT_POSTFIELDS,
				"command=PAN_LEFT&mode=start&speed=4");*/ /*don't use this !!!*/
	    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST"); /* !!! */
		/* Perform the request, res will get the return code */
		res = curl_easy_perform(curl);
		/* Check for errors */
		if(res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform() failed: %s\n",
		curl_easy_strerror(res));

		/* always cleanup */
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}


