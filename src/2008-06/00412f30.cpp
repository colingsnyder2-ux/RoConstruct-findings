// roc 2008-06 00412f30  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412f30
//
// 00412f30  c70164e88000         mov dword ptr [ecx], 0x80e864
// 00412f36  e9efde2800           jmp 0x6a0e2a
// auto-matched from its assembly shape

struct B_func_00412f30 { virtual ~B_func_00412f30(); };
struct S_func_00412f30 : B_func_00412f30 { ~S_func_00412f30(); };
S_func_00412f30::~S_func_00412f30()
{
}
