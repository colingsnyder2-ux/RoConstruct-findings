// roc 2008-06 004d90c0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d90c0
//
// 004d90c0  c701ac6b8200         mov dword ptr [ecx], 0x826bac
// 004d90c6  e925ffffff           jmp 0x4d8ff0
// auto-matched from its assembly shape

struct B_func_004d90c0 { virtual ~B_func_004d90c0(); };
struct S_func_004d90c0 : B_func_004d90c0 { ~S_func_004d90c0(); };
S_func_004d90c0::~S_func_004d90c0()
{
}
