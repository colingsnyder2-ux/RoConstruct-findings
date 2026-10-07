// roc 2009-06 00775310  unit: CXTPPropExchange  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00775310
//
// 00775310  c701acbe8f00         mov dword ptr [ecx], 0x8fbeac
// 00775316  e99942faff           jmp 0x7195b4
// auto-matched from its assembly shape

struct B_func_00775310 { virtual ~B_func_00775310(); };
struct S_func_00775310 : B_func_00775310 { ~S_func_00775310(); };
S_func_00775310::~S_func_00775310()
{
}
