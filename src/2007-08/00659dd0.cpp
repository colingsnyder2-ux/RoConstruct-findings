// roc 2007-08 00659dd0  unit: VCXTPReportRow::?$CXTPSmartPtrInternalT  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00659dd0
//
// 00659dd0  c70144857c00         mov dword ptr [ecx], 0x7c8544
// 00659dd6  e9f5cdffff           jmp 0x656bd0
// auto-matched from its assembly shape

struct B_func_00659dd0 { virtual ~B_func_00659dd0(); };
struct S_func_00659dd0 : B_func_00659dd0 { ~S_func_00659dd0(); };
S_func_00659dd0::~S_func_00659dd0()
{
}
