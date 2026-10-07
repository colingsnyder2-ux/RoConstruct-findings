// roc 2007-08 006a6350  unit: CXTPMenuBar  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6350
//
// 006a6350  c70140417d00         mov dword ptr [ecx], 0x7d4140
// 006a6356  e995190300           jmp 0x6d7cf0
// auto-matched from its assembly shape

struct B_func_006a6350 { virtual ~B_func_006a6350(); };
struct S_func_006a6350 : B_func_006a6350 { ~S_func_006a6350(); };
S_func_006a6350::~S_func_006a6350()
{
}
