// roc 2009-06 007c7e00  unit: CXTPReportHyperlinks  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c7e00
//
// 007c7e00  c7016c549000         mov dword ptr [ecx], 0x90546c
// 007c7e06  e9a917f5ff           jmp 0x7195b4
// auto-matched from its assembly shape

struct B_func_007c7e00 { virtual ~B_func_007c7e00(); };
struct S_func_007c7e00 : B_func_007c7e00 { ~S_func_007c7e00(); };
S_func_007c7e00::~S_func_007c7e00()
{
}
