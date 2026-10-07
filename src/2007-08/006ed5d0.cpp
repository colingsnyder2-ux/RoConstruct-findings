// roc 2007-08 006ed5d0  unit: CXTPDockingPaneContext  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006ed5d0
//
// 006ed5d0  c70124af7d00         mov dword ptr [ecx], 0x7daf24
// 006ed5d6  e915a7feff           jmp 0x6d7cf0
// auto-matched from its assembly shape

struct B_func_006ed5d0 { virtual ~B_func_006ed5d0(); };
struct S_func_006ed5d0 : B_func_006ed5d0 { ~S_func_006ed5d0(); };
S_func_006ed5d0::~S_func_006ed5d0()
{
}
