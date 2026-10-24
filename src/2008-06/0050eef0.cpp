// from server: 69% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// GImage/Color4uint8 layout and pixel access follow vendored G3D 6.09.
// Complete target range: six cdecl arguments, RGBA diagonal interpolation.
// smoothRegion, blendPixel and pasteRotated are descriptive reconstruction names.
// The target inlines the two 180-degree paths and calls the runtime rotation helper.
#include <string.h>
#include <stddef.h>
#include <algorithm>
namespace G3D {
inline int max(int x,int y){return x<=y?y:x;}
struct System {static void free(void*)throw();static void*calloc(unsigned,unsigned)throw();};
struct Color4uint8 {unsigned char r,g,b,a;Color4uint8():r(0),g(0),b(0),a(0){}Color4uint8(unsigned char x,unsigned char y,unsigned char z,unsigned char w):r(x),g(y),b(z),a(w){}};
__declspec(noinline) Color4uint8 blendPixel(Color4uint8 a,Color4uint8 b,float t){
 double inverse=1.0-t;Color4uint8 out;
 out.r=(unsigned char)((int)(a.r*t)+b.r*inverse);out.g=(unsigned char)((int)(a.g*t)+b.g*inverse);out.b=(unsigned char)((int)(a.b*t)+b.b*inverse);out.a=(unsigned char)((int)(a.a*t)+b.a*inverse);return out;
}
struct GImage {
 unsigned char*_byte;int width,height,channels;
 GImage(int w,int h,int c):_byte(0){resize(w,h,c);}virtual ~GImage(){clear();}
 void clear(){width=height=0;System::free(_byte);_byte=0;}
 void resize(int w,int h,int c){clear();width=w;height=h;channels=c;unsigned size=w*h*c;_byte=(unsigned char*)System::calloc(size,1);}
 unsigned char*byte(){return _byte;}const unsigned char*byte()const{return _byte;}
 Color4uint8*pixel4(){return (Color4uint8*)_byte;}const Color4uint8*pixel4()const{return (const Color4uint8*)_byte;}
 Color4uint8&pixel4(int x,int y){return pixel4()[x+y*width];}const Color4uint8&pixel4(int x,int y)const{return pixel4()[x+y*width];}
 static __declspec(noinline) bool pasteSubImage(GImage&dest,const GImage&src,int dx,int dy,int sx,int sy,int w,int h){
  if(src.width<sx+w||src.height<sy+h||dest.width<dx+w||dest.height<dy+h||sy<0||sx<0||dy<0||dx<0||src.channels!=dest.channels)return false;
  for(int i=0;i<h;++i){const unsigned char*srcRow=src.byte()+((i+sy)*src.width+sx)*src.channels;unsigned char*destRow=dest.byte()+((i+dy)*dest.width+dx)*dest.channels;memcpy(destRow,srcRow,w*src.channels);}return true;
 }
 static bool pasteRotated(GImage&dest,const GImage&src,int dx,int dy,int sx,int sy,int w,int h,int angle){
  if(src.channels!=4||dest.channels!=4)return false;
  if(angle==90){for(int x=0;x<w;++x)for(int y=0;y<h;++y)dest.pixel4(dx+y,dy+w-x-1)=src.pixel4(sx+x,sy+y);}
  else if(angle==-90){for(int x=0;x<w;++x)for(int y=0;y<h;++y)dest.pixel4(dx+h-y-1,dy+x)=src.pixel4(sx+x,sy+y);}
  else if(angle==180){for(int x=0;x<w;++x)for(int y=0;y<h;++y)dest.pixel4(dx+w-x-1,dy+h-y-1)=src.pixel4(sx+x,sy+y);}
  return true;
 }
};
void smoothRegion(GImage&image,int sx,int sy,int width,int height,int angle){
 int size=G3D::max(width,height)+1;
 GImage temp(size,size,4);
 if(angle==0)GImage::pasteSubImage(temp,image,0,size-height,sx,sy,width,height);
 else if(angle==90||angle==-90){GImage::pasteRotated(temp,image,0,size-width,sx,sy,width,height,angle);std::swap(width,height);}
 else if(angle==180){int dy=size-height;if(image.channels==4)for(int x=0;x<width;++x)for(int y=0;y<height;++y)temp.pixel4(width-x-1,dy+height-y-1)=image.pixel4(sx+x,sy+y);}
 int gap=size-height;
 Color4uint8 a=temp.pixel4(0,gap);Color4uint8 b=temp.pixel4(width-1,size-1);
 for(int y=0;y<gap;++y)temp.pixel4(0,y)=a;
 for(int x=size-1;x>=width;--x)temp.pixel4(x,size-1)=b;
 Color4uint8 middle=blendPixel(a,b,.5f);
 for(int x=1;x<size;++x)for(int y=0;y<size-1;++y)temp.pixel4(x,y)=middle;
 for(int y=0;y<size;++y){
  for(int x=1;x<size-y-1;++x){Color4uint8 blended=blendPixel(temp.pixel4(0,y),temp.pixel4(size-y-1,size-1),1.0f-(float)x/(float)(size-y-1));temp.pixel4(x,y+x)=blended;}
 }
 if(angle==0)GImage::pasteSubImage(image,temp,sx,sy,0,gap,width,height);
 else if(angle==90||angle==-90)GImage::pasteRotated(image,temp,sx,sy,0,gap,width,height,-angle);
 else if(angle==180){if(image.channels==4)for(int x=0;x<width;++x)for(int y=0;y<height;++y)image.pixel4(sx+width-x-1,sy+height-y-1)=temp.pixel4(x,gap+y);}
}
}
typedef char image_size[sizeof(G3D::GImage)==20?1:-1];
typedef char image_bitmap_offset[offsetof(G3D::GImage,_byte)==4?1:-1];
typedef char image_width_offset[offsetof(G3D::GImage,width)==8?1:-1];
typedef char image_channels_offset[offsetof(G3D::GImage,channels)==0x10?1:-1];
typedef char pixel_size[sizeof(G3D::Color4uint8)==4?1:-1];


