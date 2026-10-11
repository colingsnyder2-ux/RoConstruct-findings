// from server: 100% by tester
// roc 2008-06 005c3f60  unit: RBX::Profiling::Profiler  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3f60
//
// 005c3f60  51                   push ecx
// 005c3f61  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005c3f64  890424               mov dword ptr [esp], eax
// 005c3f67  85c0                 test eax, eax
// 005c3f69  7e08                 jle 0x5c3f73
// 005c3f6b  db0424               fild dword ptr [esp]
// 005c3f6e  dc7908               fdivr qword ptr [ecx + 8]
// 005c3f71  59                   pop ecx
// 005c3f72  c3                   ret 
// 005c3f73  d9ee                 fldz 
// 005c3f75  59                   pop ecx
// 005c3f76  c3                   ret 

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
