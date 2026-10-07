// roc 2012-06 004152f0  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004152f0
//
// 004152f0  8b442404             mov eax, dword ptr [esp + 4]
// 004152f4  894148               mov dword ptr [ecx + 0x48], eax
// 004152f7  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_004152f0 {
    char pad0[72];
    int m_x;
    void f(int a1);
};
void S_func_004152f0::f(int a1)
{
    m_x = (int)a1;
}
