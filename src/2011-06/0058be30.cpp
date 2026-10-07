// roc 2011-06 0058be30  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058be30
//
// 0058be30  8a8198000000         mov al, byte ptr [ecx + 0x98]
// 0058be36  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058be30 {
    char pad0[152];
    char m_x;
    char f();
};
char S_func_0058be30::f()
{
    return m_x;
}
