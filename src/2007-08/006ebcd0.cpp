// roc 2007-08 006ebcd0  unit: CXTPDockingPanePaintManager  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006ebcd0
//
// 006ebcd0  c7018cac7d00         mov dword ptr [ecx], 0x7dac8c
// 006ebcd6  e90549f4ff           jmp 0x6305e0
// auto-matched from its assembly shape

struct B_func_006ebcd0 { virtual ~B_func_006ebcd0(); };
struct S_func_006ebcd0 : B_func_006ebcd0 { ~S_func_006ebcd0(); };
S_func_006ebcd0::~S_func_006ebcd0()
{
}
