// roc 2010-06 00470160  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00470160
//
// 00470160  c701cc04a100         mov dword ptr [ecx], 0xa104cc
// 00470166  e965813300           jmp 0x7a82d0
// auto-matched from its assembly shape

struct B_func_00470160 { virtual ~B_func_00470160(); };
struct S_func_00470160 : B_func_00470160 { ~S_func_00470160(); };
S_func_00470160::~S_func_00470160()
{
}
