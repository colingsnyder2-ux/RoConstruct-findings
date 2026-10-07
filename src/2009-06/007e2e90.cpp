// roc 2009-06 007e2e90  unit: CXTPDockingPaneContext  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2e90
//
// 007e2e90  c7014c829000         mov dword ptr [ecx], 0x90824c
// 007e2e96  e9e5f7f4ff           jmp 0x732680
// auto-matched from its assembly shape

struct B_func_007e2e90 { virtual ~B_func_007e2e90(); };
struct S_func_007e2e90 : B_func_007e2e90 { ~S_func_007e2e90(); };
S_func_007e2e90::~S_func_007e2e90()
{
}
