// from server: 61% by king_originala
// roc 2008-06 00437c20  unit: RBX::VBrickColor::?$XItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437c20
//
// 00437c20  51                   push ecx
// 00437c21  8b01                 mov eax, dword ptr [ecx]
// 00437c23  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00437c29  56                   push esi
// 00437c2a  ffd2                 call edx
// 00437c2c  0fb6d0               movzx edx, al
// 00437c2f  89542404             mov dword ptr [esp + 4], edx
// 00437c33  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00437c37  8bd0                 mov edx, eax
// 00437c39  db442404             fild dword ptr [esp + 4]
// 00437c3d  c1ea08               shr edx, 8
// 00437c40  d905d4358100         fld dword ptr [0x8135d4]
// 00437c46  0fb6d2               movzx edx, dl
// 00437c49  dcc9                 fmul st(1), st(0)
// 00437c4b  83ec0c               sub esp, 0xc
// 00437c4e  d9c9                 fxch st(1)
// 00437c50  8bcc                 mov ecx, esp
// 00437c52  89542410             mov dword ptr [esp + 0x10], edx
// 00437c56  c1e810               shr eax, 0x10
// 00437c59  d919                 fstp dword ptr [ecx]
// 00437c5b  0fb6c0               movzx eax, al
// 00437c5e  db442410             fild dword ptr [esp + 0x10]
// 00437c62  89442410             mov dword ptr [esp + 0x10], eax
// 00437c66  d8c9                 fmul st(1)
// 00437c68  56                   push esi
// 00437c69  d95904               fstp dword ptr [ecx + 4]
// 00437c6c  da4c2414             fimul dword ptr [esp + 0x14]
// 00437c70  d95908               fstp dword ptr [ecx + 8]
// 00437c73  e868e61700           call 0x5b62e0
// 00437c78  83c410               add esp, 0x10
// 00437c7b  8bc6                 mov eax, esi
// 00437c7d  5e                   pop esi
// 00437c7e  59                   pop ecx
// 00437c7f  c20400               ret 4

struct S;

struct VTable {
    void* slots[58];
    unsigned int (__thiscall *getColor)(S*);
};

struct Triple {
    float x, y, z;
};

extern const float colorScale;
extern "C" void __cdecl constructColor(void*, Triple);

struct S {
    VTable* vtable;
    void* convert(void* result);
};

void* S::convert(void* result)
{
    unsigned int color = vtable->getColor(this);
    Triple value;
    value.x = (color & 255) * colorScale;
    value.y = ((color >> 8) & 255) * colorScale;
    value.z = ((color >> 16) & 255) * colorScale;
    constructColor(result, value);
    return result;
}
