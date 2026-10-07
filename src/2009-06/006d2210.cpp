// roc 2009-06 006d2210  unit: RBX::Humanoid  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d2210
//
// 006d2210  c7012cce8e00         mov dword ptr [ecx], 0x8ece2c
// 006d2216  e965280200           jmp 0x6f4a80
// auto-matched from its assembly shape

struct B_func_006d2210 { virtual ~B_func_006d2210(); };
struct S_func_006d2210 : B_func_006d2210 { ~S_func_006d2210(); };
S_func_006d2210::~S_func_006d2210()
{
}
