// roc 2011-06 008b8050  unit: CXTPReportHyperlinks  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8050
//
// 008b8050  c701944dad00         mov dword ptr [ecx], 0xad4d94
// 008b8056  e98b2bf5ff           jmp 0x80abe6
// auto-matched from its assembly shape

struct B_func_008b8050 { virtual ~B_func_008b8050(); };
struct S_func_008b8050 : B_func_008b8050 { ~S_func_008b8050(); };
S_func_008b8050::~S_func_008b8050()
{
}
