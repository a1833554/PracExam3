#include "StoreShelf.h"
#include "MusicBox.h"
#include <iostream>
#include <string>
using namespace std;

class StoreShelf;

int main(){

MusicBox hello = MusicBox("hello",3);
MusicBox Yellow = MusicBox("Yellow", 4);
MusicBox Dream = MusicBox("Dream", 2);
MusicBox Dragon = MusicBox("Dragon", 3);    


StoreShelf Shelf(10);

cout<< Shelf.add_music_box(hello);
Shelf.add_music_box(Yellow);
Shelf.add_music_box(Dream);
Shelf.add_music_box(Dragon);


cout<< Shelf.get_width()<<endl;
cout<<Shelf.get_num_music_boxes()<<endl;


MusicBox* songs = Shelf.get_contents();
for(int i = 0; i< 4; i++){
    cout<< songs[i].get_song()<< " "<<songs[i].get_width()<<endl;
}




}




