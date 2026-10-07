// roc 2008-06 006fc9a0  unit: CXTPPropExchange  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc9a0
//
// 006fc9a0  c70154ae8500         mov dword ptr [ecx], 0x85ae54
// 006fc9a6  e98b47faff           jmp 0x6a1136
// auto-matched from its assembly shape

struct B_func_006fc9a0 { virtual ~B_func_006fc9a0(); };
struct S_func_006fc9a0 : B_func_006fc9a0 { ~S_func_006fc9a0(); };
S_func_006fc9a0::~S_func_006fc9a0()
{
}
