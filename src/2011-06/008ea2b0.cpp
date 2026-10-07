// roc 2011-06 008ea2b0  unit: CXTColorBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea2b0
//
// 008ea2b0  c7016c92ad00         mov dword ptr [ecx], 0xad926c
// 008ea2b6  e925ffffff           jmp 0x8ea1e0
// auto-matched from its assembly shape

struct B_func_008ea2b0 { virtual ~B_func_008ea2b0(); };
struct S_func_008ea2b0 : B_func_008ea2b0 { ~S_func_008ea2b0(); };
S_func_008ea2b0::~S_func_008ea2b0()
{
}
