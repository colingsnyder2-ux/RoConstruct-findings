// roc 2007-08 006d8160  unit: CXTPDockingPaneBase  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d8160
//
// 006d8160  c701508c7d00         mov dword ptr [ecx], 0x7d8c50
// 006d8166  e985fbffff           jmp 0x6d7cf0
// auto-matched from its assembly shape

struct B_func_006d8160 { virtual ~B_func_006d8160(); };
struct S_func_006d8160 : B_func_006d8160 { ~S_func_006d8160(); };
S_func_006d8160::~S_func_006d8160()
{
}
