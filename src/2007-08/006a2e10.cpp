// roc 2007-08 006a2e10  unit: CXTPHookManagerHookAble  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2e10
//
// 006a2e10  c70108357d00         mov dword ptr [ecx], 0x7d3508
// 006a2e16  e9854e0300           jmp 0x6d7ca0
// auto-matched from its assembly shape

struct B_func_006a2e10 { virtual ~B_func_006a2e10(); };
struct S_func_006a2e10 : B_func_006a2e10 { ~S_func_006a2e10(); };
S_func_006a2e10::~S_func_006a2e10()
{
}
