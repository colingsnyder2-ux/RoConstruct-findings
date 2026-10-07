// roc 2007-08 0070d200  unit: CXTColorWnd  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d200
//
// 0070d200  c7015cdd7d00         mov dword ptr [ecx], 0x7ddd5c
// 0070d206  e925f7ffff           jmp 0x70c930
// auto-matched from its assembly shape

struct B_func_0070d200 { virtual ~B_func_0070d200(); };
struct S_func_0070d200 : B_func_0070d200 { ~S_func_0070d200(); };
S_func_0070d200::~S_func_0070d200()
{
}
