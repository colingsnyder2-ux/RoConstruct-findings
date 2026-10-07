// roc 2010-06 008916a0  unit: CXTColorBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008916a0
//
// 008916a0  c70144f7a600         mov dword ptr [ecx], 0xa6f744
// 008916a6  e925ffffff           jmp 0x8915d0
// auto-matched from its assembly shape

struct B_func_008916a0 { virtual ~B_func_008916a0(); };
struct S_func_008916a0 : B_func_008916a0 { ~S_func_008916a0(); };
S_func_008916a0::~S_func_008916a0()
{
}
