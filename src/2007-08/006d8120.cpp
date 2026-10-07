// roc 2007-08 006d8120  unit: CXTPDockingPaneBase  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d8120
//
// 006d8120  c701388c7d00         mov dword ptr [ecx], 0x7d8c38
// 006d8126  e9c5fbffff           jmp 0x6d7cf0
// auto-matched from its assembly shape

struct B_func_006d8120 { virtual ~B_func_006d8120(); };
struct S_func_006d8120 : B_func_006d8120 { ~S_func_006d8120(); };
S_func_006d8120::~S_func_006d8120()
{
}
