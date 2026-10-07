// roc 2012-06 00416cf0  unit: boost::bad_weak_ptr  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416cf0
//
// 00416cf0  c701b05fb400         mov dword ptr [ecx], 0xb45fb0
// 00416cf6  e905ffffff           jmp 0x416c00
// auto-matched from its assembly shape

struct B_func_00416cf0 { virtual ~B_func_00416cf0(); };
struct S_func_00416cf0 : B_func_00416cf0 { ~S_func_00416cf0(); };
S_func_00416cf0::~S_func_00416cf0()
{
}
