// from server: 95% by king_originala_sol_native
// roc 2008-06 00644c80  unit: RBX::HUMAN::Climbing  size: 985 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00644c80
//
// 00644c80  6aff                 push -1
// 00644c82  64a100000000         mov eax, dword ptr fs:[0]
// 00644c88  6853ad7d00           push 0x7dad53
// 00644c8d  50                   push eax
// 00644c8e  64892500000000       mov dword ptr fs:[0], esp
// 00644c95  81ece8000000         sub esp, 0xe8
// 00644c9b  53                   push ebx
// 00644c9c  55                   push ebp
// 00644c9d  56                   push esi
// 00644c9e  57                   push edi
// 00644c9f  8bf9                 mov edi, ecx
// 00644ca1  8b4f08               mov ecx, dword ptr [edi + 8]
// 00644ca4  e8b744f9ff           call 0x5d9160
// 00644ca9  8bf0                 mov esi, eax
// 00644cab  85f6                 test esi, esi
// 00644cad  0f8489030000         je 0x64503c
// 00644cb3  8bac2408010000       mov ebp, dword ptr [esp + 0x108]
// 00644cba  55                   push ebp
// 00644cbb  8bcf                 mov ecx, edi
// 00644cbd  e86efdffff           call 0x644a30
// 00644cc2  84c0                 test al, al
// 00644cc4  0f8472030000         je 0x64503c
// 00644cca  8bce                 mov ecx, esi
// 00644ccc  e88f46f5ff           call 0x599360
// 00644cd1  8d442428             lea eax, [esp + 0x28]
// 00644cd5  81c694000000         add esi, 0x94
// 00644cdb  50                   push eax
// 00644cdc  8bce                 mov ecx, esi
// 00644cde  e80d3bedff           call 0x5187f0
// 00644ce3  8b4f08               mov ecx, dword ptr [edi + 8]
// 00644ce6  51                   push ecx
// 00644ce7  e8f4fcffff           call 0x6449e0
// 00644cec  d9ee                 fldz 
// 00644cee  d9542418             fst dword ptr [esp + 0x18]
// 00644cf2  83c404               add esp, 4
// 00644cf5  d95c2444             fstp dword ptr [esp + 0x44]
// 00644cf9  89442458             mov dword ptr [esp + 0x58], eax
// 00644cfd  c644241301           mov byte ptr [esp + 0x13], 1
// 00644d02  32db                 xor bl, bl
// 00644d04  e8a7fcecff           call 0x5149b0
// 00644d09  d900                 fld dword ptr [eax]
// 00644d0b  d95c241c             fstp dword ptr [esp + 0x1c]
// 00644d0f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00644d17  d94004               fld dword ptr [eax + 4]
// 00644d1a  d95c2420             fstp dword ptr [esp + 0x20]
// 00644d1e  d94008               fld dword ptr [eax + 8]
// 00644d21  d95c2424             fstp dword ptr [esp + 0x24]
// 00644d25  d9442428             fld dword ptr [esp + 0x28]
// 00644d29  d90534c48100         fld dword ptr [0x81c434]
// 00644d2f  dcc9                 fmul st(1), st(0)
// 00644d31  d9c9                 fxch st(1)
// 00644d33  d95c2460             fstp dword ptr [esp + 0x60]
// 00644d37  d944242c             fld dword ptr [esp + 0x2c]
// 00644d3b  d8c9                 fmul st(1)
// 00644d3d  d95c245c             fstp dword ptr [esp + 0x5c]
// 00644d41  d84c2430             fmul dword ptr [esp + 0x30]
// 00644d45  d95c2454             fstp dword ptr [esp + 0x54]
// 00644d49  8da42400000000       lea esp, [esp]
// 00644d50  db442418             fild dword ptr [esp + 0x18]
// 00644d54  8d8c2480000000       lea ecx, [esp + 0x80]
// 00644d5b  d80d8cac8400         fmul dword ptr [0x84ac8c]
// 00644d61  d9542438             fst dword ptr [esp + 0x38]
// 00644d65  d825b8788300         fsub dword ptr [0x8378b8]
// 00644d6b  d99c24a4000000       fstp dword ptr [esp + 0xa4]
// 00644d72  e8b9bcecff           call 0x510a30
// 00644d77  d94624               fld dword ptr [esi + 0x24]
// 00644d7a  d9542440             fst dword ptr [esp + 0x40]
// 00644d7e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00644d82  d94628               fld dword ptr [esi + 0x28]
// 00644d85  83ec1c               sub esp, 0x1c
// 00644d88  d88424c0000000       fadd dword ptr [esp + 0xc0]
// 00644d8f  8bc4                 mov eax, esp
// 00644d91  c700c4828200         mov dword ptr [eax], 0x8282c4
// 00644d97  8b5708               mov edx, dword ptr [edi + 8]
// 00644d9a  d9542450             fst dword ptr [esp + 0x50]
// 00644d9e  89a424b8000000       mov dword ptr [esp + 0xb8], esp
// 00644da5  d9462c               fld dword ptr [esi + 0x2c]
// 00644da8  c784241c01000000000000 mov dword ptr [esp + 0x11c], 0
// 00644db3  d9542458             fst dword ptr [esp + 0x58]
// 00644db7  d99424a8000000       fst dword ptr [esp + 0xa8]
// 00644dbe  d9ca                 fxch st(2)
// 00644dc0  d99424a0000000       fst dword ptr [esp + 0xa0]
// 00644dc7  d9c9                 fxch st(1)
// 00644dc9  d99424a4000000       fst dword ptr [esp + 0xa4]
// 00644dd0  d944247c             fld dword ptr [esp + 0x7c]
// 00644dd4  d99424ac000000       fst dword ptr [esp + 0xac]
// 00644ddb  d9442478             fld dword ptr [esp + 0x78]
// 00644ddf  d99424b0000000       fst dword ptr [esp + 0xb0]
// 00644de6  d9442470             fld dword ptr [esp + 0x70]
// 00644dea  d99424b4000000       fst dword ptr [esp + 0xb4]
// 00644df1  d9cc                 fxch st(4)
// 00644df3  d95804               fstp dword ptr [eax + 4]
// 00644df6  d9ca                 fxch st(2)
// 00644df8  d95808               fstp dword ptr [eax + 8]
// 00644dfb  d9cb                 fxch st(3)
// 00644dfd  d9580c               fstp dword ptr [eax + 0xc]
// 00644e00  d9ca                 fxch st(2)
// 00644e02  d95810               fstp dword ptr [eax + 0x10]
// 00644e05  d9c9                 fxch st(1)
// 00644e07  d95814               fstp dword ptr [eax + 0x14]
// 00644e0a  d95818               fstp dword ptr [eax + 0x18]
// 00644e0d  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00644e13  50                   push eax
// 00644e14  8d442448             lea eax, [esp + 0x48]
// 00644e18  50                   push eax
// 00644e19  e8f28dfeff           call 0x62dc10
// 00644e1e  d9442428             fld dword ptr [esp + 0x28]
// 00644e22  d8642440             fsub dword ptr [esp + 0x40]
// 00644e26  d944242c             fld dword ptr [esp + 0x2c]
// 00644e2a  d8642434             fsub dword ptr [esp + 0x34]
// 00644e2e  d9442430             fld dword ptr [esp + 0x30]
// 00644e32  d864243c             fsub dword ptr [esp + 0x3c]
// 00644e36  d9c2                 fld st(2)
// 00644e38  decb                 fmulp st(3)
// 00644e3a  d9c1                 fld st(1)
// 00644e3c  deca                 fmulp st(2)
// 00644e3e  d9ca                 fxch st(2)
// 00644e40  dec1                 faddp st(1)
// 00644e42  d9c1                 fld st(1)
// 00644e44  deca                 fmulp st(2)
// 00644e46  dec1                 faddp st(1)
// 00644e48  d9fa                 fsqrt 
// 00644e4a  d81db8888200         fcomp dword ptr [0x8288b8]
// 00644e50  dfe0                 fnstsw ax
// 00644e52  f6c405               test ah, 5
// 00644e55  7a1d                 jp 0x644e74
// 00644e57  807c241300           cmp byte ptr [esp + 0x13], 0
// 00644e5c  7441                 je 0x644e9f
// 00644e5e  d9442438             fld dword ptr [esp + 0x38]
// 00644e62  c644241300           mov byte ptr [esp + 0x13], 0
// 00644e67  d95c2414             fstp dword ptr [esp + 0x14]
// 00644e6b  b301                 mov bl, 1
// 00644e6d  e86efaecff           call 0x5148e0
// 00644e72  eb17                 jmp 0x644e8b
// 00644e74  84db                 test bl, bl
// 00644e76  7427                 je 0x644e9f
// 00644e78  d9442438             fld dword ptr [esp + 0x38]
// 00644e7c  32db                 xor bl, bl
// 00644e7e  d8642414             fsub dword ptr [esp + 0x14]
// 00644e82  d95c2444             fstp dword ptr [esp + 0x44]
// 00644e86  e825faecff           call 0x5148b0
// 00644e8b  d900                 fld dword ptr [eax]
// 00644e8d  d95c241c             fstp dword ptr [esp + 0x1c]
// 00644e91  d94004               fld dword ptr [eax + 4]
// 00644e94  d95c2420             fstp dword ptr [esp + 0x20]
// 00644e98  d94008               fld dword ptr [eax + 8]
// 00644e9b  d95c2424             fstp dword ptr [esp + 0x24]
// 00644e9f  85ed                 test ebp, ebp
// 00644ea1  0f84f1000000         je 0x644f98
// 00644ea7  e874efecff           call 0x513e20
// 00644eac  50                   push eax
// 00644ead  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00644eb4  e867e3ecff           call 0x513220
// 00644eb9  d94624               fld dword ptr [esi + 0x24]
// 00644ebc  8b5500               mov edx, dword ptr [ebp]
// 00644ebf  d99c24d0000000       fstp dword ptr [esp + 0xd0]
// 00644ec6  d94628               fld dword ptr [esi + 0x28]
// 00644ec9  8b5238               mov edx, dword ptr [edx + 0x38]
// 00644ecc  d99c24d4000000       fstp dword ptr [esp + 0xd4]
// 00644ed3  8d8424ac000000       lea eax, [esp + 0xac]
// 00644eda  d9462c               fld dword ptr [esi + 0x2c]
// 00644edd  50                   push eax
// 00644ede  8bcd                 mov ecx, ebp
// 00644ee0  d99c24dc000000       fstp dword ptr [esp + 0xdc]
// 00644ee7  ffd2                 call edx
// 00644ee9  d9442428             fld dword ptr [esp + 0x28]
// 00644eed  d9442440             fld dword ptr [esp + 0x40]
// 00644ef1  8d442464             lea eax, [esp + 0x64]
// 00644ef5  dce9                 fsub st(1), st(0)
// 00644ef7  50                   push eax
// 00644ef8  d9442430             fld dword ptr [esp + 0x30]
// 00644efc  8d4c244c             lea ecx, [esp + 0x4c]
// 00644f00  d9442438             fld dword ptr [esp + 0x38]
// 00644f04  51                   push ecx
// 00644f05  dce9                 fsub st(1), st(0)
// 00644f07  8d9424e4000000       lea edx, [esp + 0xe4]
// 00644f0e  d9442438             fld dword ptr [esp + 0x38]
// 00644f12  52                   push edx
// 00644f13  d9442448             fld dword ptr [esp + 0x48]
// 00644f17  dce9                 fsub st(1), st(0)
// 00644f19  d9cd                 fxch st(5)
// 00644f1b  d95c2470             fstp dword ptr [esp + 0x70]
// 00644f1f  d9ca                 fxch st(2)
// 00644f21  d95c2474             fstp dword ptr [esp + 0x74]
// 00644f25  d9c9                 fxch st(1)
// 00644f27  d95c2478             fstp dword ptr [esp + 0x78]
// 00644f2b  d9c9                 fxch st(1)
// 00644f2d  d86624               fsub dword ptr [esi + 0x24]
// 00644f30  d9c9                 fxch st(1)
// 00644f32  d86628               fsub dword ptr [esi + 0x28]
// 00644f35  d9ca                 fxch st(2)
// 00644f37  d8662c               fsub dword ptr [esi + 0x2c]
// 00644f3a  d9c9                 fxch st(1)
// 00644f3c  d95c2454             fstp dword ptr [esp + 0x54]
// 00644f40  d9c9                 fxch st(1)
// 00644f42  d95c2458             fstp dword ptr [esp + 0x58]
// 00644f46  d95c245c             fstp dword ptr [esp + 0x5c]
// 00644f4a  e8e138edff           call 0x518830
// 00644f4f  d9442428             fld dword ptr [esp + 0x28]
// 00644f53  8b4500               mov eax, dword ptr [ebp]
// 00644f56  d95c247c             fstp dword ptr [esp + 0x7c]
// 00644f5a  d944242c             fld dword ptr [esp + 0x2c]
// 00644f5e  8b4054               mov eax, dword ptr [eax + 0x54]
// 00644f61  d99c2480000000       fstp dword ptr [esp + 0x80]
// 00644f68  83c408               add esp, 8
// 00644f6b  d9442428             fld dword ptr [esp + 0x28]
// 00644f6f  8d4c2474             lea ecx, [esp + 0x74]
// 00644f73  d95c247c             fstp dword ptr [esp + 0x7c]
// 00644f77  8d9424e0000000       lea edx, [esp + 0xe0]
// 00644f7e  d9e8                 fld1 
// 00644f80  c684240401000001     mov byte ptr [esp + 0x104], 1
// 00644f88  d9942480000000       fst dword ptr [esp + 0x80]
// 00644f8f  d91c24               fstp dword ptr [esp]
// 00644f92  51                   push ecx
// 00644f93  52                   push edx
// 00644f94  8bcd                 mov ecx, ebp
// 00644f96  ffd0                 call eax
// 00644f98  8b442418             mov eax, dword ptr [esp + 0x18]
// 00644f9c  40                   inc eax
// 00644f9d  83f812               cmp eax, 0x12
// 00644fa0  c7842400010000ffffffff mov dword ptr [esp + 0x100], 0xffffffff
// 00644fab  89442418             mov dword ptr [esp + 0x18], eax
// 00644faf  0f8c9bfdffff         jl 0x644d50
// 00644fb5  d90588ac8400         fld dword ptr [0x84ac88]
// 00644fbb  d8542414             fcom dword ptr [esp + 0x14]
// 00644fbf  dfe0                 fnstsw ax
// 00644fc1  f6c441               test ah, 0x41
// 00644fc4  7574                 jne 0x64503a
// 00644fc6  d9ee                 fldz 
// 00644fc8  d9442444             fld dword ptr [esp + 0x44]
// 00644fcc  d8d1                 fcom st(1)
// 00644fce  dfe0                 fnstsw ax
// 00644fd0  ddd9                 fstp st(1)
// 00644fd2  f6c441               test ah, 0x41
// 00644fd5  7561                 jne 0x645038
// 00644fd7  ded9                 fcompp 
// 00644fd9  dfe0                 fnstsw ax
// 00644fdb  f6c405               test ah, 5
// 00644fde  7a5c                 jp 0x64503c
// 00644fe0  85ed                 test ebp, ebp
// 00644fe2  7450                 je 0x645034
// 00644fe4  d94624               fld dword ptr [esi + 0x24]
// 00644fe7  d95c2448             fstp dword ptr [esp + 0x48]
// 00644feb  d94628               fld dword ptr [esi + 0x28]
// 00644fee  d805bccc8100         fadd dword ptr [0x81ccbc]
// 00644ff4  d95c244c             fstp dword ptr [esp + 0x4c]
// 00644ff8  d9462c               fld dword ptr [esi + 0x2c]
// 00644ffb  d95c2450             fstp dword ptr [esp + 0x50]
// 00644fff  e83cf9ecff           call 0x514940
// 00645004  d9e8                 fld1 
// 00645006  50                   push eax
// 00645007  83ec08               sub esp, 8
// 0064500a  d95c2404             fstp dword ptr [esp + 4]
// 0064500e  d905f8498200         fld dword ptr [0x8249f8]
// 00645014  8d4c2454             lea ecx, [esp + 0x54]
// 00645018  d91c24               fstp dword ptr [esp]
// 0064501b  6a01                 push 1
// 0064501d  51                   push ecx
// 0064501e  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 00645025  e8e681f3ff           call 0x57d210
// 0064502a  50                   push eax
// 0064502b  55                   push ebp
// 0064502c  e8bf230300           call 0x6773f0
// 00645031  83c418               add esp, 0x18
// 00645034  b001                 mov al, 1
// 00645036  eb06                 jmp 0x64503e
// 00645038  ddd8                 fstp st(0)
// 0064503a  ddd8                 fstp st(0)
// 0064503c  32c0                 xor al, al
// 0064503e  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 00645045  5f                   pop edi
// 00645046  5e                   pop esi
// 00645047  5d                   pop ebp
// 00645048  64890d00000000       mov dword ptr fs:[0], ecx
// 0064504f  5b                   pop ebx
// 00645050  81c4f4000000         add esp, 0xf4
// 00645056  c20400               ret 4

