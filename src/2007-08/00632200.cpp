// roc 2007-08 00632200  unit: CRobloxControlColorSelector  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00632200
//
// 00632200  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 00632206  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00632200 {
    char pad0[164];
    int m_x;
    int f();
};
int S_func_00632200::f()
{
    return m_x;
}
