#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk -F: '{print $1}' | sed -n '2~2p' | rev | sort -r | sed -n "$FT_LINE1"', '"$FT_LINE2"'p'| awk '{print}' ORS=', '|  sed 's/, $/./g' 