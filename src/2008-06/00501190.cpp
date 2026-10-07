// roc 2008-06 00501190  unit: boost::bad_lexical_cast  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501190
//
// 00501190  c70124728200         mov dword ptr [ecx], 0x827224
// 00501196  ff2560288000         jmp dword ptr [0x802860]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_00501190 { virtual ~B_func_00501190(); };
struct S_func_00501190 : B_func_00501190 { ~S_func_00501190(); };
S_func_00501190::~S_func_00501190()
{
}
