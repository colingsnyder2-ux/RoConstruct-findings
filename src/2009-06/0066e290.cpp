// roc 2009-06 0066e290  unit: RBX::VHumanoid::?$EventDesc  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066e290
//
// 0066e290  83ec30               sub esp, 0x30
// 0066e293  8b442438             mov eax, dword ptr [esp + 0x38]
// 0066e297  d94004               fld dword ptr [eax + 4]
// 0066e29a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0066e29e  d94008               fld dword ptr [eax + 8]
// 0066e2a1  d95c2410             fstp dword ptr [esp + 0x10]
// 0066e2a5  d9400c               fld dword ptr [eax + 0xc]
// 0066e2a8  d95c2414             fstp dword ptr [esp + 0x14]
// 0066e2ac  d94104               fld dword ptr [ecx + 4]
// 0066e2af  d94108               fld dword ptr [ecx + 8]
// 0066e2b2  d9410c               fld dword ptr [ecx + 0xc]
// 0066e2b5  d95c242c             fstp dword ptr [esp + 0x2c]
// 0066e2b9  d94010               fld dword ptr [eax + 0x10]
// 0066e2bc  d94014               fld dword ptr [eax + 0x14]
// 0066e2bf  d94018               fld dword ptr [eax + 0x18]
// 0066e2c2  d94110               fld dword ptr [ecx + 0x10]
// 0066e2c5  d95c2418             fstp dword ptr [esp + 0x18]
// 0066e2c9  d94114               fld dword ptr [ecx + 0x14]
// 0066e2cc  d94118               fld dword ptr [ecx + 0x18]
// 0066e2cf  d9542420             fst dword ptr [esp + 0x20]
// 0066e2d3  d9ce                 fxch st(6)
// 0066e2d5  d8e7                 fsub st(7)
// 0066e2d7  d91c24               fstp dword ptr [esp]
// 0066e2da  d9cc                 fxch st(4)
// 0066e2dc  d8642410             fsub dword ptr [esp + 0x10]
// 0066e2e0  d95c2404             fstp dword ptr [esp + 4]
// 0066e2e4  d944242c             fld dword ptr [esp + 0x2c]
// 0066e2e8  d8642414             fsub dword ptr [esp + 0x14]
// 0066e2ec  d95c2408             fstp dword ptr [esp + 8]
// 0066e2f0  dccc                 fmul st(4), st(0)
// 0066e2f2  d9c3                 fld st(3)
// 0066e2f4  d8ca                 fmul st(2)
// 0066e2f6  dec5                 faddp st(5)
// 0066e2f8  d9442418             fld dword ptr [esp + 0x18]
// 0066e2fc  d8cb                 fmul st(3)
// 0066e2fe  dec5                 faddp st(5)
// 0066e300  d9c4                 fld st(4)
// 0066e302  d8cd                 fmul st(5)
// 0066e304  d9e8                 fld1 
// 0066e306  dee1                 fsubrp st(1)
// 0066e308  d9542438             fst dword ptr [esp + 0x38]
// 0066e30c  dc1db8c48c00         fcomp qword ptr [0x8cc4b8]
// 0066e312  dfe0                 fnstsw ax
// 0066e314  f6c441               test ah, 0x41
// 0066e317  8b442434             mov eax, dword ptr [esp + 0x34]
// 0066e31b  755a                 jne 0x66e377
// 0066e31d  d9442408             fld dword ptr [esp + 8]
// 0066e321  d84c2420             fmul dword ptr [esp + 0x20]
// 0066e325  d9442404             fld dword ptr [esp + 4]
// 0066e329  decd                 fmulp st(5)
// 0066e32b  dec4                 faddp st(4)
// 0066e32d  d90424               fld dword ptr [esp]
// 0066e330  d84c2418             fmul dword ptr [esp + 0x18]
// 0066e334  dec4                 faddp st(4)
// 0066e336  d9cb                 fxch st(3)
// 0066e338  d9e0                 fchs 
// 0066e33a  decc                 fmulp st(4)
// 0066e33c  d9442408             fld dword ptr [esp + 8]
// 0066e340  d8cb                 fmul st(3)
// 0066e342  d9442404             fld dword ptr [esp + 4]
// 0066e346  d8ca                 fmul st(2)
// 0066e348  dec1                 faddp st(1)
// 0066e34a  d90424               fld dword ptr [esp]
// 0066e34d  d8cb                 fmul st(3)
// 0066e34f  dec1                 faddp st(1)
// 0066e351  dec4                 faddp st(4)
// 0066e353  d9cb                 fxch st(3)
// 0066e355  d8742438             fdiv dword ptr [esp + 0x38]
// 0066e359  dcc9                 fmul st(1), st(0)
// 0066e35b  dccb                 fmul st(3), st(0)
// 0066e35d  deca                 fmulp st(2)
// 0066e35f  dec3                 faddp st(3)
// 0066e361  d9ca                 fxch st(2)
// 0066e363  d918                 fstp dword ptr [eax]
// 0066e365  d8442410             fadd dword ptr [esp + 0x10]
// 0066e369  d95804               fstp dword ptr [eax + 4]
// 0066e36c  d8442414             fadd dword ptr [esp + 0x14]
// 0066e370  d95808               fstp dword ptr [eax + 8]
// 0066e373  83c430               add esp, 0x30
// 0066e376  c3                   ret 
// 0066e377  dddc                 fstp st(4)
// 0066e379  ddd9                 fstp st(1)
// 0066e37b  ddd8                 fstp st(0)
// 0066e37d  ddd9                 fstp st(1)
// 0066e37f  ddd8                 fstp st(0)
// 0066e381  d918                 fstp dword ptr [eax]
// 0066e383  d9442410             fld dword ptr [esp + 0x10]
// 0066e387  d95804               fstp dword ptr [eax + 4]
// 0066e38a  d9442414             fld dword ptr [esp + 0x14]
// 0066e38e  d95808               fstp dword ptr [eax + 8]
// 0066e391  83c430               add esp, 0x30
// 0066e394  c3                   ret 
// copied from an identical function in another client (function ?closestPoint@RBX@@YA?AVVector3@G3D@@ABVRbxRay@1@0@Z)

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