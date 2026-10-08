// roc 2007-08 004ce5c0  unit: 0RBX::View  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce5c0
//
// 004ce5c0  c70160f07900         mov dword ptr [ecx], 0x79f060
// 004ce5c6  e9153b0000           jmp 0x4d20e0
// auto-matched from its assembly shape

struct B_func_004ce5c0 { virtual ~B_func_004ce5c0(); };
struct S_func_004ce5c0 : B_func_004ce5c0 { ~S_func_004ce5c0(); };
S_func_004ce5c0::~S_func_004ce5c0()
{
}
