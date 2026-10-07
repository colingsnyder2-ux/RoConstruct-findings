// roc 2011-06 0058bd90  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058bd90
//
// 0058bd90  c681a800000001       mov byte ptr [ecx + 0xa8], 1
// 0058bd97  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058bd90 {
    char pad0[168];
    char m_x;
    void f();
};
void S_func_0058bd90::f()
{
    m_x = (char)1;
}
