#include<graphics.h>
#include<time.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char *)"");
    setfillstyle(HATCH_FILL,RED);
    floodfill(50,50,YELLOW);
    rectangle(190,170,470,370);
    while(1){
    //setfillstyle(LTSLASH_FILL,RED);
    //floodfill(50,50,YELLOW);
    char t[50];
    time_t Today_time;
    struct tm* current_time;
    Today_time=time(NULL);
    current_time=localtime(&Today_time);
    //{       prints time on screen
    strftime(t,50,"%I:%M:%S",current_time);
    setcolor(11);
    settextstyle(1,HORIZ_DIR,5);
    outtextxy(200,200,t);
    //}
    //{       prints AM or PM 
    strftime(t,50,"%p",current_time);
    setcolor(2);
    settextstyle(10,HORIZ_DIR,3);
    outtextxy(480,200,t);
    //}
    //{       prints day and date
    strftime(t,50,"%a || %d:%b:%y",current_time);
    setcolor(14);
    settextstyle(3,HORIZ_DIR,4);
    outtextxy(200,300,t);
    //}
    setcolor(10);
    delay(1000);
    }
    getch();
    closegraph();
    return 0;
}