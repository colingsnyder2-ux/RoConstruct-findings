// roc 2007-08 0042f5a0  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f5a0
//
// 0042f5a0  8b816c010000         mov eax, dword ptr [ecx + 0x16c]
// 0042f5a6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042f5a0 {
    char pad0[364];
    int m_x;
    int f();
};
int S_func_0042f5a0::f()
{
    return m_x;
}
