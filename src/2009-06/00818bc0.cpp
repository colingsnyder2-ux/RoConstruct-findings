// roc 2009-06 00818bc0  unit: CXTWndHook  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818bc0
//
// 00818bc0  c701b4f59000         mov dword ptr [ecx], 0x90f5b4
// 00818bc6  e9ad390300           jmp 0x84c578
// auto-matched from its assembly shape

struct B_func_00818bc0 { virtual ~B_func_00818bc0(); };
struct S_func_00818bc0 : B_func_00818bc0 { ~S_func_00818bc0(); };
S_func_00818bc0::~S_func_00818bc0()
{
}
