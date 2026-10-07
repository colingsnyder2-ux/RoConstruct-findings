// roc 2011-06 008a4c20  unit: CXTPMenuBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4c20
//
// 008a4c20  c701b02ead00         mov dword ptr [ecx], 0xad2eb0
// 008a4c26  e985460100           jmp 0x8b92b0
// auto-matched from its assembly shape

struct B_func_008a4c20 { virtual ~B_func_008a4c20(); };
struct S_func_008a4c20 : B_func_008a4c20 { ~S_func_008a4c20(); };
S_func_008a4c20::~S_func_008a4c20()
{
}
