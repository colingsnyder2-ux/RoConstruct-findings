// roc 2009-06 00481d90  unit: Ogre::RbxStaticCluster  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00481d90
//
// 00481d90  83ec0c               sub esp, 0xc
// 00481d93  8b442410             mov eax, dword ptr [esp + 0x10]
// 00481d97  56                   push esi
// 00481d98  57                   push edi
// 00481d99  50                   push eax
// 00481d9a  8bf1                 mov esi, ecx
// 00481d9c  ff15740b8a00         call dword ptr [0x8a0b74]
// 00481da2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00481da6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00481daa  ff15e80e8a00         call dword ptr [0x8a0ee8]
// 00481db0  d94004               fld dword ptr [eax + 4]
// 00481db3  d86708               fsub dword ptr [edi + 8]
// 00481db6  8d4c2408             lea ecx, [esp + 8]
// 00481dba  d94008               fld dword ptr [eax + 8]
// 00481dbd  d8670c               fsub dword ptr [edi + 0xc]
// 00481dc0  d900                 fld dword ptr [eax]
// 00481dc2  d86704               fsub dword ptr [edi + 4]
// 00481dc5  d95c2408             fstp dword ptr [esp + 8]
// 00481dc9  d9c9                 fxch st(1)
// 00481dcb  d95c240c             fstp dword ptr [esp + 0xc]
// 00481dcf  d95c2410             fstp dword ptr [esp + 0x10]
// 00481dd3  ff15fc0b8a00         call dword ptr [0x8a0bfc]
// 00481dd9  d9c0                 fld st(0)
// 00481ddb  8d542418             lea edx, [esp + 0x18]
// 00481ddf  d827                 fsub dword ptr [edi]
// 00481de1  d9542418             fst dword ptr [esp + 0x18]
// 00481de5  d9ee                 fldz 
// 00481de7  d954241c             fst dword ptr [esp + 0x1c]
// 00481deb  ded9                 fcompp 
// 00481ded  dfe0                 fnstsw ax
// 00481def  f6c405               test ah, 5
// 00481df2  7b04                 jnp 0x481df8
// 00481df4  8d54241c             lea edx, [esp + 0x1c]
// 00481df8  d94620               fld dword ptr [esi + 0x20]
// 00481dfb  8d4e20               lea ecx, [esi + 0x20]
// 00481dfe  d81a                 fcomp dword ptr [edx]
// 00481e00  dfe0                 fnstsw ax
// 00481e02  f6c441               test ah, 0x41
// 00481e05  8bc2                 mov eax, edx
// 00481e07  7402                 je 0x481e0b
// 00481e09  8bc1                 mov eax, ecx
// 00481e0b  d900                 fld dword ptr [eax]
// 00481e0d  d919                 fstp dword ptr [ecx]
// 00481e0f  d807                 fadd dword ptr [edi]
// 00481e11  d9542418             fst dword ptr [esp + 0x18]
// 00481e15  d85e24               fcomp dword ptr [esi + 0x24]
// 00481e18  dfe0                 fnstsw ax
// 00481e1a  f6c441               test ah, 0x41
// 00481e1d  7511                 jne 0x481e30
// 00481e1f  8d442418             lea eax, [esp + 0x18]
// 00481e23  d900                 fld dword ptr [eax]
// 00481e25  5f                   pop edi
// 00481e26  d95e24               fstp dword ptr [esi + 0x24]
// 00481e29  5e                   pop esi
// 00481e2a  83c40c               add esp, 0xc
// 00481e2d  c20c00               ret 0xc
// 00481e30  d94624               fld dword ptr [esi + 0x24]
// 00481e33  5f                   pop edi
// 00481e34  d95e24               fstp dword ptr [esi + 0x24]
// 00481e37  5e                   pop esi
// 00481e38  83c40c               add esp, 0xc
// 00481e3b  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S@@QAEXABUAxisAlignedBox@@ABUSphere@@ABUCamera@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vector3 operator-(const Vector3&) const;
};

inline Vector3 Vector3::operator-(const Vector3& v) const
{
    return Vector3(x - v.x, y - v.y, z - v.z);
}

struct AxisAlignedBox {
    unsigned char data[32];
};

struct Camera;

struct Sphere {
    float radius;
    Vector3 center;
};

extern void (__thiscall *mergeBox)(AxisAlignedBox*, const AxisAlignedBox&);
extern const Vector3& (__thiscall *derivedPosition)(const Camera*);
extern float (__thiscall *vectorLength)(const Vector3*);

template<class T>
inline const T& minimum(const T& a, const T& b)
{
    return b < a ? b : a;
}

template<class T>
inline const T& maximum(const T& a, const T& b)
{
    return a < b ? b : a;
}

struct S : AxisAlignedBox {
    float nearest;
    float farthest;
    void f(const AxisAlignedBox&, const Sphere&, const Camera&);
};

void S::f(const AxisAlignedBox& box, const Sphere& sphere,
          const Camera& camera)
{
    mergeBox(this, box);
    Vector3 delta = derivedPosition(&camera) - sphere.center;
    float distance = vectorLength(&delta);
    nearest = minimum(nearest, maximum(0.0f, distance - sphere.radius));
    farthest = maximum(farthest, distance + sphere.radius);
}