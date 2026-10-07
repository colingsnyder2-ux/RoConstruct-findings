// roc 2010-06 00479390  unit: DxUserInput  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00479390
//
// 00479390  8b81a0000000         mov eax, dword ptr [ecx + 0xa0]
// 00479396  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00479390 {
    char pad0[160];
    int m_x;
    int f();
};
int S_func_00479390::f()
{
    return m_x;
}
