// roc 2008-06 00753990  unit: CXTPReportNavigator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753990
//
// 00753990  c701cc4a8600         mov dword ptr [ecx], 0x864acc
// 00753996  e9dbd6f4ff           jmp 0x6a1076
// auto-matched from its assembly shape

struct B_func_00753990 { virtual ~B_func_00753990(); };
struct S_func_00753990 : B_func_00753990 { ~S_func_00753990(); };
S_func_00753990::~S_func_00753990()
{
}
