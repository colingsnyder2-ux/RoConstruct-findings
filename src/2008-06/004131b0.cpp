// roc 2008-06 004131b0  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004131b0
//
// 004131b0  c701a0e88000         mov dword ptr [ecx], 0x80e8a0
// 004131b6  e9e5dfffff           jmp 0x4111a0
// auto-matched from its assembly shape

struct B_func_004131b0 { virtual ~B_func_004131b0(); };
struct S_func_004131b0 : B_func_004131b0 { ~S_func_004131b0(); };
S_func_004131b0::~S_func_004131b0()
{
}
