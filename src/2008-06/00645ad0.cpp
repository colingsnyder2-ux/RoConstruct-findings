// roc 2008-06 00645ad0  unit: RBX::PointToPointBreakConnector  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645ad0
//
// 00645ad0  c701c4ad8400         mov dword ptr [ecx], 0x84adc4
// 00645ad6  e9850e0000           jmp 0x646960
// auto-matched from its assembly shape

struct B_func_00645ad0 { virtual ~B_func_00645ad0(); };
struct S_func_00645ad0 : B_func_00645ad0 { ~S_func_00645ad0(); };
S_func_00645ad0::~S_func_00645ad0()
{
}
