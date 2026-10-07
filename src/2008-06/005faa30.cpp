// roc 2008-06 005faa30  unit: UString_sink::?$stream_buffer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faa30
//
// 005faa30  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005faa33  8b4010               mov eax, dword ptr [eax + 0x10]
// 005faa36  c3                   ret 
// auto-matched from its assembly shape

struct I_func_005faa30 {
    char pad[16];
    int m_x;
};
struct S_func_005faa30 {
    char pad[16];
    I_func_005faa30* m_p;
    int f();
};
int S_func_005faa30::f()
{
    return m_p->m_x;
}
