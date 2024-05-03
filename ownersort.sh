#!/usr/bin/bash

DIR=$1
USER=$2

#argument check
if [[ "$#" -lt "2" ]]; then
	echo "Not enought arguments" >&2
	exit 22
elif [[ "$#" -gt "2" ]]; then
	echo "Too many arguments" >&2
	exit 23
fi

#check dir / create dir
if mkdir $DIR$USER; then
	echo "Directory:$USER created"
else
	rm -r -d -f $DIR$USER
	mkdir $DIR$USER
	echo "UPD:Directory:Removed and Recreated"
fi

#sort and copy files
for i in $DIR*; do
	SORT_USER=$(stat -c "%U" $i)
	if [[ "$SORT_USER" == "$USER" ]]; then
		cp -p $i $DIR$USER
	fi
done
