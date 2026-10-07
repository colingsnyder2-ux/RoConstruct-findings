// roc 2009-06 007e2e50  unit: CXTPDockingPaneContext  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2e50
//
// 007e2e50  c70134829000         mov dword ptr [ecx], 0x908234
// 007e2e56  e9e5e7ffff           jmp 0x7e1640
// auto-matched from its assembly shape

struct B_func_007e2e50 { virtual ~B_func_007e2e50(); };
struct S_func_007e2e50 : B_func_007e2e50 { ~S_func_007e2e50(); };
S_func_007e2e50::~S_func_007e2e50()
{
}
