// roc 2007-08 00697ce0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697ce0
//
// 00697ce0  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00697ce6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00697ce0 {
    char pad0[200];
    int m_x;
    int f();
};
int S_func_00697ce0::f()
{
    return m_x;
}
