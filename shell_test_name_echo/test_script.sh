#!/bin/bash
# this is Shebang

my_function() {
	echo "hello"
	echo "$1"
}

read -p "Name :" name
my_function $name

