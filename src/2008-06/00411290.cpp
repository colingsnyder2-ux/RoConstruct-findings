// roc 2008-06 00411290  unit: boost::bad_weak_ptr  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411290
//
// 00411290  c70168e08000         mov dword ptr [ecx], 0x80e068
// 00411296  e905ffffff           jmp 0x4111a0
// auto-matched from its assembly shape

struct B_func_00411290 { virtual ~B_func_00411290(); };
struct S_func_00411290 : B_func_00411290 { ~S_func_00411290(); };
S_func_00411290::~S_func_00411290()
{
}
