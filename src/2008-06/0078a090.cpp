// roc 2008-06 0078a090  unit: CXTColorBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a090
//
// 0078a090  c7011c9f8600         mov dword ptr [ecx], 0x869f1c
// 0078a096  e925ffffff           jmp 0x789fc0
// auto-matched from its assembly shape

struct B_func_0078a090 { virtual ~B_func_0078a090(); };
struct S_func_0078a090 : B_func_0078a090 { ~S_func_0078a090(); };
S_func_0078a090::~S_func_0078a090()
{
}
