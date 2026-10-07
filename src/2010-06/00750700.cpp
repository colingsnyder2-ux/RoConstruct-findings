// roc 2010-06 00750700  unit: RBX::Humanoid  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750700
//
// 00750700  c701dc1ca500         mov dword ptr [ecx], 0xa51cdc
// 00750706  e9a5580300           jmp 0x785fb0
// auto-matched from its assembly shape

struct B_func_00750700 { virtual ~B_func_00750700(); };
struct S_func_00750700 : B_func_00750700 { ~S_func_00750700(); };
S_func_00750700::~S_func_00750700()
{
}
