// roc 2010-06 007c81b0  unit: CXTPCommandBars  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c81b0
//
// 007c81b0  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 007c81b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007c81b0 {
    char pad0[180];
    int m_x;
    int f();
};
int S_func_007c81b0::f()
{
    return m_x;
}
