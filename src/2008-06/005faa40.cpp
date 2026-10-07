// roc 2008-06 005faa40  unit: UString_sink::?$stream_buffer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faa40
//
// 005faa40  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005faa43  8b401c               mov eax, dword ptr [eax + 0x1c]
// 005faa46  c3                   ret 
// auto-matched from its assembly shape

struct I_func_005faa40 {
    char pad[28];
    int m_x;
};
struct S_func_005faa40 {
    char pad[16];
    I_func_005faa40* m_p;
    int f();
};
int S_func_005faa40::f()
{
    return m_p->m_x;
}
