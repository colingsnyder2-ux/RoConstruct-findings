// roc 2011-06 006a3130  unit: RBX::Ball  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3130
//
// 006a3130  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 006a3136  83c004               add eax, 4
// 006a3139  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a3130 {
    char pad0[260];
    int m_x;
    int f();
};
int S_func_006a3130::f()
{
    return m_x + 4;
}
