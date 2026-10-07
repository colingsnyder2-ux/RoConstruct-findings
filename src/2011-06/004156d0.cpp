// roc 2011-06 004156d0  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004156d0
//
// 004156d0  c70190e7a500         mov dword ptr [ecx], 0xa5e790
// 004156d6  e955e2ffff           jmp 0x413930
// auto-matched from its assembly shape

struct B_func_004156d0 { virtual ~B_func_004156d0(); };
struct S_func_004156d0 : B_func_004156d0 { ~S_func_004156d0(); };
S_func_004156d0::~S_func_004156d0()
{
}
