// roc 2008-06 004d90b0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d90b0
//
// 004d90b0  c701a46b8200         mov dword ptr [ecx], 0x826ba4
// 004d90b6  e9c5feffff           jmp 0x4d8f80
// auto-matched from its assembly shape

struct B_func_004d90b0 { virtual ~B_func_004d90b0(); };
struct S_func_004d90b0 : B_func_004d90b0 { ~S_func_004d90b0(); };
S_func_004d90b0::~S_func_004d90b0()
{
}
