// roc 2007-08 00720530  unit: CXTWndHook  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720530
//
// 00720530  c70194227e00         mov dword ptr [ecx], 0x7e2294
// 00720536  e9fd850100           jmp 0x738b38
// auto-matched from its assembly shape

struct B_func_00720530 { virtual ~B_func_00720530(); };
struct S_func_00720530 : B_func_00720530 { ~S_func_00720530(); };
S_func_00720530::~S_func_00720530()
{
}
