// roc 2009-06 00519690  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00519690
//
// 00519690  c701d89c8c00         mov dword ptr [ecx], 0x8c9cd8
// 00519696  e915faffff           jmp 0x5190b0
// auto-matched from its assembly shape

struct B_func_00519690 { virtual ~B_func_00519690(); };
struct S_func_00519690 : B_func_00519690 { ~S_func_00519690(); };
S_func_00519690::~S_func_00519690()
{
}
