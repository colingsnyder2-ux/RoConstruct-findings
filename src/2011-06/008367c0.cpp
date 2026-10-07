// roc 2011-06 008367c0  unit: VCXTPReportRow::?$CXTPSmartPtrInternalT  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008367c0
//
// 008367c0  c701544dac00         mov dword ptr [ecx], 0xac4d54
// 008367c6  e965c5ffff           jmp 0x832d30
// auto-matched from its assembly shape

struct B_func_008367c0 { virtual ~B_func_008367c0(); };
struct S_func_008367c0 : B_func_008367c0 { ~S_func_008367c0(); };
S_func_008367c0::~S_func_008367c0()
{
}
