// roc 2011-06 0058bff0  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058bff0
//
// 0058bff0  d98198000000         fld dword ptr [ecx + 0x98]
// 0058bff6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058bff0 {
    char pad[152];
    float m_x;
    float f();
};
float S_func_0058bff0::f()
{
    return m_x;
}
