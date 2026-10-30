// roc 2009-12 006ca9d0  unit: RBX::Profiling::Profiler  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ca9d0
//
// 006ca9d0  51                   push ecx
// 006ca9d1  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006ca9d4  890424               mov dword ptr [esp], eax
// 006ca9d7  85c0                 test eax, eax
// 006ca9d9  7e08                 jle 0x6ca9e3
// 006ca9db  db0424               fild dword ptr [esp]
// 006ca9de  dc7908               fdivr qword ptr [ecx + 8]
// 006ca9e1  59                   pop ecx
// 006ca9e2  c3                   ret 
// 006ca9e3  d9ee                 fldz 
// 006ca9e5  59                   pop ecx
// 006ca9e6  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00000d@@QAENXZ)

namespace ns_ROCX00000d {
// from server: 100% by tester
struct S
{
    double f();
    int unused;
    double value;
    int count;
};

double S::f()
{
    if (count > 0)
        return value / count;
    return 0.0;
}
}
