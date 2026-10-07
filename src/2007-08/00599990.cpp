// roc 2007-08 00599990  unit: RBX::VCamera::?$FactoryProduct  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00599990
//
// 00599990  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00599996  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00599990 {
    char pad0[404];
    int m_x;
    int f();
};
int S_func_00599990::f()
{
    return m_x;
}
