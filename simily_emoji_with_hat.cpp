#include<graphics.h>
int main(int argc, char const *argv[]){
    int gd=DETECT,gm;
    initgraph(&gd, &gm, (char*)"");
    bar(150,250,450,300);
    bar(220,150,390,250);
    arc(200,325,0,360,25);
    arc(410,325,0,360,25);
    bar(200,220,200,220);
    arc(200,325,0,360,12);
    arc(410,325,0,360,12);
    arc(300,370,180,0,100);
    arc(300,380,0,360,10);
    getch();
    closegraph();
    return 0;
} 