// roc 2012-06 00418c80  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418c80
//
// 00418c80  c701506cb400         mov dword ptr [ecx], 0xb46c50
// 00418c86  e975dfffff           jmp 0x416c00
// auto-matched from its assembly shape

struct B_func_00418c80 { virtual ~B_func_00418c80(); };
struct S_func_00418c80 : B_func_00418c80 { ~S_func_00418c80(); };
S_func_00418c80::~S_func_00418c80()
{
}
