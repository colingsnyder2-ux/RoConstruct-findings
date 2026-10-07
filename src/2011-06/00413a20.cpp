// roc 2011-06 00413a20  unit: boost::bad_weak_ptr  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00413a20
//
// 00413a20  c70188dfa500         mov dword ptr [ecx], 0xa5df88
// 00413a26  e905ffffff           jmp 0x413930
// auto-matched from its assembly shape

struct B_func_00413a20 { virtual ~B_func_00413a20(); };
struct S_func_00413a20 : B_func_00413a20 { ~S_func_00413a20(); };
S_func_00413a20::~S_func_00413a20()
{
}
