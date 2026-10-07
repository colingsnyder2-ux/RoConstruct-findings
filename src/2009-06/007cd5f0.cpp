// roc 2009-06 007cd5f0  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cd5f0
//
// 007cd5f0  c701ac5e9000         mov dword ptr [ecx], 0x905eac
// 007cd5f6  e98550f6ff           jmp 0x732680
// auto-matched from its assembly shape

struct B_func_007cd5f0 { virtual ~B_func_007cd5f0(); };
struct S_func_007cd5f0 : B_func_007cd5f0 { ~S_func_007cd5f0(); };
S_func_007cd5f0::~S_func_007cd5f0()
{
}
