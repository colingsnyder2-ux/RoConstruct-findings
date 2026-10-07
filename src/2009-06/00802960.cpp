// roc 2009-06 00802960  unit: CXTColorBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00802960
//
// 00802960  c701dcaf9000         mov dword ptr [ecx], 0x90afdc
// 00802966  e925ffffff           jmp 0x802890
// auto-matched from its assembly shape

struct B_func_00802960 { virtual ~B_func_00802960(); };
struct S_func_00802960 : B_func_00802960 { ~S_func_00802960(); };
S_func_00802960::~S_func_00802960()
{
}
