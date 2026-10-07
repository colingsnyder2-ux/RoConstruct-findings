// roc 2011-06 008b9680  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b9680
//
// 008b9680  c701f84fad00         mov dword ptr [ecx], 0xad4ff8
// 008b9686  e995aab8ff           jmp 0x444120
// auto-matched from its assembly shape

struct B_func_008b9680 { virtual ~B_func_008b9680(); };
struct S_func_008b9680 : B_func_008b9680 { ~S_func_008b9680(); };
S_func_008b9680::~S_func_008b9680()
{
}
