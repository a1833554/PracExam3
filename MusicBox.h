#ifndef MUSICBOX_H
#define MUSICBOX_H
#include "MusicBox.h"
#include <iostream>
#include <string>

using namespace std;

class MusicBox{

private:
string songname;
int width;
public:
MusicBox();          // a default constructor 
MusicBox(string songname, int width); // a constructor that takes the song and width as arguments
string get_song();  // returns the name of the song that the music box plays
int get_width();    // returns the width in centimetres of the music box
~MusicBox();   //A default destructor


};
#endif