#!/bin/sh
if [ ! -f ex2.txt ]
then
	touch ex2.txt
	echo "1" >> ex2.txt
else
	ln ex2.txt ex2.txt.lock
	var=`tail -1 ex2.txt`
	var=$((var+1))
	echo "$var" >> ex2.txt
	rm ex2.txt.lock
fi
