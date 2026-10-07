// roc 2011-06 004122a0  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004122a0
//
// 004122a0  8b442404             mov eax, dword ptr [esp + 4]
// 004122a4  894148               mov dword ptr [ecx + 0x48], eax
// 004122a7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004122a0 {
    char pad0[72];
    int m_x;
    void f(int a1);
};
void S_func_004122a0::f(int a1)
{
    m_x = (int)a1;
}
