// roc 2008-06 004d90a0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d90a0
//
// 004d90a0  c7019c6b8200         mov dword ptr [ecx], 0x826b9c
// 004d90a6  e965feffff           jmp 0x4d8f10
// auto-matched from its assembly shape

struct B_func_004d90a0 { virtual ~B_func_004d90a0(); };
struct S_func_004d90a0 : B_func_004d90a0 { ~S_func_004d90a0(); };
S_func_004d90a0::~S_func_004d90a0()
{
}
