// roc 2007-08 006b35a0  unit: CXTPControlGallery  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006b35a0
//
// 006b35a0  8b81e4010000         mov eax, dword ptr [ecx + 0x1e4]
// 006b35a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006b35a0 {
    char pad0[484];
    int m_x;
    int f();
};
int S_func_006b35a0::f()
{
    return m_x;
}
