// roc 2011-06 008790a0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008790a0
//
// 008790a0  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 008790a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008790a0 {
    char pad0[212];
    int m_x;
    int f();
};
int S_func_008790a0::f()
{
    return m_x;
}
