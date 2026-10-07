// roc 2010-06 006c19c0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c19c0
//
// 006c19c0  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 006c19c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c19c0 {
    char pad0[176];
    int m_x;
    int f();
};
int S_func_006c19c0::f()
{
    return m_x;
}
