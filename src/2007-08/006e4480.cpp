// roc 2007-08 006e4480  unit: CXTPDockingPaneSplitterContainer  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006e4480
//
// 006e4480  c70168a27d00         mov dword ptr [ecx], 0x7da268
// 006e4486  e91538ffff           jmp 0x6d7ca0
// auto-matched from its assembly shape

struct B_func_006e4480 { virtual ~B_func_006e4480(); };
struct S_func_006e4480 : B_func_006e4480 { ~S_func_006e4480(); };
S_func_006e4480::~S_func_006e4480()
{
}
