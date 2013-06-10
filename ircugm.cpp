/**
 * ircugm -- IRC User Grapher/Mapper
 * This utility is automated software used to idle in IRC servers and 
 * collect information about the users in a channel, then perform 
 * operations on the data so that it may be more easily visualized.
 * ircugm will attempt to "learn" things about the users in its assigned 
 * channel and make a certain amount of predictions about the users 
 * based on previous behavior and other metrics.
 * 
 * ircugm is written by L0j1k (L0j1k@L0j1k.com) and released under the 
 * BSD-3 software license.
 * 
 * @author L0j1k (l0j1k@l0j1k.com)
 * @version 0.1.0a
 * @modified 23may2013
 */

#include <iostream>

using namespace std;

bool getOptions() {
  return true;
}

void usage() {

}

int main( int argc, char** argv ) {

  if(!getOptions()) {
    usage();
  }

  return 0;
}


/*****
 * file output/input/read/load/save/etc
 *
 
 //C++
#include <fstream>
using namespace std;
int main(){
ifstream img("image.iso",     ios::in  |            ios::binary);
ofstream key("otp_block.bin", ios::out | ios::app | ios::binary);
const int win=0x00010000;
const int mul=0x00000640;//104857600=0x06400000
char buf[win];
img.seekg(0x12C00000, ios::beg);
for(int i=0;i<mul;i++){
	img.read (buf, win);
	key.write(buf, win);
}
img.close();
key.close();
return 0;
}
//C
#include <stdio.h>
int main(int argc, char** argv){
FILE* img=fopen("image.iso", 'rb');
FILE* key=fopen("otp_block.bin", 'wb');
const int win=0x00010000;
const int mul=0x00000640;//104857600=0x06400000
char buf[win];
fseek(img, 0x12C00000, SEEK_SET);
for(int i=0;i<mul;i++){
	fread (buf, win, 1, img);
	fwrite(buf, win, 1, key);
}
fclose(img);
fclose(key);
return 0;
}

*
* end commend block bullshit */
