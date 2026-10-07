// roc 2009-06 00413750  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00413750
//
// 00413750  c70164f68a00         mov dword ptr [ecx], 0x8af664
// 00413756  e975bdffff           jmp 0x40f4d0
// auto-matched from its assembly shape

struct B_func_00413750 { virtual ~B_func_00413750(); };
struct S_func_00413750 : B_func_00413750 { ~S_func_00413750(); };
S_func_00413750::~S_func_00413750()
{
}
