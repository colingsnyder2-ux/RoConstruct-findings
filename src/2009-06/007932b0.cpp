// roc 2009-06 007932b0  unit: CXTPHookManagerHookAble  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007932b0
//
// 007932b0  c70120019000         mov dword ptr [ecx], 0x900120
// 007932b6  e9c5f3f9ff           jmp 0x732680
// auto-matched from its assembly shape

struct B_func_007932b0 { virtual ~B_func_007932b0(); };
struct S_func_007932b0 : B_func_007932b0 { ~S_func_007932b0(); };
S_func_007932b0::~S_func_007932b0()
{
}
