// roc 2009-06 00519680  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00519680
//
// 00519680  c701d09c8c00         mov dword ptr [ecx], 0x8c9cd0
// 00519686  e925faffff           jmp 0x5190b0
// auto-matched from its assembly shape

struct B_func_00519680 { virtual ~B_func_00519680(); };
struct S_func_00519680 : B_func_00519680 { ~S_func_00519680(); };
S_func_00519680::~S_func_00519680()
{
}
