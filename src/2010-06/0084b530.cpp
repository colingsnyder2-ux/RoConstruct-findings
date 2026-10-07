// roc 2010-06 0084b530  unit: CXTPRibbonBar  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084b530
//
// 0084b530  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 0084b536  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 0084b53c  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0084b530 {
    char pad[480];
    int m_x;
};
struct S_func_0084b530 {
    char pad[616];
    I_func_0084b530* m_p;
    int f();
};
int S_func_0084b530::f()
{
    return m_p->m_x;
}
