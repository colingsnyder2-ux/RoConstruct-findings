// roc 2010-06 004d66b0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d66b0
//
// 004d66b0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 004d66b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004d66b0 {
    char pad0[164];
    int m_x;
    int f();
};
int S_func_004d66b0::f()
{
    return m_x;
}
