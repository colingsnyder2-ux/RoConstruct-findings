// roc 2007-08 00609220  unit: RBX::PointToPointBreakConnector  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00609220
//
// 00609220  c701842d7c00         mov dword ptr [ecx], 0x7c2d84
// 00609226  e9a5140000           jmp 0x60a6d0
// auto-matched from its assembly shape

struct B_func_00609220 { virtual ~B_func_00609220(); };
struct S_func_00609220 : B_func_00609220 { ~S_func_00609220(); };
S_func_00609220::~S_func_00609220()
{
}
