// roc 2009-06 0040cb30  unit: UString_sink::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040cb30
//
// 0040cb30  8b442404             mov eax, dword ptr [esp + 4]
// 0040cb34  894148               mov dword ptr [ecx + 0x48], eax
// 0040cb37  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0040cb30 {
    char pad0[72];
    int m_x;
    void f(int a1);
};
void S_func_0040cb30::f(int a1)
{
    m_x = (int)a1;
}
