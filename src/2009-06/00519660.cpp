// roc 2009-06 00519660  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00519660
//
// 00519660  c701c09c8c00         mov dword ptr [ecx], 0x8c9cc0
// 00519666  e9d5f9ffff           jmp 0x519040
// auto-matched from its assembly shape

struct B_func_00519660 { virtual ~B_func_00519660(); };
struct S_func_00519660 : B_func_00519660 { ~S_func_00519660(); };
S_func_00519660::~S_func_00519660()
{
}
