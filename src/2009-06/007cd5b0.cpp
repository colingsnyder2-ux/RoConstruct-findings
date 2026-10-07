// roc 2009-06 007cd5b0  unit: CXTPDockingPaneBase  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cd5b0
//
// 007cd5b0  c701945e9000         mov dword ptr [ecx], 0x905e94
// 007cd5b6  e9c550f6ff           jmp 0x732680
// auto-matched from its assembly shape

struct B_func_007cd5b0 { virtual ~B_func_007cd5b0(); };
struct S_func_007cd5b0 : B_func_007cd5b0 { ~S_func_007cd5b0(); };
S_func_007cd5b0::~S_func_007cd5b0()
{
}
