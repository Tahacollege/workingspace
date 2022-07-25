#include<graphics.h>
#include<windows.h>
#include<stdio.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char *)"");
    int x=GetSystemMetrics(SM_CXSCREEN);
    int y=GetSystemMetrics(SM_CYSCREEN);
    int w1=initwindow(x,y,"",-3,-3);
    setcurrentwindow(w1);
    char a[20];
    int count=0;
    while(count<5){
    sprintf(a,"%d",count);
    settextstyle(3,HORIZ_DIR,10);
    outtextxy(500,y/2,a);
    delay(1000);
    cleardevice();
    count++;
    }
    getch();
    closegraph();
    return 0;
}