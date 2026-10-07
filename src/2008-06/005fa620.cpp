// roc 2008-06 005fa620  unit: UString_sink::?$stream_buffer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fa620
//
// 005fa620  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005fa623  8b4028               mov eax, dword ptr [eax + 0x28]
// 005fa626  c3                   ret 
// auto-matched from its assembly shape

struct I_func_005fa620 {
    char pad[40];
    int m_x;
};
struct S_func_005fa620 {
    char pad[16];
    I_func_005fa620* m_p;
    int f();
};
int S_func_005fa620::f()
{
    return m_p->m_x;
}
