// roc 2007-08 004d2760  unit: RBX::Render::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2760
//
// 004d2760  c7011cf17900         mov dword ptr [ecx], 0x79f11c
// 004d2766  e975f9ffff           jmp 0x4d20e0
// auto-matched from its assembly shape

struct B_func_004d2760 { virtual ~B_func_004d2760(); };
struct S_func_004d2760 : B_func_004d2760 { ~S_func_004d2760(); };
S_func_004d2760::~S_func_004d2760()
{
}
