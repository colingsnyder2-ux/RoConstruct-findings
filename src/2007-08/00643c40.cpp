// roc 2007-08 00643c40  unit: CXTPReportControl  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00643c40
//
// 00643c40  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 00643c46  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00643c40 {
    char pad0[196];
    int m_x;
    int f();
};
int S_func_00643c40::f()
{
    return m_x;
}
