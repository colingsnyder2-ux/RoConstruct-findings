// roc 2011-06 00415450  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00415450
//
// 00415450  c70154e7a500         mov dword ptr [ecx], 0xa5e754
// 00415456  e995533f00           jmp 0x80a7f0
// auto-matched from its assembly shape

struct B_func_00415450 { virtual ~B_func_00415450(); };
struct S_func_00415450 : B_func_00415450 { ~S_func_00415450(); };
S_func_00415450::~S_func_00415450()
{
}
