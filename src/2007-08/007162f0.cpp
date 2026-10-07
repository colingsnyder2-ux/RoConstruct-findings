// roc 2007-08 007162f0  unit: CXTPRibbonTab  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007162f0
//
// 007162f0  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 007162f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007162f0 {
    char pad0[136];
    int m_x;
    int f();
};
int S_func_007162f0::f()
{
    return m_x;
}
