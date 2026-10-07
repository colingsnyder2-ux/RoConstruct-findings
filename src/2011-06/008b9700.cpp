// roc 2011-06 008b9700  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b9700
//
// 008b9700  c7012850ad00         mov dword ptr [ecx], 0xad5028
// 008b9706  e9a5fbffff           jmp 0x8b92b0
// auto-matched from its assembly shape

struct B_func_008b9700 { virtual ~B_func_008b9700(); };
struct S_func_008b9700 : B_func_008b9700 { ~S_func_008b9700(); };
S_func_008b9700::~S_func_008b9700()
{
}
