// roc 2007-08 006d6290  unit: CXTPReportGroupRow  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d6290
//
// 006d6290  c701a4877d00         mov dword ptr [ecx], 0x7d87a4
// 006d6296  e9ffa3f5ff           jmp 0x63069a
// auto-matched from its assembly shape

struct B_func_006d6290 { virtual ~B_func_006d6290(); };
struct S_func_006d6290 : B_func_006d6290 { ~S_func_006d6290(); };
S_func_006d6290::~S_func_006d6290()
{
}
