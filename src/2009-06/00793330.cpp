// roc 2009-06 00793330  unit: CXTPHookManagerHookAble  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793330
//
// 00793330  c70138019000         mov dword ptr [ecx], 0x900138
// 00793336  e905e30400           jmp 0x7e1640
// auto-matched from its assembly shape

struct B_func_00793330 { virtual ~B_func_00793330(); };
struct S_func_00793330 : B_func_00793330 { ~S_func_00793330(); };
S_func_00793330::~S_func_00793330()
{
}
