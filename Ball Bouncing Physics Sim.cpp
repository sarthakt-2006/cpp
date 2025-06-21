//Ball Bouncing Physics Sim

#include <simplecpp>
main_program{
initCanvas("Projectile", 640, 480);
 int click=getClick(), vx, vy=-10, g=1, x, y;
 Circle c1(click/65536, click%65536, 10);
 c1.setColor(COLOR("red"));
 c1.setFill(true);
 while(true){
  if ((click/65536)>=320)
    vx=10;
  else
    vx=-10;
  repeat(999){
   x=c1.getX(), y=c1.getY();
   if ((x>0 && (y>0 or y<480)) && (x<640 && (y>0 && y<480))) {
    cout << "X: " << x << " Y: " << y << endl;
    c1.penDown();
    c1.move(vx, vy);
    vy=vy+g;
    x=c1.getX(), y=c1.getY();
    cout << "X: " << x << " Y: " << y << endl;
    c1.penUp();
    if (x>=630 && vx>0)
     vx=-vx+4;
    else if (x>=630 && vx<0)
     vx=vx;
    if (x<=10 && vx<0)
     vx=-vx-4;
    else if (x<=10 && vx>0)
    vx=vx;
    if (y>=470 && vy>0)
     vy=-vy+4;
    else if (y>=470 && vy<0)
     vy=vy;
    if (y<=10 && vy<0)
     vy=-vy-4;
    else if (y<=10 && vy>0)
     vy=vy;
   }
   else
    break;
  }
  vx=10, vy=-10;
  click=getClick();
  c1.moveTo(click/65536, click%65536);
 }
}
