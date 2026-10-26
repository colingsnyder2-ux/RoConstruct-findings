// from server: 88% by colin
// from server: 84% by king_originala_sol_native
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-cl: 21022

struct Vector3 {
 float x,y,z;
 Vector3():x(0),y(0),z(0){}
 Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 Vector3 operator+(const Vector3&v)const{return Vector3(x+v.x,y+v.y,z+v.z);}
 Vector3 operator-(const Vector3&v)const{return Vector3(x-v.x,y-v.y,z-v.z);}
 Vector3 operator*(float s)const{return Vector3(x*s,y*s,z*s);}
 float&operator[](int i){return (&x)[i];}
};
struct Matrix3 {
 float cells[9];
 Matrix3(const Matrix3&v){*this=v;}
 Matrix3&operator=(const Matrix3&);
 Vector3 operator*(const Vector3&)const;
};
struct Frame {
 Matrix3 rotation;Vector3 translation;
 Frame(const Matrix3&r,const Vector3&t):rotation(r),translation(t){}
 Vector3 vectorToWorldSpace(const Vector3&v)const{return rotation*v;}
};
struct Geometry {void*vtable;Vector3 size;const Vector3&getSize()const{return size;}};
struct Primitive {char opaque[0x9c];Geometry*geometry;const Frame&getCoordinateFrame()const;const Vector3&getSize()const{return geometry->getSize();}};
struct PartInstance {
 char prefix[0x1dc];int partType,formFactor;char gap[0x228-0x1e4];Primitive primitive;
 const Vector3&getPartSizeXml()const{return primitive.getSize();}
 const Frame&getCoordinateFrame()const{return primitive.getCoordinateFrame();}
 Vector3 xmlToUiSize(const Vector3&v)const{Vector3 r=v;switch(formFactor){case 1:r.y*=5.0f/6.0f;break;case 2:r.y*=2.5f;break;}return r;}
 Vector3 uiToXmlSize(const Vector3&)const;
 void setCoordinateFrame(const Frame&);void setPartSizeXml(const Vector3&);void join();
 bool resize(int normal,int amount);
};
bool __cdecl fuzzyEq(const Frame&,const Frame&,float,float);
bool PartInstance::resize(int normal,int amount){
 if(amount==0)return false;
 Vector3 oldSize=getPartSizeXml();
 const Frame&current=getCoordinateFrame();
 Frame oldFrame=current;
 Vector3 delta;
 float sign=normal<3?1.0f:-1.0f;
 if(partType==1)delta[normal%3]=static_cast<float>(amount);
 else delta=Vector3(static_cast<float>(amount),static_cast<float>(amount),static_cast<float>(amount));
 Vector3 newUiSize=xmlToUiSize(oldSize)+delta;
 Vector3 xmlDelta=uiToXmlSize(newUiSize)-oldSize;
 Vector3 t=oldFrame.translation+oldFrame.vectorToWorldSpace(xmlDelta)*0.5f*sign;
 Frame desired(oldFrame.rotation,t);
 setCoordinateFrame(desired);
 setPartSizeXml(uiToXmlSize(newUiSize));
 join();
 if(fuzzyEq(getCoordinateFrame(),desired,0.00001f,0.00001f))return true;
 setCoordinateFrame(oldFrame);
 setPartSizeXml(oldSize);
 return false;
}
