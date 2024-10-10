#!/bin/bash

# check if file .logkey exists

if [ "$#" -ne 1 ]; then
   if [ ! -f ~/.logkey ]; then
       echo "Usage: $0 <username>"
       exit 1
   fi
   id=$(cat ~/.logkey)
else
   id=$1
fi
if [ $result == "0" ]; then
    echo "Access denied"
    exit 1
else
    echo "Access granted"
    echo "$id" > ~/.logkey
    exit 0
fi
