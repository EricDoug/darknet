#include "network.h"
#include "detection_layer.h"
#include "cost_layer.h"
#include "utils.h"
#include "parser.h"
#include "box.h"
#include "image.h"

#ifdef OPENCV
#include "opencv2/highgui/highgui_c.h"
#endif

void frame2avi(char *frame_dir, char *outputfile) {
	printf("%s\n", frame_dir);
	printf("%s\n", outputfile);
	frame_to_avi(frame_dir, outputfile);
	printf("----frame_to_avi is running--------\n");
}

void run_eos(int argc, char **argv)
{

    
    if(0 == strcmp(argv[2], "frame2avi")){ 

    	frame2avi(argv[3], argv[4]);
    }
    else {
    	printf("Usage: ./darknet eos [frame2avi] argv \n");
    }
}