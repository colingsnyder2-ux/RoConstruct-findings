// roc 2010-06 006c19b0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c19b0
//
// 006c19b0  8b81ac000000         mov eax, dword ptr [ecx + 0xac]
// 006c19b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006c19b0 {
    char pad0[172];
    int m_x;
    int f();
};
int S_func_006c19b0::f()
{
    return m_x;
}
