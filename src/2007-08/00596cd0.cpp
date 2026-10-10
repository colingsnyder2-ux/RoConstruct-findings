// from server: 87% by colin
// roc 2007-08 00596cd0  unit: seg_00590000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596cd0
//
// 00596cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00596cd4  8b00                 mov eax, dword ptr [eax]
// 00596cd6  85c0                 test eax, eax
// 00596cd8  50                   push eax
// 00596cd9  89442408             mov dword ptr [esp + 8], eax
// 00596cdd  db442408             fild dword ptr [esp + 8]
// 00596ce1  68a0d37800           push 0x78d3a0
// 00596ce6  7d06                 jge 0x596cee
// 00596ce8  dc0530b17800         fadd qword ptr [0x78b130]
// 00596cee  83ec08               sub esp, 8
// 00596cf1  dd1c24               fstp qword ptr [esp]
// 00596cf4  51                   push ecx
// 00596cf5  e8e6fdffff           call 0x596ae0
// 00596cfa  83c414               add esp, 0x14
// 00596cfd  c20400               ret 4

extern "C" int __cdecl sub_596AE0(int, double, const char*, int);

extern double g_78B130;
extern const char g_78D3A0[];

struct RBX_LaserTool
{
    int sub_596CD0(int* p);
};

int RBX_LaserTool::sub_596CD0(int* p)
{
    int v = *p;
    double d = (double)v;
    if (v < 0)
        d += g_78B130;
    return sub_596AE0((int)this, d, g_78D3A0, v);
}
