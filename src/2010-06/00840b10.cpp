// roc 2010-06 00840b10  unit: CXTPHookManagerHookAble  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840b10
//
// 00840b10  c701d873a600         mov dword ptr [ecx], 0xa673d8
// 00840b16  e9a5cef7ff           jmp 0x7bd9c0
// auto-matched from its assembly shape

struct B_func_00840b10 { virtual ~B_func_00840b10(); };
struct S_func_00840b10 : B_func_00840b10 { ~S_func_00840b10(); };
S_func_00840b10::~S_func_00840b10()
{
}
