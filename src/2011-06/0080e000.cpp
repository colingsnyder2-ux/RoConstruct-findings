// roc 2011-06 0080e000  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e000
//
// 0080e000  c7014817ac00         mov dword ptr [ecx], 0xac1748
// 0080e006  e9a5b20a00           jmp 0x8b92b0
// auto-matched from its assembly shape

struct B_func_0080e000 { virtual ~B_func_0080e000(); };
struct S_func_0080e000 : B_func_0080e000 { ~S_func_0080e000(); };
S_func_0080e000::~S_func_0080e000()
{
}
