// from server: 96% by Espeon
// from server: 86% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
#include <string>
#include <string.h>
namespace G3D {
struct Vector2 {
 float x,y;
 Vector2():x(0),y(0){}Vector2(float a,float b):x(a),y(b){}Vector2(const Vector2&r):x(r.x),y(r.y){}
 Vector2 operator+(const Vector2&r)const{return Vector2(x+r.x,y+r.y);}Vector2 operator-(const Vector2&r)const{return Vector2(x-r.x,y-r.y);}Vector2 operator*(float f)const{return Vector2(x*f,y*f);}
};
struct Vector3;struct CoordinateFrame;struct AABox;struct Sphere;struct Ray;struct LineSegment;
struct Color3 {float r,g,b;static const Color3&gray();static const Color3&white();static const Color3&green();};
struct Color4 {float r,g,b,a;Color4(const Color3&c,float alpha=1):r(c.r),g(c.g),b(c.b),a(alpha){}static const Color4&zero();};
struct Rect2D {Vector2 min,max;static Rect2D xyxy(const Vector2&,const Vector2&);};
template<class T>struct ReferenceCountedPointer {T*pointer;};
}
namespace boost {template<class T>struct shared_ptr {T*px;void*pi;T*get()const{return px;}T*operator->()const{return px;}};}
namespace RBX {
struct TextureProxyBase;
struct Adorn {
 enum Spacing {PROPORTIONAL_SPACING,FIXED_SPACING};enum XAlign{XALIGN_RIGHT,XALIGN_LEFT,XALIGN_CENTER};enum YAlign{YALIGN_TOP,YALIGN_BASELINE,YALIGN_CENTER,YALIGN_BOTTOM};
 virtual ~Adorn();
 virtual G3D::ReferenceCountedPointer<TextureProxyBase>createTextureProxy(const std::string&)=0;
 virtual void prepareRenderPass()=0;virtual void finishRenderPass()=0;virtual G3D::Rect2D getViewport()const=0;virtual int getWidth()const=0;virtual int getHeight()const=0;
 virtual void setTexture(int,G3D::ReferenceCountedPointer<TextureProxyBase>)=0;virtual G3D::Rect2D getTextureSize(G3D::ReferenceCountedPointer<TextureProxyBase>)const=0;
 virtual void line2d(const G3D::Vector2&,const G3D::Vector2&,const G3D::Color4&)const=0;
 virtual void outlineRect2d(const G3D::Rect2D&,float,const G3D::Color4&)const=0;
 virtual void rect2d(const G3D::Rect2D&,const G3D::Color4&)const=0;
 virtual G3D::Vector2 get2DStringBounds(const std::string&,double,Spacing)const=0;
 virtual G3D::Vector2 drawFont2D(const std::string&,const G3D::Vector2&,double,const G3D::Color4&,const G3D::Color4&,XAlign,YAlign,Spacing)const=0;
};
struct Rect {
 G3D::Vector2 low,high;
 Rect(const G3D::Vector2&l,const G3D::Vector2&h):low(l),high(h){}
 Rect(float x0,float y0,float x1,float y1):low(x0,y0),high(x1,y1){}
 G3D::Rect2D toRect2D()const{return G3D::Rect2D::xyxy(low,high);}
 G3D::Vector2 size()const{return high-low;}G3D::Vector2 center()const{return (low+high)*.5f;}
 static Rect fromLowSize(const G3D::Vector2&l,const G3D::Vector2&s){return Rect(l,l+s);}
};
struct Name;
struct ContentId {std::string id;const Name*mimeTypePtr;};struct TextureId:ContentId{};
struct Instance {
 virtual ~Instance();virtual void setName(const std::string&);
 char opaque[0x104-4];Instance*parent;char opaque108[8];std::string name;
 int findChildIndex(const Instance*)const;
};
struct GuiItem:Instance {
 Rect getMyRect()const;static const G3D::Color4&translucentBackdrop();
};
struct GuiRoot {static int normalizedFontSize(int);};
struct Widget:GuiItem {
 enum WidgetState{NOTHING,HOVER,DOWN_OVER,DOWN_AWAY};
 char opaque12c[0x144-0x12c];WidgetState widgetState;
 void render2d(Adorn*);
};
struct BackpackItem:Widget {
 TextureId getTextureId()const;
 typedef bool(BackpackItem::*DrawMethod)()const;
 DrawMethod drawEnabledMethod()const{DrawMethod m;void*entry=(*(void***)this)[31];memcpy(&m,&entry,sizeof(m));return m;}
 DrawMethod drawSelectedMethod()const{DrawMethod m;void*entry=(*(void***)this)[32];memcpy(&m,&entry,sizeof(m));return m;}
};
struct GuiDrawImage {
 TextureId currentTexture;G3D::ReferenceCountedPointer<TextureProxyBase>normal,disable,hover,down;G3D::Vector2 size;
 bool setImage(Adorn*,const TextureId&);void render2d(Adorn*,bool,Rect&,Widget::WidgetState);
};
template<class T>struct StringConverter;template<>struct StringConverter<int>{static std::string convertToString(const int&);};
struct LocalBackpackItem:Widget {
 boost::shared_ptr<BackpackItem>myItem;GuiDrawImage guiImageDraw;
 void render2d(Adorn*);
};
typedef char LayoutCheck[(sizeof(std::string)==28&&sizeof(Instance)==0x12c&&sizeof(Widget)==0x148&&sizeof(GuiDrawImage)==56)?1:-1];
void LocalBackpackItem::render2d(Adorn*adorn){
 int fontSize=GuiRoot::normalizedFontSize(12);
 Rect rect=getMyRect();
 float side=rect.size().x*.2f;
 Rect numberRect=Rect::fromLowSize(G3D::Vector2(rect.low.x+2,rect.high.y-2-side),G3D::Vector2(side,side));
 adorn->rect2d(rect.toRect2D(),translucentBackdrop());
 adorn->rect2d(numberRect.toRect2D(),G3D::Color3::gray());
 {G3D::Color4 fontColor(G3D::Color3::white());
 int number=parent->findChildIndex(this)+1;
 adorn->drawFont2D(StringConverter<int>::convertToString(number),numberRect.center(),fontSize,fontColor,G3D::Color4::zero(),Adorn::XALIGN_CENTER,Adorn::YALIGN_CENTER,Adorn::PROPORTIONAL_SPACING);
 }
 if(myItem.get()){
  if((myItem.get()->*myItem->drawSelectedMethod())())adorn->outlineRect2d(rect.toRect2D(),3,G3D::Color3::green());
  if(guiImageDraw.setImage(adorn,myItem->getTextureId())){
   Rect imageRect(rect.low.x+fontSize,rect.low.y+fontSize,rect.high.x-fontSize,rect.high.y-fontSize);
   guiImageDraw.render2d(adorn,(myItem.get()->*myItem->drawEnabledMethod())(),imageRect,widgetState);
  }else{setName(myItem->name);Widget::render2d(adorn);}
 }else Widget::render2d(adorn);
}
}
