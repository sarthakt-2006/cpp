//Graph Plotter

#include <simplecpp>
int main(){
 cout<<"Legend ax^4+bx^3+cx^2+dx+e"<<endl;
 cout<<"a: "<<endl;
 double a,b,c,d,e,x,y,ypx;
 cin>>a;
 cout<<"b: "<<endl;
 cin>>b;
 cout<<"c: "<<endl;
 cin>>c;
 cout<<"d: "<<endl;
 cin>>d;
 cout<<"e: "<<endl;
 cin>>e;
 initCanvas("Graph Plotter",1280,720);
 Line xaxis(0,360,1280,360),yaxis(640,0,640,720);
 xaxis.imprint();
 yaxis.imprint();
 Circle cr(640,360,2);
 cr.setColor(COLOR("green"));
 cr.setFill(true);
 cr.imprint();
 Line slider(0,355,0,365);
 slider.setColor(COLOR("red"));
 for(double xpx=0;xpx<=1280;xpx=xpx+0.1){
  x=(xpx-640)/10;
  y=a*x*x*x*x+b*x*x*x+c*x*x+d*x+e;
  ypx=360-(10*y);
  slider.moveTo(xpx,360);
  if((ypx>=0 && ypx<360) || (ypx>360 && ypx<=720)){
   cr.moveTo(xpx,ypx);
   cout<<xpx<<" "<<ypx<<" "<<x<<" "<<y<<endl;
   cr.imprint();
  }
  else if(ypx==360){
   slider.imprint();
  }
  else{
   continue;
  }
 }
 getClick();
}
