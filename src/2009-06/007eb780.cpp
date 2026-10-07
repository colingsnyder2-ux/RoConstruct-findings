// roc 2009-06 007eb780  unit: CXTPPropertyGridInplaceButton  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb780
//
// 007eb780  8b4144               mov eax, dword ptr [ecx + 0x44]
// 007eb783  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007eb780 {
    char pad0[68];
    int m_x;
    int f();
};
int S_func_007eb780::f()
{
    return m_x;
}
