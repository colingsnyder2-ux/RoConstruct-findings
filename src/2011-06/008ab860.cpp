// roc 2011-06 008ab860  unit: CXTPRibbonBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ab860
//
// 008ab860  c701343fad00         mov dword ptr [ecx], 0xad3f34
// 008ab866  e97bf3f5ff           jmp 0x80abe6
// auto-matched from its assembly shape

struct B_func_008ab860 { virtual ~B_func_008ab860(); };
struct S_func_008ab860 : B_func_008ab860 { ~S_func_008ab860(); };
S_func_008ab860::~S_func_008ab860()
{
}
