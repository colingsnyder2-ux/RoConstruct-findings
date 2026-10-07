// roc 2009-06 005196a0  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005196a0
//
// 005196a0  c701e09c8c00         mov dword ptr [ecx], 0x8c9ce0
// 005196a6  e905faffff           jmp 0x5190b0
// auto-matched from its assembly shape

struct B_func_005196a0 { virtual ~B_func_005196a0(); };
struct S_func_005196a0 : B_func_005196a0 { ~S_func_005196a0(); };
S_func_005196a0::~S_func_005196a0()
{
}
