// roc 2009-06 00427770  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427770
//
// 00427770  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 00427776  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00427770 {
    char pad0[164];
    int m_x;
    int f();
};
int S_func_00427770::f()
{
    return m_x;
}
