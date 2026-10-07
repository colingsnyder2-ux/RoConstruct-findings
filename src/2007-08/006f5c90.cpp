// roc 2007-08 006f5c90  unit: CXTPPropertyGridInplaceButton  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5c90
//
// 006f5c90  8b4144               mov eax, dword ptr [ecx + 0x44]
// 006f5c93  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006f5c90 {
    char pad0[68];
    int m_x;
    int f();
};
int S_func_006f5c90::f()
{
    return m_x;
}
