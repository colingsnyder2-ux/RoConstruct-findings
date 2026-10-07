// roc 2010-06 00677850  unit: RBX::Geometry  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00677850
//
// 00677850  c70188d1a300         mov dword ptr [ecx], 0xa3d188
// 00677856  e9a58e0d00           jmp 0x750700
// auto-matched from its assembly shape

struct B_func_00677850 { virtual ~B_func_00677850(); };
struct S_func_00677850 : B_func_00677850 { ~S_func_00677850(); };
S_func_00677850::~S_func_00677850()
{
}
