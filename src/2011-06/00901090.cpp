// roc 2011-06 00901090  unit: CXTWndHook  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901090
//
// 00901090  c70174e1ad00         mov dword ptr [ecx], 0xade174
// 00901096  e92dba0c00           jmp 0x9ccac8
// auto-matched from its assembly shape

struct B_func_00901090 { virtual ~B_func_00901090(); };
struct S_func_00901090 : B_func_00901090 { ~S_func_00901090(); };
S_func_00901090::~S_func_00901090()
{
}
