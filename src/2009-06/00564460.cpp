// roc 2009-06 00564460  unit: boost::bad_lexical_cast  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00564460
//
// 00564460  c701b4a78c00         mov dword ptr [ecx], 0x8ca7b4
// 00564466  ff256ce98900         jmp dword ptr [0x89e96c]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_00564460 { virtual ~B_func_00564460(); };
struct S_func_00564460 : B_func_00564460 { ~S_func_00564460(); };
S_func_00564460::~S_func_00564460()
{
}
