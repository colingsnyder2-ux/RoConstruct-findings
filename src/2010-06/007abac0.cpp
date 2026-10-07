// roc 2010-06 007abac0  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007abac0
//
// 007abac0  c701e85aa500         mov dword ptr [ecx], 0xa55ae8
// 007abac6  e9f51e0100           jmp 0x7bd9c0
// auto-matched from its assembly shape

struct B_func_007abac0 { virtual ~B_func_007abac0(); };
struct S_func_007abac0 : B_func_007abac0 { ~S_func_007abac0(); };
S_func_007abac0::~S_func_007abac0()
{
}
