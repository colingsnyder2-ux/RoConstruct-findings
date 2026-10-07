// roc 2010-06 00470bc0  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00470bc0
//
// 00470bc0  c701080ea100         mov dword ptr [ecx], 0xa10e08
// 00470bc6  e995eaf9ff           jmp 0x40f660
// auto-matched from its assembly shape

struct B_func_00470bc0 { virtual ~B_func_00470bc0(); };
struct S_func_00470bc0 : B_func_00470bc0 { ~S_func_00470bc0(); };
S_func_00470bc0::~S_func_00470bc0()
{
}
