// roc 2009-06 004a0f40  unit: G3D::VARArea  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0f40
//
// 004a0f40  c701e8ff8b00         mov dword ptr [ecx], 0x8bffe8
// 004a0f46  e905a23a00           jmp 0x84b150
// auto-matched from its assembly shape

struct B_func_004a0f40 { virtual ~B_func_004a0f40(); };
struct S_func_004a0f40 : B_func_004a0f40 { ~S_func_004a0f40(); };
S_func_004a0f40::~S_func_004a0f40()
{
}
