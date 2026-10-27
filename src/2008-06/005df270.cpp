// from server: 100% by colin
// roc 2008-06 005df270  unit: RBX::Message  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df270
//
// 005df270  83ec30               sub esp, 0x30
// 005df273  8b442438             mov eax, dword ptr [esp + 0x38]
// 005df277  d94004               fld dword ptr [eax + 4]
// 005df27a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005df27e  d94008               fld dword ptr [eax + 8]
// 005df281  d95c2410             fstp dword ptr [esp + 0x10]
// 005df285  d9400c               fld dword ptr [eax + 0xc]
// 005df288  d95c2414             fstp dword ptr [esp + 0x14]
// 005df28c  d94104               fld dword ptr [ecx + 4]
// 005df28f  d94108               fld dword ptr [ecx + 8]
// 005df292  d9410c               fld dword ptr [ecx + 0xc]
// 005df295  d95c242c             fstp dword ptr [esp + 0x2c]
// 005df299  d94010               fld dword ptr [eax + 0x10]
// 005df29c  d94014               fld dword ptr [eax + 0x14]
// 005df29f  d94018               fld dword ptr [eax + 0x18]
// 005df2a2  d94110               fld dword ptr [ecx + 0x10]
// 005df2a5  d95c2418             fstp dword ptr [esp + 0x18]
// 005df2a9  d94114               fld dword ptr [ecx + 0x14]
// 005df2ac  d94118               fld dword ptr [ecx + 0x18]
// 005df2af  d9542420             fst dword ptr [esp + 0x20]
// 005df2b3  d9ce                 fxch st(6)
// 005df2b5  d8e7                 fsub st(7)
// 005df2b7  d91c24               fstp dword ptr [esp]
// 005df2ba  d9cc                 fxch st(4)
// 005df2bc  d8642410             fsub dword ptr [esp + 0x10]
// 005df2c0  d95c2404             fstp dword ptr [esp + 4]
// 005df2c4  d944242c             fld dword ptr [esp + 0x2c]
// 005df2c8  d8642414             fsub dword ptr [esp + 0x14]
// 005df2cc  d95c2408             fstp dword ptr [esp + 8]
// 005df2d0  dccc                 fmul st(4), st(0)
// 005df2d2  d9c3                 fld st(3)
// 005df2d4  d8ca                 fmul st(2)
// 005df2d6  dec5                 faddp st(5)
// 005df2d8  d9442418             fld dword ptr [esp + 0x18]
// 005df2dc  d8cb                 fmul st(3)
// 005df2de  dec5                 faddp st(5)
// 005df2e0  d9c4                 fld st(4)
// 005df2e2  d8cd                 fmul st(5)
// 005df2e4  d9e8                 fld1 
// 005df2e6  dee1                 fsubrp st(1)
// 005df2e8  d9542438             fst dword ptr [esp + 0x38]
// 005df2ec  dc1d808f8200         fcomp qword ptr [0x828f80]
// 005df2f2  dfe0                 fnstsw ax
// 005df2f4  f6c441               test ah, 0x41
// 005df2f7  8b442434             mov eax, dword ptr [esp + 0x34]
// 005df2fb  755a                 jne 0x5df357
// 005df2fd  d9442408             fld dword ptr [esp + 8]
// 005df301  d84c2420             fmul dword ptr [esp + 0x20]
// 005df305  d9442404             fld dword ptr [esp + 4]
// 005df309  decd                 fmulp st(5)
// 005df30b  dec4                 faddp st(4)
// 005df30d  d90424               fld dword ptr [esp]
// 005df310  d84c2418             fmul dword ptr [esp + 0x18]
// 005df314  dec4                 faddp st(4)
// 005df316  d9cb                 fxch st(3)
// 005df318  d9e0                 fchs 
// 005df31a  decc                 fmulp st(4)
// 005df31c  d9442408             fld dword ptr [esp + 8]
// 005df320  d8cb                 fmul st(3)
// 005df322  d9442404             fld dword ptr [esp + 4]
// 005df326  d8ca                 fmul st(2)
// 005df328  dec1                 faddp st(1)
// 005df32a  d90424               fld dword ptr [esp]
// 005df32d  d8cb                 fmul st(3)
// 005df32f  dec1                 faddp st(1)
// 005df331  dec4                 faddp st(4)
// 005df333  d9cb                 fxch st(3)
// 005df335  d8742438             fdiv dword ptr [esp + 0x38]
// 005df339  dcc9                 fmul st(1), st(0)
// 005df33b  dccb                 fmul st(3), st(0)
// 005df33d  deca                 fmulp st(2)
// 005df33f  dec3                 faddp st(3)
// 005df341  d9ca                 fxch st(2)
// 005df343  d918                 fstp dword ptr [eax]
// 005df345  d8442410             fadd dword ptr [esp + 0x10]
// 005df349  d95804               fstp dword ptr [eax + 4]
// 005df34c  d8442414             fadd dword ptr [esp + 0x14]
// 005df350  d95808               fstp dword ptr [eax + 8]
// 005df353  83c430               add esp, 0x30
// 005df356  c3                   ret 
// 005df357  dddc                 fstp st(4)
// 005df359  ddd9                 fstp st(1)
// 005df35b  ddd8                 fstp st(0)
// 005df35d  ddd9                 fstp st(1)
// 005df35f  ddd8                 fstp st(0)
// 005df361  d918                 fstp dword ptr [eax]
// 005df363  d9442410             fld dword ptr [esp + 0x10]
// 005df367  d95804               fstp dword ptr [eax + 4]
// 005df36a  d9442414             fld dword ptr [esp + 0x14]
// 005df36e  d95808               fstp dword ptr [eax + 8]
// 005df371  83c430               add esp, 0x30
// 005df374  c3                   ret 

// from server: 74% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast

namespace G3D {
class Vector3 {
public:
    float x, y, z;
    Vector3() {}
    Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    Vector3& operator=(const Vector3& v) { x = v.x; y = v.y; z = v.z; return *this; }
    Vector3 operator+(const Vector3& v) const { return Vector3(x + v.x, y + v.y, z + v.z); }
    Vector3 operator-(const Vector3& v) const { return Vector3(x - v.x, y - v.y, z - v.z); }
    Vector3 operator*(float s) const { return Vector3(x * s, y * s, z * s); }
    float dot(const Vector3& v) const { return x * v.x + y * v.y + z * v.z; }
};
}

namespace G3D { inline Vector3 operator*(float s,const Vector3&v){return v*s;} }
namespace RBX {
class RbxRay {
public:
    int reserved;
    G3D::Vector3 origin;
    G3D::Vector3 direction;
};

G3D::Vector3 closestPoint(const RbxRay& pointOnRay, const RbxRay& otherRay)
{
    G3D::Vector3 pa = pointOnRay.origin;
    G3D::Vector3 pPlane = otherRay.origin;
    G3D::Vector3 ua = pointOnRay.direction;
    G3D::Vector3 ub = otherRay.direction;
    G3D::Vector3 p = pPlane - pa;
    float uaub = ua.dot(ub);
    float q1 = ua.dot(p);
    float q2 = -ub.dot(p);
    float d = 1 - uaub*uaub;
    if (d > 1e-5) {
        float alpha = (q1 + uaub*q2) / d;
        return pa + alpha * ua;
    }
    else {
        return pa;
    }
}
}
