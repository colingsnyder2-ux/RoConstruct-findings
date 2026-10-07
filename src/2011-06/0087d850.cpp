// roc 2011-06 0087d850  unit: CXTPWinThemeWrapper  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087d850
//
// 0087d850  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0087d853  8b8088020000         mov eax, dword ptr [eax + 0x288]
// 0087d859  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0087d850 {
    char pad[648];
    int m_x;
};
struct S_func_0087d850 {
    char pad[60];
    I_func_0087d850* m_p;
    int f();
};
int S_func_0087d850::f()
{
    return m_p->m_x;
}
