// from server: 100% by auto
// roc 2008-06 0071c500  unit: CXTPHookManagerHookAble  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c500
//
// 0071c500  c701d8f38500         mov dword ptr [ecx], 0x85f3d8
// 0071c506  e925bbd1ff           jmp 0x438030

struct B_func_0071c500 { virtual ~B_func_0071c500(); };
struct S_func_0071c500 : B_func_0071c500 { ~S_func_0071c500(); };
S_func_0071c500::~S_func_0071c500()
{
}
