// roc 2011-06 008fcfa0  unit: CXTPRibbonControls  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fcfa0
//
// 008fcfa0  c701b4c4ad00         mov dword ptr [ecx], 0xadc4b4
// 008fcfa6  e9c5b6f5ff           jmp 0x858670
// auto-matched from its assembly shape

struct B_func_008fcfa0 { virtual ~B_func_008fcfa0(); };
struct S_func_008fcfa0 : B_func_008fcfa0 { ~S_func_008fcfa0(); };
S_func_008fcfa0::~S_func_008fcfa0()
{
}
