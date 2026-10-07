// roc 2008-06 007a1100  unit: CXTWndHook  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1100
//
// 007a1100  c70174f08600         mov dword ptr [ecx], 0x86f074
// 007a1106  e9f1b60100           jmp 0x7bc7fc
// auto-matched from its assembly shape

struct B_func_007a1100 { virtual ~B_func_007a1100(); };
struct S_func_007a1100 : B_func_007a1100 { ~S_func_007a1100(); };
S_func_007a1100::~S_func_007a1100()
{
}
