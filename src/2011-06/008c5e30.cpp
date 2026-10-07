// roc 2011-06 008c5e30  unit: CXTPDockingPaneSplitterContainer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5e30
//
// 008c5e30  c701d066ad00         mov dword ptr [ecx], 0xad66d0
// 008c5e36  e9e5e2b7ff           jmp 0x444120
// auto-matched from its assembly shape

struct B_func_008c5e30 { virtual ~B_func_008c5e30(); };
struct S_func_008c5e30 : B_func_008c5e30 { ~S_func_008c5e30(); };
S_func_008c5e30::~S_func_008c5e30()
{
}
