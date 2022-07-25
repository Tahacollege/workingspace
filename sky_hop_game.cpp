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
    int page=0,i=850;
    int jump_up_lower_block=140;
    int jump_left_lower_block=320;
    int jump_right_lower_block=320;
    int jump_up_upper_block=150;
    int jump_left_upper_block=320;
    int jump_right_upper_block=320;
    int ball_x=720;
    int ball_y=740;
    int ball2_x=550;
    int ball2_y=660;
    //int style_change=0;
    int color_change=0;
    while(i>=0 ||color_change!=16){
    page=1-page; 
    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    floodfill(0,0,WHITE);  
    line(0,i,x,i);
    //floodfill(15,850,WHITE); 
    page=1-page;
    i--;
    delay(10);
             //left_drops
    //setcolor(BLACK);
    //setcolor(BLACK); 
    //{lowest layer   ---> 4th layer from the top
    // 1st land from the left
    if(GetAsyncKeyState(VK_UP)){
            ball2_y=ball2_y-jump_up_upper_block;
            ball_y=ball_y-jump_up_lower_block;
            jump_up_upper_block=jump_up_upper_block+25;
            jump_up_lower_block=jump_up_lower_block+20;
        }
    if(GetAsyncKeyState(VK_LEFT)){
            ball2_x=ball2_x-jump_left_lower_block;
            ball_x=ball_x-jump_left_lower_block;
            //jump_left_lower_block=jump_left_lower_block+20;
        }
    if(GetAsyncKeyState(VK_RIGHT)){
            ball2_x=ball2_x+jump_right_lower_block;
            ball_x=ball_x+jump_right_lower_block;
            //jump_right_lower_block=jump_right_lower_block+20;
        }
    setfillstyle(SOLID_FILL,WHITE);
    bar(10,800,150,770);
    // 2nd land from the left
    bar(170,730,300,700);
    //setfillstyle(SOLID_FILL,LIGHTGREEN);
    // 3rd land from the left
    bar(330,800,460,770);
    // 4th land from the left
    bar(490,730,620,700);
    // 5th land from the left
    bar(650,800,780,770);
    // 6th land from the left
    bar(820,730,950,700);
    // 7th land from the left
    bar(980,800,1110,770);
    // 8th land from the left
    bar(1140,730,1270,700);
    // 9th land from the left
    bar(1300,800,1430,770);
    //}
    //{2nd lowest layer   ---> 3rd layer from the top
    //1st land from left
    bar(10,660,150,630);
    // 2nd land from the left
    bar(170,580,310,550);
    //3rd land from left
    bar(330,660,470,630);
    // 4th land from the left
    bar(490,580,610,550);
    //5th land from left
    bar(650,660,770,630);
    // 6th land from the left
    bar(810,580,930,550);
    //7th land from left
    bar(970,660,1090,630);
    // 8th land from the left
    bar(1130,580,1250,550);
    //9th land from left
    bar(1290,660,1410,630);
    //}
    //{3rd lowest layer  ---> 2nd layer from the top
    //1st land from left
    bar(10,500,150,470);
    // 2nd land from the left
    bar(170,400,310,370);
    //3rd land from left
    bar(330,500,470,470);
    // 4th land from the left
    bar(490,400,630,370);
    //5th land from left
    bar(650,500,790,470);
    // 6th land from the left
    bar(810,400,930,370);
    //7th land from left
    bar(970,500,1090,470);
    // 8th land from the left
    bar(1130,400,1250,370);
    //9th land from left
    bar(1290,500,1410,470);
    //}
    //{4th lowest layer ---> 1st layer from the top
    //1st land from lest
    bar(10,310,150,280);
    // 2nd land from the left
    bar(170,210,310,180);
    //3rd land from lest
    bar(330,310,470,280);
    // 4th land from the left
    bar(490,210,630,180);
    //5th land from lest
    bar(650,310,790,280);
    // 6th land from the left
    bar(810,210,950,180);
    //7th land from lest
    bar(970,310,1110,280);
    // 8th land from the left
    bar(1130,210,1270,180);
    //9th land from lest
    bar(1290,310,1430,280);
    //}
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(20,40,WHITE);
    circle(750,100,70);
    
    //ball_controled_by_user{
    setfillstyle(SLASH_FILL,MAGENTA);
    floodfill(0,0,WHITE);
    circle(ball_x,ball_y,30);
    //}
    //ball_controled_by_computer{
    setfillstyle(BKSLASH_FILL,color_change);
    floodfill(0,0,WHITE);
    circle(ball2_x,ball2_y,40);
    //if(style_change==13 && color_change==15){
    if(color_change==16){
        //style_change=0;
        color_change=0;
        //delay(1000);
    }
    //style_change++;
    color_change++;
    //}
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(0,0,WHITE);
    //{water
    //int i=850;
    //while(i>=0){ 
    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();  
    line(0,i,x,i);
    //setfillstyle(SOLID_FILL,RED);
    //floodfill(0,80,WHITE);
    //setfillstyle(SOLID_FILL,LIGHTCYAN);
    //floodfill(i,i,WHITE);
    
    page=1-page;
    i--;
    delay(100);
    //}
    //}
    }
    //getch();
    //closegraph();
    return 0;
}