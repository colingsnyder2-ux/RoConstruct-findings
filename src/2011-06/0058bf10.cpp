// roc 2011-06 0058bf10  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058bf10
//
// 0058bf10  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 0058bf16  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0058bf10 {
    char pad0[148];
    int m_x;
    int f();
};
int S_func_0058bf10::f()
{
    return m_x;
}
