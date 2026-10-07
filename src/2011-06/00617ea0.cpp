// roc 2011-06 00617ea0  unit: boost::bad_lexical_cast  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00617ea0
//
// 00617ea0  c7012445a900         mov dword ptr [ecx], 0xa94524
// 00617ea6  ff250c0aa400         jmp dword ptr [0xa40a0c]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_00617ea0 { virtual ~B_func_00617ea0(); };
struct S_func_00617ea0 : B_func_00617ea0 { ~S_func_00617ea0(); };
S_func_00617ea0::~S_func_00617ea0()
{
}
