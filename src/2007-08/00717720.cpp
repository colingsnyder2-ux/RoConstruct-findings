// roc 2007-08 00717720  unit: CXTPRibbonControlTab  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00717720
//
// 00717720  8b8104020000         mov eax, dword ptr [ecx + 0x204]
// 00717726  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00717720 {
    char pad0[516];
    int m_x;
    int f();
};
int S_func_00717720::f()
{
    return m_x;
}
