// roc 2007-08 0063a130  unit: CRobloxControlColorSelector  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a130
//
// 0063a130  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 0063a136  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0063a130 {
    char pad0[212];
    int m_x;
    int f();
};
int S_func_0063a130::f()
{
    return m_x;
}
