// roc 2007-08 005053c0  unit: G3D::Log  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005053c0
//
// 005053c0  c70184317900         mov dword ptr [ecx], 0x793184
// 005053c6  e995f2ffff           jmp 0x504660
// auto-matched from its assembly shape

struct B_func_005053c0 { virtual ~B_func_005053c0(); };
struct S_func_005053c0 : B_func_005053c0 { ~S_func_005053c0(); };
S_func_005053c0::~S_func_005053c0()
{
}
