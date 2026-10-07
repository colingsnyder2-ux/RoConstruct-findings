// roc 2009-06 007b5570  unit: CXTPShortcutManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b5570
//
// 007b5570  c701bc2f9000         mov dword ptr [ecx], 0x902fbc
// 007b5576  e975fdffff           jmp 0x7b52f0
// auto-matched from its assembly shape

struct B_func_007b5570 { virtual ~B_func_007b5570(); };
struct S_func_007b5570 : B_func_007b5570 { ~S_func_007b5570(); };
S_func_007b5570::~S_func_007b5570()
{
}
