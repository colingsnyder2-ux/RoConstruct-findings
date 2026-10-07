// roc 2007-08 00631c90  unit: CXTPCommandBars  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00631c90
//
// 00631c90  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 00631c96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00631c90 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_00631c90::f()
{
    return m_x;
}
