// from server: 93% by colin
// roc 2007-08 00596ca0  unit: RBX::LaserTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596ca0
//
// 00596ca0  8b442404             mov eax, dword ptr [esp + 4]
// 00596ca4  8b00                 mov eax, dword ptr [eax]
// 00596ca6  50                   push eax
// 00596ca7  89442408             mov dword ptr [esp + 8], eax
// 00596cab  db442408             fild dword ptr [esp + 8]
// 00596caf  68a0d37800           push 0x78d3a0
// 00596cb4  83ec08               sub esp, 8
// 00596cb7  dd1c24               fstp qword ptr [esp]
// 00596cba  51                   push ecx
// 00596cbb  e820feffff           call 0x596ae0
// 00596cc0  83c414               add esp, 0x14
// 00596cc3  c20400               ret 4

struct S {
    void f(int*);
};

extern "C" void __cdecl helper(double, const char*, int);

void S::f(int* p) {
    int v = *p;
    helper((double)v, (const char*)0x78d3a0, v);
}
