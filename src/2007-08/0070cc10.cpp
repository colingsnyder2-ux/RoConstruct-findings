// roc 2007-08 0070cc10  unit: CXTColorBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070cc10
//
// 0070cc10  c70104dc7d00         mov dword ptr [ecx], 0x7ddc04
// 0070cc16  e915fdffff           jmp 0x70c930
// auto-matched from its assembly shape

struct B_func_0070cc10 { virtual ~B_func_0070cc10(); };
struct S_func_0070cc10 : B_func_0070cc10 { ~S_func_0070cc10(); };
S_func_0070cc10::~S_func_0070cc10()
{
}
