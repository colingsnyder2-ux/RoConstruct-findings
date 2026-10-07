// roc 2010-06 0052adf0  unit: boost::bad_lexical_cast  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052adf0
//
// 0052adf0  c7016ceba100         mov dword ptr [ecx], 0xa1eb6c
// 0052adf6  ff2598a89e00         jmp dword ptr [0x9ea898]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_0052adf0 { virtual ~B_func_0052adf0(); };
struct S_func_0052adf0 : B_func_0052adf0 { ~S_func_0052adf0(); };
S_func_0052adf0::~S_func_0052adf0()
{
}
