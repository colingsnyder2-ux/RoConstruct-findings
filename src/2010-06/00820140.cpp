// roc 2010-06 00820140  unit: CXTPWinThemeWrapper  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820140
//
// 00820140  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00820143  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 00820149  c3                   ret 
// auto-matched from its assembly shape

struct I_func_00820140 {
    char pad[648];
    int m_x;
};
struct S_func_00820140 {
    char pad[60];
    I_func_00820140* m_p;
    int f();
};
int S_func_00820140::f()
{
    return m_p->m_x;
}
