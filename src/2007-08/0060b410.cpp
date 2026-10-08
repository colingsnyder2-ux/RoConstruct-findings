// roc 2007-08 0060b410  unit: CXTCaptionButtonTheme  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b410
//
// 0060b410  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0060b413  8b4064               mov eax, dword ptr [eax + 0x64]
// 0060b416  c3                   ret 
// auto-matched from its assembly shape

struct I_func_0060b410 {
    char pad[100];
    int m_x;
};
struct S_func_0060b410 {
    char pad[36];
    I_func_0060b410* m_p;
    int f();
};
int S_func_0060b410::f()
{
    return m_p->m_x;
}
