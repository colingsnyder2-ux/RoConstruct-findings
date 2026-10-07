// roc 2007-08 004d2740  unit: RBX::Render::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2740
//
// 004d2740  c7010cf17900         mov dword ptr [ecx], 0x79f10c
// 004d2746  e995f9ffff           jmp 0x4d20e0
// auto-matched from its assembly shape

struct B_func_004d2740 { virtual ~B_func_004d2740(); };
struct S_func_004d2740 : B_func_004d2740 { ~S_func_004d2740(); };
S_func_004d2740::~S_func_004d2740()
{
}
