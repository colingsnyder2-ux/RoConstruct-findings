// roc 2010-06 0052c0d0  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052c0d0
//
// 0052c0d0  c74118feffffff       mov dword ptr [ecx + 0x18], 0xfffffffe
// 0052c0d7  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0052c0d0 {
    char pad0[24];
    int m_x;
    void f();
};
void S_func_0052c0d0::f()
{
    m_x = (int)0xfffffffe;
}
