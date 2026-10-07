// roc 2009-06 0040f5c0  unit: boost::bad_weak_ptr  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040f5c0
//
// 0040f5c0  c70178ec8a00         mov dword ptr [ecx], 0x8aec78
// 0040f5c6  e905ffffff           jmp 0x40f4d0
// auto-matched from its assembly shape

struct B_func_0040f5c0 { virtual ~B_func_0040f5c0(); };
struct S_func_0040f5c0 : B_func_0040f5c0 { ~S_func_0040f5c0(); };
S_func_0040f5c0::~S_func_0040f5c0()
{
}
