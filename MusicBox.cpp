#include "MusicBox.h"
#include <iostream>
#include <string>
using namespace std;


MusicBox::MusicBox(): songname("null"), width(0){}        // a default constructor 

MusicBox::MusicBox(string songname, int width): songname(songname), width(width){}

 // a constructor that takes the song and width as arguments
string MusicBox::get_song(){
    return songname;
} // returns the name of the song that the music box plays
int MusicBox:: get_width(){
    return width;
}// returns the width in centimetres of the music box
MusicBox::~MusicBox(){}  //A default destructor

