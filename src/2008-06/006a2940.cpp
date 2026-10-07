// roc 2008-06 006a2940  unit: CXTPCommandBars  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2940
//
// 006a2940  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 006a2946  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a2940 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_006a2940::f()
{
    return m_x;
}
