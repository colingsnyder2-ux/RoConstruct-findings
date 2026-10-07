// roc 2007-08 006ed590  unit: CXTPDockingPaneContext  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006ed590
//
// 006ed590  c7010caf7d00         mov dword ptr [ecx], 0x7daf0c
// 006ed596  e905a7feff           jmp 0x6d7ca0
// auto-matched from its assembly shape

struct B_func_006ed590 { virtual ~B_func_006ed590(); };
struct S_func_006ed590 : B_func_006ed590 { ~S_func_006ed590(); };
S_func_006ed590::~S_func_006ed590()
{
}
