// roc 2010-06 0040f750  unit: boost::bad_weak_ptr  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040f750
//
// 0040f750  c701c824a000         mov dword ptr [ecx], 0xa024c8
// 0040f756  e905ffffff           jmp 0x40f660
// auto-matched from its assembly shape

struct B_func_0040f750 { virtual ~B_func_0040f750(); };
struct S_func_0040f750 : B_func_0040f750 { ~S_func_0040f750(); };
S_func_0040f750::~S_func_0040f750()
{
}
