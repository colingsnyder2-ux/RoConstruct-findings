// from server: 67% by colin
// roc 2007-08 00596c70  unit: RBX::LaserTool  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596c70
//
// 00596c70  8b442404             mov eax, dword ptr [esp + 4]
// 00596c74  dd00                 fld qword ptr [eax]
// 00596c76  83ec08               sub esp, 8
// 00596c79  dd1c24               fstp qword ptr [esp]
// 00596c7c  6898d37800           push 0x78d398
// 00596c81  dd00                 fld qword ptr [eax]
// 00596c83  83ec08               sub esp, 8
// 00596c86  dd1c24               fstp qword ptr [esp]
// 00596c89  51                   push ecx
// 00596c8a  e851feffff           call 0x596ae0
// 00596c8f  83c418               add esp, 0x18
// 00596c92  c20400               ret 4

extern "C" int __cdecl G1_func_00596ae0(const char*, double, double);

struct S {
    int f(double* p);
};

int S::f(double* p)
{
    return G1_func_00596ae0("%.3g", *p, *p);
}
