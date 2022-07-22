#include<graphics.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    int x=getmaxx();
    int y=getmaxy();
    //left cloud
    //top cloud
    //setcolor(BLUE);
    int i=0;
    int z=0;
    int page=0;
    setfillstyle(XHATCH_FILL,CYAN);
    floodfill(20,10,WHITE);
    while(i<x && z<y){  
    setactivepage(page);
    setvisualpage(1-page);
    cleardevice();
    setfillstyle(XHATCH_FILL,CYAN);
    floodfill(20,10,WHITE);
         //left_drops
    arc(80,50,0,200,30);
    arc(140,50,0,200,30);
    arc(200,50,0,210,30);
    //left side cloud
    arc(60,90,90,270,30);
    //bottom cloud
    arc(85,120,180,360,30);
    arc(145,120,180,360,30);
    arc(205,120,180,360,30);
    //right side cloud
    arc(230,90,270,90,30);
    
    //right cloud
    //top cloud
    //setcolor(BLUE);
    arc(400,50,0,200,30);
    arc(460,50,0,200,30);
    arc(520,50,0,210,30);
    //left side cloud
    arc(375,90,90,270,30);
    //bottom cloud
    arc(405,120,180,360,30);
    arc(465,120,180,360,30);
    arc(525,120,180,360,30);
    //right side cloud
    arc(550,90,270,90,30);
 //left_drops
    //upper drops
    
        //drop 1   
    line(180,160+z,170,190+z);
    line(180,160+z,190,190+z);
    arc(180,190+z,180,360,11);
        //drop 3
    line(80,160+z,70,190+z);
    line(80,160+z,90,190+z);
    arc(80,190+z,180,360,11);
        //drop 2
    line(130,160+z,120,190+z);
    line(130,160+z,140,190+z);
    arc(130,190+z,180,360,11);
        //lower drops
        //drop 1
    line(70,220+z,60,250+z);
    line(70,220+z,80,250+z);
    arc(70,250+z,180,360,11);
        //drop 2
    line(130,220+z,120,250+z);
    line(130,220+z,140,250+z);
    arc(130,250+z,180,360,11);
        //drop 3
    line(180,220+z,170,250+z);
    line(180,220+z,190,250+z);
    arc(180,250+z,180,360,11);

        
        //right_drops
        //upper drops
        //drop 1
    
    line(390,160+z,380,190+z);
    line(390,160+z,400,190+z);
    arc(390,190+z,180,360,11);
        //drop 2
    line(450,160+z,440,190+z);
    line(450,160+z,460,190+z);
    arc(450,190+z,180,360,11);
        //drop 3
    line(520,160+z,510,190+z);
    line(520,160+z,530,190+z);
    arc(520,190+z,180,360,11);
        //lower drops
        //drop 1
    line(390,220+z,380,250+z);
    line(390,220+z,400,250+z);
    arc(390,250+z,180,360,11);
        //drop 2
    line(450,220+z,440,250+z);
    line(450,220+z,460,250+z);
    arc(450,250+z,180,360,11);
        //drop 2
    line(520,220+z,510,250+z);
    line(520,220+z,530,250+z);
    arc(520,250+z,180,360,11);
    //delay(50);
    //cleardevice();
    
//road()
    line(0,450,x,450);
    outtextxy(200,455,"PRESS ANY KEY TO START RAIN !");

 //boat_1        
    arc(100+i*2,370,180,360,80);
    line(20+i*2,370,180+i*2,370);
    line(100+i*2,370,180+i*2,320);
    line(180+i*2,310,180+i*2,370);
//boat_2
    arc(540-i*2,370,180,360,80);
    line(460-i*2,370,620-i*2,370);
    line(460-i*2,320,540-i*2,370);
    line(460-i*2,310,460-i*2,370);
    
    /*if(i==0 &&z==0){
        getch();
    }*/
    i++;
    z++;
    page=1-page;
    delay(50);
    
}
if(i==x){
    outtextxy(200,455,"Animation Has Ended  ");
}
    //getch();
    closegraph();
    return 0;
}

