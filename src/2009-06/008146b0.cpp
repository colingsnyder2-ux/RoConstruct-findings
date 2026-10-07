// roc 2009-06 008146b0  unit: CXTPRibbonControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008146b0
//
// 008146b0  c70124d99000         mov dword ptr [ecx], 0x90d924
// 008146b6  e94577f5ff           jmp 0x76be00
// auto-matched from its assembly shape

struct B_func_008146b0 { virtual ~B_func_008146b0(); };
struct S_func_008146b0 : B_func_008146b0 { ~S_func_008146b0(); };
S_func_008146b0::~S_func_008146b0()
{
}
