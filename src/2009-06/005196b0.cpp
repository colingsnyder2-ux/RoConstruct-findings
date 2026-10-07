// roc 2009-06 005196b0  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005196b0
//
// 005196b0  c701e89c8c00         mov dword ptr [ecx], 0x8c9ce8
// 005196b6  e9f5f9ffff           jmp 0x5190b0
// auto-matched from its assembly shape

struct B_func_005196b0 { virtual ~B_func_005196b0(); };
struct S_func_005196b0 : B_func_005196b0 { ~S_func_005196b0(); };
S_func_005196b0::~S_func_005196b0()
{
}
