// roc 2010-06 00840b90  unit: CXTPHookManagerHookAble  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840b90
//
// 00840b90  c701f073a600         mov dword ptr [ecx], 0xa673f0
// 00840b96  e935b50100           jmp 0x85c0d0
// auto-matched from its assembly shape

struct B_func_00840b90 { virtual ~B_func_00840b90(); };
struct S_func_00840b90 : B_func_00840b90 { ~S_func_00840b90(); };
S_func_00840b90::~S_func_00840b90()
{
}
