// roc 2008-06 00773050  unit: CXTPPropertyGridInplaceButton  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773050
//
// 00773050  8b4144               mov eax, dword ptr [ecx + 0x44]
// 00773053  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00773050 {
    char pad0[68];
    int m_x;
    int f();
};
int S_func_00773050::f()
{
    return m_x;
}
