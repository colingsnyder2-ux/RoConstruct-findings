// roc 2009-06 00808ad0  unit: CXTShadowWnd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808ad0
//
// 00808ad0  c701f4bd9000         mov dword ptr [ecx], 0x90bdf4
// 00808ad6  e9658bfdff           jmp 0x7e1640
// auto-matched from its assembly shape

struct B_func_00808ad0 { virtual ~B_func_00808ad0(); };
struct S_func_00808ad0 : B_func_00808ad0 { ~S_func_00808ad0(); };
S_func_00808ad0::~S_func_00808ad0()
{
}
