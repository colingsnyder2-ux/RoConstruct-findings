// roc 2007-08 006d67f0  unit: CXTPReportNavigator  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d67f0
//
// 006d67f0  c70104887d00         mov dword ptr [ecx], 0x7d8804
// 006d67f6  e9e59df5ff           jmp 0x6305e0
// auto-matched from its assembly shape

struct B_func_006d67f0 { virtual ~B_func_006d67f0(); };
struct S_func_006d67f0 : B_func_006d67f0 { ~S_func_006d67f0(); };
S_func_006d67f0::~S_func_006d67f0()
{
}
