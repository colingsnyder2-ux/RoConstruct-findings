// roc 2007-08 004ce5a0  unit: 0RBX::View  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce5a0
//
// 004ce5a0  c70150f07900         mov dword ptr [ecx], 0x79f050
// 004ce5a6  e975f9ffff           jmp 0x4cdf20
// auto-matched from its assembly shape

struct B_func_004ce5a0 { virtual ~B_func_004ce5a0(); };
struct S_func_004ce5a0 : B_func_004ce5a0 { ~S_func_004ce5a0(); };
S_func_004ce5a0::~S_func_004ce5a0()
{
}
