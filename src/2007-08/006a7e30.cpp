// roc 2007-08 006a7e30  unit: CXTPRibbonBar  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7e30
//
// 006a7e30  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 006a7e36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a7e30 {
    char pad0[648];
    int m_x;
    int f();
};
int S_func_006a7e30::f()
{
    return m_x;
}
