// roc 2008-06 00754f10  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754f10
//
// 00754f10  c701444e8600         mov dword ptr [ecx], 0x864e44
// 00754f16  e91531ceff           jmp 0x438030
// auto-matched from its assembly shape

struct B_func_00754f10 { virtual ~B_func_00754f10(); };
struct S_func_00754f10 : B_func_00754f10 { ~S_func_00754f10(); };
S_func_00754f10::~S_func_00754f10()
{
}
