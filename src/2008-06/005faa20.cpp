// roc 2008-06 005faa20  unit: UString_sink::?$stream_buffer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faa20
//
// 005faa20  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005faa23  8b4004               mov eax, dword ptr [eax + 4]
// 005faa26  c3                   ret 
// auto-matched from its assembly shape

struct I_func_005faa20 {
    char pad[4];
    int m_x;
};
struct S_func_005faa20 {
    char pad[16];
    I_func_005faa20* m_p;
    int f();
};
int S_func_005faa20::f()
{
    return m_p->m_x;
}
