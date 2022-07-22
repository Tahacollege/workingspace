#include<graphics.h>
#include<windows.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char *)"");
    DWORD screen_width=GetSystemMetrics(SM_CXSCREEN);
    DWORD screen_height=GetSystemMetrics(SM_CYSCREEN);
    int w1=initwindow(screen_width,screen_height,"",-3,-3);
    setcurrentwindow(w1);
    POINT mouse_pos;
    int p=0;
    while(1 || p<16){
    GetCursorPos(&mouse_pos);
    int x=mouse_pos.x;
    int y=mouse_pos.y;
    if(GetAsyncKeyState(VK_LBUTTON)){
    setcolor(p);
    circle(x,y,10);
    if(p==15 ){
        p=0;
    }
    p++;
    }
    //cleardevice();
    }
    getch();
    closegraph();
    return 0;
}