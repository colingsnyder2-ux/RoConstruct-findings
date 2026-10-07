// roc 2010-06 0087a4c0  unit: CXTPPropertyGridInplaceButton  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a4c0
//
// 0087a4c0  8b4144               mov eax, dword ptr [ecx + 0x44]
// 0087a4c3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0087a4c0 {
    char pad0[68];
    int m_x;
    int f();
};
int S_func_0087a4c0::f()
{
    return m_x;
}
