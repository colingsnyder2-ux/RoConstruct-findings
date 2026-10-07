// roc 2010-06 006a0920  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0920
//
// 006a0920  8b442404             mov eax, dword ptr [esp + 4]
// 006a0924  894148               mov dword ptr [ecx + 0x48], eax
// 006a0927  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006a0920 {
    char pad0[72];
    int m_x;
    void f(int a1);
};
void S_func_006a0920::f(int a1)
{
    m_x = (int)a1;
}
