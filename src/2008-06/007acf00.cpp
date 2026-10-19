// from server: 96% by colin
// from server: 93% by colin
// roc 2008-06 007acf00  unit: RBX::RenderNew::Material::Level  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007acf00
//
// 007acf00  56                   push esi
// 007acf01  57                   push edi
// 007acf02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007acf06  8a4704               mov al, byte ptr [edi + 4]
// 007acf09  8bf1                 mov esi, ecx
// 007acf0b  884604               mov byte ptr [esi + 4], al
// 007acf0e  8b4f08               mov ecx, dword ptr [edi + 8]
// 007acf11  51                   push ecx
// 007acf12  8d4e08               lea ecx, [esi + 8]
// 007acf15  e886c0deff           call 0x598fa0
// 007acf1a  8b570c               mov edx, dword ptr [edi + 0xc]
// 007acf1d  52                   push edx
// 007acf1e  8d4e0c               lea ecx, [esi + 0xc]
// 007acf21  e87ac0deff           call 0x598fa0
// 007acf26  d94710               fld dword ptr [edi + 0x10]
// 007acf29  d95e10               fstp dword ptr [esi + 0x10]
// 007acf2c  83c72c               add edi, 0x2c
// 007acf2f  d947e8               fld dword ptr [edi - 0x18]
// 007acf32  57                   push edi
// 007acf33  d95e14               fstp dword ptr [esi + 0x14]
// 007acf36  8d4e2c               lea ecx, [esi + 0x2c]
// 007acf39  d947ec               fld dword ptr [edi - 0x14]
// 007acf3c  d95e18               fstp dword ptr [esi + 0x18]
// 007acf3f  d947f0               fld dword ptr [edi - 0x10]
// 007acf42  d95e1c               fstp dword ptr [esi + 0x1c]
// 007acf45  d947f4               fld dword ptr [edi - 0xc]
// 007acf48  d95e20               fstp dword ptr [esi + 0x20]
// 007acf4b  d947f8               fld dword ptr [edi - 8]
// 007acf4e  d95e24               fstp dword ptr [esi + 0x24]
// 007acf51  d947fc               fld dword ptr [edi - 4]
// 007acf54  d95e28               fstp dword ptr [esi + 0x28]
// 007acf57  ff15f4458000         call dword ptr [0x8045f4]
// 007acf5d  5f                   pop edi
// 007acf5e  8bc6                 mov eax, esi
// 007acf60  5e                   pop esi
// 007acf61  c20400               ret 4
#include <intrin.h>

struct MaterialPtr {
    void* p;
    MaterialPtr& operator=(const MaterialPtr& o);
};

struct Obj {
    char pad0[4];
    char b4;
    MaterialPtr m8;
    MaterialPtr mc;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    MaterialPtr m2c;
};

extern "C" void __stdcall sub_598fa0(MaterialPtr* dst, MaterialPtr* src);

struct Level {
    char pad0[4];
    char b4;
    MaterialPtr m8;
    MaterialPtr mc;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    MaterialPtr m2c;
    Level* assign(const Obj* o);
};

Level* Level::assign(const Obj* o)
{
    b4 = o->b4;
    _ReadWriteBarrier();
    m8 = o->m8;
    mc = o->mc;
    f10 = o->f10;
    f14 = o->f14;
    f18 = o->f18;
    f1c = o->f1c;
    f20 = o->f20;
    f24 = o->f24;
    f28 = o->f28;
    m2c = o->m2c;
    return this;
}
