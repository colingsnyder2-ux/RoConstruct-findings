// roc 2008-06 004d9070  unit: RBX::VSky::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d9070
//
// 004d9070  c701846b8200         mov dword ptr [ecx], 0x826b84
// 004d9076  e945fdffff           jmp 0x4d8dc0
// auto-matched from its assembly shape

struct B_func_004d9070 { virtual ~B_func_004d9070(); };
struct S_func_004d9070 : B_func_004d9070 { ~S_func_004d9070(); };
S_func_004d9070::~S_func_004d9070()
{
}
