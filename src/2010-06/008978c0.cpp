// roc 2010-06 008978c0  unit: CXTShadowWnd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008978c0
//
// 008978c0  c7015c05a700         mov dword ptr [ecx], 0xa7055c
// 008978c6  e90548fcff           jmp 0x85c0d0
// auto-matched from its assembly shape

struct B_func_008978c0 { virtual ~B_func_008978c0(); };
struct S_func_008978c0 : B_func_008978c0 { ~S_func_008978c0(); };
S_func_008978c0::~S_func_008978c0()
{
}
