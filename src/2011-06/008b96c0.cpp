// roc 2011-06 008b96c0  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b96c0
//
// 008b96c0  c7011050ad00         mov dword ptr [ecx], 0xad5010
// 008b96c6  e9e5fbffff           jmp 0x8b92b0
// auto-matched from its assembly shape

struct B_func_008b96c0 { virtual ~B_func_008b96c0(); };
struct S_func_008b96c0 : B_func_008b96c0 { ~S_func_008b96c0(); };
S_func_008b96c0::~S_func_008b96c0()
{
}
