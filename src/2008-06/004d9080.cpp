// roc 2008-06 004d9080  unit: RBX::VSky::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d9080
//
// 004d9080  c7018c6b8200         mov dword ptr [ecx], 0x826b8c
// 004d9086  e9a5fdffff           jmp 0x4d8e30
// auto-matched from its assembly shape

struct B_func_004d9080 { virtual ~B_func_004d9080(); };
struct S_func_004d9080 : B_func_004d9080 { ~S_func_004d9080(); };
S_func_004d9080::~S_func_004d9080()
{
}
