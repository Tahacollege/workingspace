#include<graphics.h>
#include<windows.h>
int main(){
    int gd=DETECT,gm;
    int page=0;
    initgraph(&gd,&gm,(char*)"");
    int x=GetSystemMetrics(SM_CXSCREEN);
    int y=GetSystemMetrics(SM_CYSCREEN);
    int w1=initwindow(x,y,"",-3,-2);
    setcurrentwindow(w1);
    for(float i=0.001;i<x;i++){
    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();
    setcolor(GREEN);
    line(0,y-200,x+18000,x+100);
    setcolor(WHITE);
    rectangle(590,400,600,190);
    rectangle(400,290,600,190);
    outtextxy(460,230,"FINISH !!!!");
    bar(10+i,360,190+i,290);
    bar(50+i,250,150+i,320);
    circle(40+i,380,20);
    circle(170+i,380,20);
    setcolor(YELLOW);
    circle(50+i,50,40);
    page=1-page;
    delay(30);
    //cleardevice();
    }
setcolor(GREEN);
outtextxy(200,200,"Press Any Key To Exit  !!!");
    //getch();
    //closegraph();
    return 0;
}