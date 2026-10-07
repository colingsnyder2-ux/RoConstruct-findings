// roc 2011-06 004589c0  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004589c0
//
// 004589c0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 004589c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004589c0 {
    char pad0[164];
    int m_x;
    int f();
};
int S_func_004589c0::f()
{
    return m_x;
}
