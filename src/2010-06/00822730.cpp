// roc 2010-06 00822730  unit: CXTPResourceManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00822730
//
// 00822730  c7010c4ea600         mov dword ptr [ecx], 0xa64e0c
// 00822736  e975f9ffff           jmp 0x8220b0
// auto-matched from its assembly shape

struct B_func_00822730 { virtual ~B_func_00822730(); };
struct S_func_00822730 : B_func_00822730 { ~S_func_00822730(); };
S_func_00822730::~S_func_00822730()
{
}
