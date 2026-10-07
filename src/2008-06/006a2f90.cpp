// roc 2008-06 006a2f90  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2f90
//
// 006a2f90  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 006a2f96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a2f90 {
    char pad0[164];
    int m_x;
    int f();
};
int S_func_006a2f90::f()
{
    return m_x;
}
