// roc 2007-08 004ce5b0  unit: 0RBX::View  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce5b0
//
// 004ce5b0  c70158f07900         mov dword ptr [ecx], 0x79f058
// 004ce5b6  e9253b0000           jmp 0x4d20e0
// auto-matched from its assembly shape

struct B_func_004ce5b0 { virtual ~B_func_004ce5b0(); };
struct S_func_004ce5b0 : B_func_004ce5b0 { ~S_func_004ce5b0(); };
S_func_004ce5b0::~S_func_004ce5b0()
{
}
