// from server: 66% by colin
// roc 2007-08 00596cd0  unit: RBX::LaserTool  size: 48 bytes
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

struct S {
    int f(int* p);
};

extern "C" void __cdecl sub_596AE0(const char*, double, int);

int S::f(int* p) {
    int v = *p;
    double d = (double)v;
    if (v < 0) {
        d += *(double*)0x78b130;
    }
    sub_596AE0((const char*)0x78d3a0, d, v);
    return v;
}
