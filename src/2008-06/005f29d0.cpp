// roc 2008-06 005f29d0  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f29d0
//
// 005f29d0  8b442404             mov eax, dword ptr [esp + 4]
// 005f29d4  894148               mov dword ptr [ecx + 0x48], eax
// 005f29d7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005f29d0 {
    char pad0[72];
    int m_x;
    void f(int a1);
};
void S_func_005f29d0::f(int a1)
{
    m_x = (int)a1;
}
