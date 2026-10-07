// roc 2011-06 00848b60  unit: VCPtrList::?$CTypedPtrList  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848b60
//
// 00848b60  c701c064ac00         mov dword ptr [ecx], 0xac64c0
// 00848b66  e9e5e6ffff           jmp 0x847250
// auto-matched from its assembly shape

struct B_func_00848b60 { virtual ~B_func_00848b60(); };
struct S_func_00848b60 : B_func_00848b60 { ~S_func_00848b60(); };
S_func_00848b60::~S_func_00848b60()
{
}
