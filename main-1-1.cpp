#include "MusicBox.h"
#include <iostream>
#include <string>
using namespace std;



class MusicBox;

int main(){

MusicBox s1 = MusicBox("Hello",3);

cout<<s1.get_song()<<" "<<s1.get_width()<<endl;



}