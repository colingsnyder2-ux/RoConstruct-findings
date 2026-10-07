// roc 2007-08 006a7c00  unit: CXTPRibbonBar  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7c00
//
// 006a7c00  8b8140020000         mov eax, dword ptr [ecx + 0x240]
// 006a7c06  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a7c00 {
    char pad0[576];
    int m_x;
    int f();
};
int S_func_006a7c00::f()
{
    return m_x;
}
