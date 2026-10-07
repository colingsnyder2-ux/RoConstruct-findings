// roc 2009-06 007582d0  unit: VCPtrList::?$CTypedPtrList  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007582d0
//
// 007582d0  c701e8608f00         mov dword ptr [ecx], 0x8f60e8
// 007582d6  e9b5e6ffff           jmp 0x756990
// auto-matched from its assembly shape

struct B_func_007582d0 { virtual ~B_func_007582d0(); };
struct S_func_007582d0 : B_func_007582d0 { ~S_func_007582d0(); };
S_func_007582d0::~S_func_007582d0()
{
}
