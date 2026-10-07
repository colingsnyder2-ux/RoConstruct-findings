// roc 2010-06 0085a550  unit: CXTPReportTip  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085a550
//
// 0085a550  c70104a2a600         mov dword ptr [ecx], 0xa6a204
// 0085a556  e9c7dff4ff           jmp 0x7a8522
// auto-matched from its assembly shape

struct B_func_0085a550 { virtual ~B_func_0085a550(); };
struct S_func_0085a550 : B_func_0085a550 { ~S_func_0085a550(); };
S_func_0085a550::~S_func_0085a550()
{
}
