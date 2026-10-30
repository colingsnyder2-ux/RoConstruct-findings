// roc 2009-06 00431160  unit: G3D::VColor3::?$XItem  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431160
//
// 00431160  51                   push ecx
// 00431161  8b01                 mov eax, dword ptr [ecx]
// 00431163  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00431169  ffd2                 call edx
// 0043116b  0fb6c8               movzx ecx, al
// 0043116e  8bd0                 mov edx, eax
// 00431170  890c24               mov dword ptr [esp], ecx
// 00431173  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00431177  c1ea08               shr edx, 8
// 0043117a  db0424               fild dword ptr [esp]
// 0043117d  0fb6d2               movzx edx, dl
// 00431180  d9056c3b8b00         fld dword ptr [0x8b3b6c]
// 00431186  dcc9                 fmul st(1), st(0)
// 00431188  89542408             mov dword ptr [esp + 8], edx
// 0043118c  d9c9                 fxch st(1)
// 0043118e  c1e810               shr eax, 0x10
// 00431191  0fb6c0               movzx eax, al
// 00431194  d919                 fstp dword ptr [ecx]
// 00431196  db442408             fild dword ptr [esp + 8]
// 0043119a  89442408             mov dword ptr [esp + 8], eax
// 0043119e  8bc1                 mov eax, ecx
// 004311a0  d8c9                 fmul st(1)
// 004311a2  d95904               fstp dword ptr [ecx + 4]
// 004311a5  da4c2408             fimul dword ptr [esp + 8]
// 004311a9  d95908               fstp dword ptr [ecx + 8]
// 004311ac  59                   pop ecx
// 004311ad  c20400               ret 4
// copied from an identical function in another client (function ?color@S@@QAE?AUColor3@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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