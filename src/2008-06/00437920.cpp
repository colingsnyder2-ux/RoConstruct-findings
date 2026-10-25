// from server: 100% by king_originala
// roc 2008-06 00437920  unit: G3D::VColor3::?$XItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437920
//
// 00437920  51                   push ecx
// 00437921  8b01                 mov eax, dword ptr [ecx]
// 00437923  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00437929  ffd2                 call edx
// 0043792b  0fb6c8               movzx ecx, al
// 0043792e  8bd0                 mov edx, eax
// 00437930  890c24               mov dword ptr [esp], ecx
// 00437933  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00437937  c1ea08               shr edx, 8
// 0043793a  db0424               fild dword ptr [esp]
// 0043793d  0fb6d2               movzx edx, dl
// 00437940  d905d4358100         fld dword ptr [0x8135d4]
// 00437946  dcc9                 fmul st(1), st(0)
// 00437948  89542408             mov dword ptr [esp + 8], edx
// 0043794c  d9c9                 fxch st(1)
// 0043794e  c1e810               shr eax, 0x10
// 00437951  0fb6c0               movzx eax, al
// 00437954  d919                 fstp dword ptr [ecx]
// 00437956  db442408             fild dword ptr [esp + 8]
// 0043795a  89442408             mov dword ptr [esp + 8], eax
// 0043795e  8bc1                 mov eax, ecx
// 00437960  d8c9                 fmul st(1)
// 00437962  d95904               fstp dword ptr [ecx + 4]
// 00437965  da4c2408             fimul dword ptr [esp + 8]
// 00437969  d95908               fstp dword ptr [ecx + 8]
// 0043796c  59                   pop ecx
// 0043796d  c20400               ret 4

struct S;

struct VTable {
    char pad[0xe8];
    unsigned int (__thiscall *getColor)(S*);
};

struct Color3 {
    float r, g, b;
};

extern const float colorScale;

struct S {
    VTable* vtable;
    Color3 color();
};

#pragma float_control(precise, off, push)

Color3 S::color() {
    unsigned int value = vtable->getColor(this);
    Color3 result;
    result.r = (int)(unsigned char)value * colorScale;
    result.g = (int)(unsigned char)(value >> 8) * colorScale;
    result.b = (int)(unsigned char)(value >> 16) * colorScale;
    return result;
}

#pragma float_control(pop)