// from server: 94% by king_originala
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <math.h>
#include <stddef.h>
#include <string>
namespace G3D {
struct Vector2;struct Rect2D;struct AABox;struct Sphere;
template<class T>struct ReferenceCountedPointer {T*pointer;};
struct Vector3 {
 float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}
 Vector3&operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}
 Vector3 operator+(const Vector3&v)const{return Vector3(x+v.x,y+v.y,z+v.z);}Vector3 operator-(const Vector3&v)const{return Vector3(x-v.x,y-v.y,z-v.z);}Vector3 operator*(float f)const{return Vector3(x*f,y*f,z*f);}
 float squaredMagnitude()const{return x*x+y*y+z*z;}float magnitude()const{return(float)sqrt(squaredMagnitude());}
 static const Vector3&zero(){static Vector3 v(0,0,0);return v;}
};
struct Matrix3 {float elt[3][3];Matrix3(){}Matrix3(const Matrix3&m){*this=m;}Matrix3&operator=(const Matrix3&);Vector3 getColumn(int)const;static const Matrix3&identity();};
struct CoordinateFrame {Matrix3 rotation;Vector3 translation;CoordinateFrame():rotation(Matrix3::identity()),translation(Vector3::zero()){}CoordinateFrame(const Vector3&v):rotation(Matrix3::identity()),translation(v){}static const float zLookDirection;__declspec(noinline) Vector3 lookVector()const{return rotation.getColumn(2)*zLookDirection;}};
struct Color3 {float r,g,b;Color3(const Color3&c):r(c.r),g(c.g),b(c.b){}Color3&operator=(const Color3&c){r=c.r;g=c.g;b=c.b;return *this;}static const Color3&orange();static const Color3&green();static const Color3&red();static const Color3&purple();};
struct Color4 {float r,g,b,a;Color4(const Color3&c,float alpha=1):r(c.r),g(c.g),b(c.b),a(alpha){}};
struct Ray {Vector3 origin,direction;Ray():origin(Vector3::zero()),direction(Vector3::zero()){}virtual ~Ray(){}};
// Factory name below is a codegen label for the observed cdecl hidden-result ABI.
struct LineSegment {Vector3 point,direction;virtual ~LineSegment(){}static LineSegment fromOriginAndDirection(const Vector3&,const Vector3&);};
}
namespace RBX {
struct TextureProxyBase;
struct Adorn {
 enum Spacing {PROPORTIONAL_SPACING,FIXED_SPACING};enum XAlign{XALIGN_RIGHT,XALIGN_LEFT,XALIGN_CENTER};enum YAlign{YALIGN_TOP,YALIGN_BASELINE,YALIGN_CENTER,YALIGN_BOTTOM};
 virtual ~Adorn();
 virtual G3D::ReferenceCountedPointer<TextureProxyBase>createTextureProxy(const std::string&)=0;
 virtual void prepareRenderPass()=0;virtual void finishRenderPass()=0;virtual G3D::Rect2D getViewport()const=0;virtual int getWidth()const=0;virtual int getHeight()const=0;
 virtual void setTexture(int,G3D::ReferenceCountedPointer<TextureProxyBase>)=0;virtual G3D::Rect2D getTextureSize(G3D::ReferenceCountedPointer<TextureProxyBase>)const=0;
 virtual void line2d(const G3D::Vector2&,const G3D::Vector2&,const G3D::Color4&)const=0;virtual void outlineRect2d(const G3D::Rect2D&,float,const G3D::Color4&)const=0;virtual void rect2d(const G3D::Rect2D&,const G3D::Color4&)const=0;
 virtual G3D::Vector2 get2DStringBounds(const std::string&,double,Spacing)const=0;virtual G3D::Vector2 drawFont2D(const std::string&,const G3D::Vector2&,double,const G3D::Color4&,const G3D::Color4&,XAlign,YAlign,Spacing)const=0;
 virtual void setObjectToWorldMatrix(const G3D::CoordinateFrame&)=0;virtual void setColor(const G3D::Color4&)=0;
 virtual void box(const G3D::AABox&,const G3D::Color4&,const G3D::Color4&)=0;virtual void sphere(const G3D::Sphere&,const G3D::Color4&,const G3D::Color4&)=0;virtual void explosion(const G3D::Sphere&,const G3D::Color4&,const G3D::Color4&)=0;
 virtual void cylinderAlongX(float,float,const G3D::Color4&,const G3D::Color4&)=0;virtual void ray(const G3D::Ray&,const G3D::Color4&,float)=0;virtual void lineSegment(const G3D::LineSegment&,const G3D::Color4&,float)=0;
 virtual void axes(const G3D::Color4&,const G3D::Color4&,const G3D::Color4&,float)=0;virtual void quad(const G3D::Vector3&,const G3D::Vector3&,const G3D::Vector3&,const G3D::Vector3&,const G3D::Color4&)=0;
};
struct Instance {virtual ~Instance();char opaque[0x104-4];Instance*parent;};
struct Body {char opaque[0x94];G3D::CoordinateFrame frame;void updatePV()const;const G3D::CoordinateFrame&getCoordinateFrame()const{updatePV();return frame;}};
struct Humanoid:Instance {Body*getTorsoBody();};
struct RayQuery {G3D::Vector3 raycast(Instance*,G3D::Ray);};
RayQuery* __cdecl findRayQuery(Instance*);
struct DrawAdorn {static void cylinder(Adorn*,const G3D::CoordinateFrame&,int,float,float,const G3D::Color3&);};
struct Name;struct Primitive;
struct INamed {virtual const Name&getName()const=0;};
struct HitTestFilter {enum Result{STOP_TEST,IGNORE_PRIM,INCLUDE_PRIM};virtual Result filterResult(const Primitive*)const=0;};
namespace HUMAN {
struct HumanoidState:INamed,HitTestFilter {Humanoid*humanoid;bool checkNearObstruction(Adorn*);bool detectClimb(Adorn*);};
bool HumanoidState::detectClimb(Adorn*adorn){
 Body*torso=humanoid->getTorsoBody();if(!torso)return false;
 if(!checkNearObstruction(adorn))return false;
 const G3D::CoordinateFrame&frame=torso->getCoordinateFrame();
 G3D::Vector3 look=frame.lookVector();
 RayQuery*query=findRayQuery(humanoid);
 float firstHeight=0,span=0;bool first=true,inContact=false;
 G3D::Color3 color=G3D::Color3::orange();
 G3D::Vector3 direction=look*2.0f;
 for(int i=1;i<18;++i){
  float height=(float)i*0.1428571492433548f;
  G3D::Vector3 verticalOffset(0,height-2.7f,0);
  G3D::Ray ray;
  G3D::Vector3 origin=frame.translation+verticalOffset;
  ray.origin=origin;ray.direction=direction;
  G3D::Vector3 hit=query->raycast(humanoid->parent,ray);
  if((hit-origin).magnitude()<0.7f){if(first){first=false;firstHeight=height;inContact=true;color=G3D::Color3::green();}}
  else{if(inContact){inContact=false;span=height-firstHeight;color=G3D::Color3::red();}}
  if(adorn){
   adorn->setObjectToWorldMatrix(G3D::CoordinateFrame(frame.translation));
   G3D::LineSegment segment=G3D::LineSegment::fromOriginAndDirection(origin-frame.translation,hit-origin);
   adorn->lineSegment(segment,G3D::Color4(color),1);
  }
 }
 if(firstHeight<2.45f&&span>0&&span<2.45f){
  if(adorn)DrawAdorn::cylinder(adorn,G3D::CoordinateFrame(frame.translation+G3D::Vector3(0,5,0)),1,.2f,1,G3D::Color3::purple());
  return true;
 }
 return false;
}
}
}
typedef char ray_size[sizeof(G3D::Ray)==28?1:-1];
typedef char segment_size[sizeof(G3D::LineSegment)==28?1:-1];
typedef char frame_size[sizeof(G3D::CoordinateFrame)==48?1:-1];
typedef char color_size[sizeof(G3D::Color4)==16?1:-1];
typedef char torso_frame_offset[offsetof(RBX::Body,frame)==0x94?1:-1];
typedef char parent_offset[offsetof(RBX::Instance,parent)==0x104?1:-1];

typedef char humanoid_offset[offsetof(RBX::HUMAN::HumanoidState,humanoid)==8?1:-1];
typedef char ray_origin_offset[offsetof(G3D::Ray,origin)==4?1:-1];
typedef char ray_direction_offset[offsetof(G3D::Ray,direction)==0x10?1:-1];
typedef char segment_point_offset[offsetof(G3D::LineSegment,point)==4?1:-1];
