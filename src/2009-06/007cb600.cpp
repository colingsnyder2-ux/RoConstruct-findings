// roc 2009-06 007cb600  unit: CXTPReportTip  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cb600
//
// 007cb600  c701a45a9000         mov dword ptr [ecx], 0x905aa4
// 007cb606  e9a9dff4ff           jmp 0x7195b4
// auto-matched from its assembly shape

struct B_func_007cb600 { virtual ~B_func_007cb600(); };
struct S_func_007cb600 : B_func_007cb600 { ~S_func_007cb600(); };
S_func_007cb600::~S_func_007cb600()
{
}
