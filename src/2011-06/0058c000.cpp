// roc 2011-06 0058c000  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058c000
//
// 0058c000  d9819c000000         fld dword ptr [ecx + 0x9c]
// 0058c006  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058c000 {
    char pad[156];
    float m_x;
    float f();
};
float S_func_0058c000::f()
{
    return m_x;
}
