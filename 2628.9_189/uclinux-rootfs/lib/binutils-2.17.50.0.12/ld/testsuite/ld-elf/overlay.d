# ld: -T overlay.t
#readelf: -s

#...
[ 	]+[0-9]+:[ 	]+0*4000[ 	]+0[ 	]+NOTYPE[ 	]+GLOBAL[ 	]+DEFAULT[ 	]+ABS __load_start_text1
#...
[ 	]+[0-9]+:[ 	]+0*4010[ 	]+0[ 	]+NOTYPE[ 	]+GLOBAL[ 	]+DEFAULT[ 	]+ABS __load_start_text2
#...
[ 	]+[0-9]+:[ 	]+0*4030[ 	]+0[ 	]+NOTYPE[ 	]+GLOBAL[ 	]+DEFAULT[ 	]+ABS __load_stop_text2
#...
[ 	]+[0-9]+:[ 	]+0*4010[ 	]+0[ 	]+NOTYPE[ 	]+GLOBAL[ 	]+DEFAULT[ 	]+ABS __load_stop_text1
#pass