// roc 2011-06 00426770  unit: CInstanceExplorer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00426770
//
// 00426770  c701b04da600         mov dword ptr [ecx], 0xa64db0
// 00426776  e955423e00           jmp 0x80a9d0
// auto-matched from its assembly shape

struct B_func_00426770 { virtual ~B_func_00426770(); };
struct S_func_00426770 : B_func_00426770 { ~S_func_00426770(); };
S_func_00426770::~S_func_00426770()
{
}
