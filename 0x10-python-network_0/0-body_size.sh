#!/bin/bash
# request to a URL and Display the size of the body of the response
curl -s "$1" | wc -c
