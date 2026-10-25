// from server: 100% by king_originala
// roc 2008-06 00681250  unit: Ogre::RbxSceneNode  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00681250
//
// 00681250  83ec0c               sub esp, 0xc
// 00681253  8b442410             mov eax, dword ptr [esp + 0x10]
// 00681257  56                   push esi
// 00681258  57                   push edi
// 00681259  50                   push eax
// 0068125a  8bf1                 mov esi, ecx
// 0068125c  ff15c0468000         call dword ptr [0x8046c0]
// 00681262  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00681266  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0068126a  ff1590448000         call dword ptr [0x804490]
// 00681270  d94004               fld dword ptr [eax + 4]
// 00681273  d86708               fsub dword ptr [edi + 8]
// 00681276  8d4c2408             lea ecx, [esp + 8]
// 0068127a  d94008               fld dword ptr [eax + 8]
// 0068127d  d8670c               fsub dword ptr [edi + 0xc]
// 00681280  d900                 fld dword ptr [eax]
// 00681282  d86704               fsub dword ptr [edi + 4]
// 00681285  d95c2408             fstp dword ptr [esp + 8]
// 00681289  d9c9                 fxch st(1)
// 0068128b  d95c240c             fstp dword ptr [esp + 0xc]
// 0068128f  d95c2410             fstp dword ptr [esp + 0x10]
// 00681293  ff1540438000         call dword ptr [0x804340]
// 00681299  d9c0                 fld st(0)
// 0068129b  8d542418             lea edx, [esp + 0x18]
// 0068129f  d827                 fsub dword ptr [edi]
// 006812a1  d9542418             fst dword ptr [esp + 0x18]
// 006812a5  d9ee                 fldz 
// 006812a7  d954241c             fst dword ptr [esp + 0x1c]
// 006812ab  ded9                 fcompp 
// 006812ad  dfe0                 fnstsw ax
// 006812af  f6c405               test ah, 5
// 006812b2  7b04                 jnp 0x6812b8
// 006812b4  8d54241c             lea edx, [esp + 0x1c]
// 006812b8  d94620               fld dword ptr [esi + 0x20]
// 006812bb  8d4e20               lea ecx, [esi + 0x20]
// 006812be  d81a                 fcomp dword ptr [edx]
// 006812c0  dfe0                 fnstsw ax
// 006812c2  f6c441               test ah, 0x41
// 006812c5  8bc2                 mov eax, edx
// 006812c7  7402                 je 0x6812cb
// 006812c9  8bc1                 mov eax, ecx
// 006812cb  d900                 fld dword ptr [eax]
// 006812cd  d919                 fstp dword ptr [ecx]
// 006812cf  d807                 fadd dword ptr [edi]
// 006812d1  d9542418             fst dword ptr [esp + 0x18]
// 006812d5  d85e24               fcomp dword ptr [esi + 0x24]
// 006812d8  dfe0                 fnstsw ax
// 006812da  f6c441               test ah, 0x41
// 006812dd  7511                 jne 0x6812f0
// 006812df  8d442418             lea eax, [esp + 0x18]
// 006812e3  d900                 fld dword ptr [eax]
// 006812e5  5f                   pop edi
// 006812e6  d95e24               fstp dword ptr [esi + 0x24]
// 006812e9  5e                   pop esi
// 006812ea  83c40c               add esp, 0xc
// 006812ed  c20c00               ret 0xc
// 006812f0  d94624               fld dword ptr [esi + 0x24]
// 006812f3  5f                   pop edi
// 006812f4  d95e24               fstp dword ptr [esi + 0x24]
// 006812f7  5e                   pop esi
// 006812f8  83c40c               add esp, 0xc
// 006812fb  c20c00               ret 0xc

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
