// from server: 74% by colin
// roc 2007-08 005bc810  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc810
//
// 005bc810  83ec18               sub esp, 0x18
// 005bc813  d901                 fld dword ptr [ecx]
// 005bc815  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005bc819  d94104               fld dword ptr [ecx + 4]
// 005bc81c  50                   push eax
// 005bc81d  d94108               fld dword ptr [ecx + 8]
// 005bc820  d9410c               fld dword ptr [ecx + 0xc]
// 005bc823  d94110               fld dword ptr [ecx + 0x10]
// 005bc826  d9442424             fld dword ptr [esp + 0x24]
// 005bc82a  dced                 fsub st(5), st(0)
// 005bc82c  d9cd                 fxch st(5)
// 005bc82e  d95c2404             fstp dword ptr [esp + 4]
// 005bc832  d9cb                 fxch st(3)
// 005bc834  d8e4                 fsub st(4)
// 005bc836  d95c2408             fstp dword ptr [esp + 8]
// 005bc83a  d9c9                 fxch st(1)
// 005bc83c  d8e3                 fsub st(3)
// 005bc83e  d95c240c             fstp dword ptr [esp + 0xc]
// 005bc842  d8c2                 fadd st(2)
// 005bc844  d95c2410             fstp dword ptr [esp + 0x10]
// 005bc848  d8c1                 fadd st(1)
// 005bc84a  d95c2414             fstp dword ptr [esp + 0x14]
// 005bc84e  d84114               fadd dword ptr [ecx + 0x14]
// 005bc851  8d4c2404             lea ecx, [esp + 4]
// 005bc855  d95c2418             fstp dword ptr [esp + 0x18]
// 005bc859  e852ffffff           call 0x5bc7b0
// 005bc85e  f6d8                 neg al
// 005bc860  1bc0                 sbb eax, eax
// 005bc862  83c001               add eax, 1
// 005bc865  83c418               add esp, 0x18
// 005bc868  c20800               ret 8

struct Vec3 {
    float x, y, z;
};

struct AABB {
    Vec3 min;
    Vec3 max;
    bool intersects(const AABB& other) const;
};

struct S {
    float f0, f4, f8, fC, f10, f14;
    bool g(const AABB& box, float v);
};

bool S::g(const AABB& box, float v)
{
    AABB b;
    b.min.x = f0 - v;
    b.min.y = f4 - v;
    b.min.z = f8 - v;
    b.max.x = fC + v;
    b.max.y = f10 + v;
    b.max.z = f14 + v;
    return !b.intersects(box);
}
