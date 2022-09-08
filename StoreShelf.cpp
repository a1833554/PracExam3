#include "MusicBox.h"
#include "StoreShelf.h"
#include <iostream>
#include <string>
using namespace std;


StoreShelf::StoreShelf():width(0), curr_width(0), count(0),songs(NULL)  {}                   // default constructor
StoreShelf::StoreShelf(int width): width(width){         // constructor for shelf with given width in centimetres
    songs = new MusicBox[width];
    count = 0;
    curr_width = 0;
 }
int StoreShelf::get_width(){
    return width;
}                // returns the width of the shelf in centimetres

// returns the number of Music boxes currently on the shelf
int StoreShelf::get_num_music_boxes(){
    return count;
} 

// returns a dynamic array of the music boxes currently on the shelf
MusicBox *StoreShelf::get_contents(){

    return songs;
}

// returns true and adds music box to shelf if there is sufficient space
// otherwise returns false
bool StoreShelf::add_music_box(MusicBox a_music_box){
    if (curr_width <= width){
        songs[count] = a_music_box;
        curr_width = curr_width + songs[count].get_width();
        count++;
         return true;
        } else {
        return false; 
        } 
}

StoreShelf::~StoreShelf(){}