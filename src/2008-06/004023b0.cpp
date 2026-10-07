// roc 2008-06 004023b0  unit: VCWorkspace::?$CComObject  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004023b0
//
// 004023b0  c70104b18000         mov dword ptr [ecx], 0x80b104
// 004023b6  ff259c288000         jmp dword ptr [0x80289c]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_004023b0 { virtual ~B_func_004023b0(); };
struct S_func_004023b0 : B_func_004023b0 { ~S_func_004023b0(); };
S_func_004023b0::~S_func_004023b0()
{
}
