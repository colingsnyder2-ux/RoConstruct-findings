// roc 2007-08 004f30d0  unit: boost::bad_lexical_cast  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f30d0
//
// 004f30d0  c70184f57900         mov dword ptr [ecx], 0x79f584
// 004f30d6  ff2514e77700         jmp dword ptr [0x77e714]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_004f30d0 { virtual ~B_func_004f30d0(); };
struct S_func_004f30d0 : B_func_004f30d0 { ~S_func_004f30d0(); };
S_func_004f30d0::~S_func_004f30d0()
{
}
