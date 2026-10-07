// roc 2011-06 008bdd20  unit: CXTPDockingPaneWindowSelect  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bdd20
//
// 008bdd20  c7015458ad00         mov dword ptr [ecx], 0xad5854
// 008bdd26  e985b5ffff           jmp 0x8b92b0
// auto-matched from its assembly shape

struct B_func_008bdd20 { virtual ~B_func_008bdd20(); };
struct S_func_008bdd20 : B_func_008bdd20 { ~S_func_008bdd20(); };
S_func_008bdd20::~S_func_008bdd20()
{
}
