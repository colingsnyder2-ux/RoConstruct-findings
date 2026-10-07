// roc 2009-06 00721220  unit: CPatchedControlComboBox  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00721220
//
// 00721220  c701ac218f00         mov dword ptr [ecx], 0x8f21ac
// 00721226  e955140100           jmp 0x732680
// auto-matched from its assembly shape

struct B_func_00721220 { virtual ~B_func_00721220(); };
struct S_func_00721220 : B_func_00721220 { ~S_func_00721220(); };
S_func_00721220::~S_func_00721220()
{
}
