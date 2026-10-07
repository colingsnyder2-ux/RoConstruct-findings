// roc 2007-08 006a2d50  unit: CXTPHookManagerHookAble  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2d50
//
// 006a2d50  c701f0347d00         mov dword ptr [ecx], 0x7d34f0
// 006a2d56  e9954f0300           jmp 0x6d7cf0
// auto-matched from its assembly shape

struct B_func_006a2d50 { virtual ~B_func_006a2d50(); };
struct S_func_006a2d50 : B_func_006a2d50 { ~S_func_006a2d50(); };
S_func_006a2d50::~S_func_006a2d50()
{
}
