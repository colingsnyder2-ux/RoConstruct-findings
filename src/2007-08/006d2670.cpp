// roc 2007-08 006d2670  unit: CXTPReportHyperlinks  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2670
//
// 006d2670  c7017c807d00         mov dword ptr [ecx], 0x7d807c
// 006d2676  e91fe0f5ff           jmp 0x63069a
// auto-matched from its assembly shape

struct B_func_006d2670 { virtual ~B_func_006d2670(); };
struct S_func_006d2670 : B_func_006d2670 { ~S_func_006d2670(); };
S_func_006d2670::~S_func_006d2670()
{
}
