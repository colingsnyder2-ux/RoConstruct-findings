// roc 2007-08 00697cf0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697cf0
//
// 00697cf0  8b81cc000000         mov eax, dword ptr [ecx + 0xcc]
// 00697cf6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00697cf0 {
    char pad0[204];
    int m_x;
    int f();
};
int S_func_00697cf0::f()
{
    return m_x;
}
