// from server: 100% by EspClaude
// roc 2008-06 004fdbd0  unit: RBX::ViewNew::CylinderBuilder  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fdbd0
//
// 004fdbd0  8b542404             mov edx, dword ptr [esp + 4]
// 004fdbd4  d902                 fld dword ptr [edx]
// 004fdbd6  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fdbda  d830                 fdiv dword ptr [eax]
// 004fdbdc  53                   push ebx
// 004fdbdd  56                   push esi
// 004fdbde  8b7104               mov esi, dword ptr [ecx + 4]
// 004fdbe1  57                   push edi
// 004fdbe2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004fdbe6  0fbf5f02             movsx ebx, word ptr [edi + 2]
// 004fdbea  2bde                 sub ebx, esi
// 004fdbec  43                   inc ebx
// 004fdbed  895c2410             mov dword ptr [esp + 0x10], ebx
// 004fdbf1  4e                   dec esi
// 004fdbf2  d80db0718200         fmul dword ptr [0x8271b0]
// 004fdbf8  db442410             fild dword ptr [esp + 0x10]
// 004fdbfc  d90574e38100         fld dword ptr [0x81e374]
// 004fdc02  89742410             mov dword ptr [esp + 0x10], esi
// 004fdc06  dcc9                 fmul st(1), st(0)
// 004fdc08  db442410             fild dword ptr [esp + 0x10]
// 004fdc0c  defa                 fdivp st(2)
// 004fdc0e  d9c1                 fld st(1)
// 004fdc10  d9ff                 fcos 
// 004fdc12  d9e8                 fld1 
// 004fdc14  d8e1                 fsub st(1)
// 004fdc16  d9c4                 fld st(4)
// 004fdc18  d9fe                 fsin 
// 004fdc1a  d9c1                 fld st(1)
// 004fdc1c  d809                 fmul dword ptr [ecx]
// 004fdc1e  d828                 fsubr dword ptr [eax]
// 004fdc20  d8c9                 fmul st(1)
// 004fdc22  d91a                 fstp dword ptr [edx]
// 004fdc24  0fbf7702             movsx esi, word ptr [edi + 2]
// 004fdc28  3b7104               cmp esi, dword ptr [ecx + 4]
// 004fdc2b  d9cc                 fxch st(4)
// 004fdc2d  d9fe                 fsin 
// 004fdc2f  7c0b                 jl 0x4fdc3c
// 004fdc31  d9e8                 fld1 
// 004fdc33  d8e1                 fsub st(1)
// 004fdc35  d809                 fmul dword ptr [ecx]
// 004fdc37  d86804               fsubr dword ptr [eax + 4]
// 004fdc3a  eb0d                 jmp 0x4fdc49
// 004fdc3c  d90594748200         fld dword ptr [0x827494]
// 004fdc42  d8c1                 fadd st(1)
// 004fdc44  d809                 fmul dword ptr [ecx]
// 004fdc46  d86004               fsub dword ptr [eax + 4]
// 004fdc49  d95a04               fstp dword ptr [edx + 4]
// 004fdc4c  d9cd                 fxch st(5)
// 004fdc4e  d9ff                 fcos 
// 004fdc50  d9c9                 fxch st(1)
// 004fdc52  d809                 fmul dword ptr [ecx]
// 004fdc54  d86808               fsubr dword ptr [eax + 8]
// 004fdc57  d8c9                 fmul st(1)
// 004fdc59  d95a08               fstp dword ptr [edx + 8]
// 004fdc5c  8b542414             mov edx, dword ptr [esp + 0x14]
// 004fdc60  d9cb                 fxch st(3)
// 004fdc62  d8c9                 fmul st(1)
// 004fdc64  d91a                 fstp dword ptr [edx]
// 004fdc66  d9cb                 fxch st(3)
// 004fdc68  d95a04               fstp dword ptr [edx + 4]
// 004fdc6b  d9c9                 fxch st(1)
// 004fdc6d  deca                 fmulp st(2)
// 004fdc6f  d9c9                 fxch st(1)
// 004fdc71  d95a08               fstp dword ptr [edx + 8]
// 004fdc74  0fbf5702             movsx edx, word ptr [edi + 2]
// 004fdc78  3b5104               cmp edx, dword ptr [ecx + 4]
// 004fdc7b  d809                 fmul dword ptr [ecx]
// 004fdc7d  5f                   pop edi
// 004fdc7e  d94004               fld dword ptr [eax + 4]
// 004fdc81  5e                   pop esi
// 004fdc82  d8c1                 fadd st(1)
// 004fdc84  5b                   pop ebx
// 004fdc85  d821                 fsub dword ptr [ecx]
// 004fdc87  def9                 fdivp st(1)
// 004fdc89  7c0d                 jl 0x4fdc98
// 004fdc8b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fdc8f  d84804               fmul dword ptr [eax + 4]
// 004fdc92  d95804               fstp dword ptr [eax + 4]
// 004fdc95  c21400               ret 0x14
// 004fdc98  d94004               fld dword ptr [eax + 4]
// 004fdc9b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004fdc9f  dcc0                 fadd st(0), st(0)
// 004fdca1  d94104               fld dword ptr [ecx + 4]
// 004fdca4  d86004               fsub dword ptr [eax + 4]
// 004fdca7  d87004               fdiv dword ptr [eax + 4]
// 004fdcaa  d9e8                 fld1 
// 004fdcac  dee1                 fsubrp st(1)
// 004fdcae  d84804               fmul dword ptr [eax + 4]
// 004fdcb1  deca                 fmulp st(2)
// 004fdcb3  dee1                 fsubrp st(1)
// 004fdcb5  d95904               fstp dword ptr [ecx + 4]
// 004fdcb8  c21400               ret 0x14

// from server: 97% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <math.h>
namespace G3D {
struct Vector2 {float x,y;};
struct Vector2int16 {short x,y;};
struct Vector3 {
 float x,y,z;
 Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3& operator=(const Vector3& a){x=a.x;y=a.y;z=a.z;return *this;}
};
}
struct CylinderTransform {
 const float bevel;const int steps;
 void operator()(G3D::Vector3&,G3D::Vector3&,G3D::Vector2&,const G3D::Vector3&,const G3D::Vector2int16&)const;
};
void CylinderTransform::operator()(G3D::Vector3& vertex,G3D::Vector3& normal,G3D::Vector2& tex,const G3D::Vector3& radius,const G3D::Vector2int16& index)const{
 float angleX=vertex.x/radius.x*0.7853981852531433f;
 float angleY=float(index.y-steps+1)*1.5707963705062866f/float(steps-1);
 vertex.x=(radius.x-(1-cosf(angleY))*bevel)*sinf(angleX);
 if(index.y>=steps)vertex.y=radius.y-(1-sinf(angleY))*bevel;
 else vertex.y=(sinf(angleY)+1)*bevel-radius.y;
 vertex.z=(radius.z-(1-cosf(angleY))*bevel)*cosf(angleX);
 normal.x=cosf(angleY)*sinf(angleX);
 normal.y=sinf(angleY);
 normal.z=cosf(angleY)*cosf(angleX);
 float arc=1.5707963705062866f*bevel;float factor=arc/(radius.y+arc-bevel);
 if(index.y>=steps)tex.y*=factor;
 else tex.y=2*radius.y-(1-(tex.y-radius.y)/radius.y)*radius.y*factor;
}
