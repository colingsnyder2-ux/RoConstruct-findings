// roc 2009-06 007cd530  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cd530
//
// 007cd530  c7017c5e9000         mov dword ptr [ecx], 0x905e7c
// 007cd536  e905410100           jmp 0x7e1640
// auto-matched from its assembly shape

struct B_func_007cd530 { virtual ~B_func_007cd530(); };
struct S_func_007cd530 : B_func_007cd530 { ~S_func_007cd530(); };
S_func_007cd530::~S_func_007cd530()
{
}
