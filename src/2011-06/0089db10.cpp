// roc 2011-06 0089db10  unit: CXTPHookManagerHookAble  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089db10
//
// 0089db10  c701101ead00         mov dword ptr [ecx], 0xad1e10
// 0089db16  e90566baff           jmp 0x444120
// auto-matched from its assembly shape

struct B_func_0089db10 { virtual ~B_func_0089db10(); };
struct S_func_0089db10 : B_func_0089db10 { ~S_func_0089db10(); };
S_func_0089db10::~S_func_0089db10()
{
}
