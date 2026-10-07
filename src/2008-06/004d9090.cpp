// roc 2008-06 004d9090  unit: RBX::VSky::?$FactoryProduct::Creator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d9090
//
// 004d9090  c701946b8200         mov dword ptr [ecx], 0x826b94
// 004d9096  e905feffff           jmp 0x4d8ea0
// auto-matched from its assembly shape

struct B_func_004d9090 { virtual ~B_func_004d9090(); };
struct S_func_004d9090 : B_func_004d9090 { ~S_func_004d9090(); };
S_func_004d9090::~S_func_004d9090()
{
}
