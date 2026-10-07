// roc 2010-06 00413230  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00413230
//
// 00413230  c701642ea000         mov dword ptr [ecx], 0xa02e64
// 00413236  e9f74e3900           jmp 0x7a8132
// auto-matched from its assembly shape

struct B_func_00413230 { virtual ~B_func_00413230(); };
struct S_func_00413230 : B_func_00413230 { ~S_func_00413230(); };
S_func_00413230::~S_func_00413230()
{
}
