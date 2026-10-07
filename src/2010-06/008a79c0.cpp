// roc 2010-06 008a79c0  unit: CXTWndHook  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a79c0
//
// 008a79c0  c7011c3da700         mov dword ptr [ecx], 0xa73d1c
// 008a79c6  e95b5a0d00           jmp 0x97d426
// auto-matched from its assembly shape

struct B_func_008a79c0 { virtual ~B_func_008a79c0(); };
struct S_func_008a79c0 : B_func_008a79c0 { ~S_func_008a79c0(); };
S_func_008a79c0::~S_func_008a79c0()
{
}
