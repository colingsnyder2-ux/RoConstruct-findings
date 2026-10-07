// roc 2008-06 00790450  unit: CXTShadowWnd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00790450
//
// 00790450  c701ccad8600         mov dword ptr [ecx], 0x86adcc
// 00790456  e9d57bcaff           jmp 0x438030
// auto-matched from its assembly shape

struct B_func_00790450 { virtual ~B_func_00790450(); };
struct S_func_00790450 : B_func_00790450 { ~S_func_00790450(); };
S_func_00790450::~S_func_00790450()
{
}
