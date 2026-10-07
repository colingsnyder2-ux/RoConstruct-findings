// roc 2009-06 00519670  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00519670
//
// 00519670  c701c89c8c00         mov dword ptr [ecx], 0x8c9cc8
// 00519676  e935faffff           jmp 0x5190b0
// auto-matched from its assembly shape

struct B_func_00519670 { virtual ~B_func_00519670(); };
struct S_func_00519670 : B_func_00519670 { ~S_func_00519670(); };
S_func_00519670::~S_func_00519670()
{
}
