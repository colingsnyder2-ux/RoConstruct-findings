// roc 2008-06 00752ff0  unit: CXTPReportTip  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00752ff0
//
// 00752ff0  c7016c4a8600         mov dword ptr [ecx], 0x864a6c
// 00752ff6  e93be1f4ff           jmp 0x6a1136
// auto-matched from its assembly shape

struct B_func_00752ff0 { virtual ~B_func_00752ff0(); };
struct S_func_00752ff0 : B_func_00752ff0 { ~S_func_00752ff0(); };
S_func_00752ff0::~S_func_00752ff0()
{
}
