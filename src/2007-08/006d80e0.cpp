// roc 2007-08 006d80e0  unit: CXTPDockingPaneBase  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d80e0
//
// 006d80e0  c701208c7d00         mov dword ptr [ecx], 0x7d8c20
// 006d80e6  e9b5fbffff           jmp 0x6d7ca0
// auto-matched from its assembly shape

struct B_func_006d80e0 { virtual ~B_func_006d80e0(); };
struct S_func_006d80e0 : B_func_006d80e0 { ~S_func_006d80e0(); };
S_func_006d80e0::~S_func_006d80e0()
{
}
