// roc 2007-08 006a54a0  unit: CXTPShortcutManager  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a54a0
//
// 006a54a0  c70110367d00         mov dword ptr [ecx], 0x7d3610
// 006a54a6  e965fdffff           jmp 0x6a5210
// auto-matched from its assembly shape

struct B_func_006a54a0 { virtual ~B_func_006a54a0(); };
struct S_func_006a54a0 : B_func_006a54a0 { ~S_func_006a54a0(); };
S_func_006a54a0::~S_func_006a54a0()
{
}
