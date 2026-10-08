// roc 2007-08 004d2750  unit: RBX::Render::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2750
//
// 004d2750  c70114f17900         mov dword ptr [ecx], 0x79f114
// 004d2756  e985f9ffff           jmp 0x4d20e0
// auto-matched from its assembly shape

struct B_func_004d2750 { virtual ~B_func_004d2750(); };
struct S_func_004d2750 : B_func_004d2750 { ~S_func_004d2750(); };
S_func_004d2750::~S_func_004d2750()
{
}
