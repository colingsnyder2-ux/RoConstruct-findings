// roc 2009-06 005c1a40  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c1a40
//
// 005c1a40  55                   push ebp
// 005c1a41  8bec                 mov ebp, esp
// 005c1a43  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1a46  83c01d               add eax, 0x1d
// 005c1a49  5d                   pop ebp
// 005c1a4a  c3                   ret 
// copied from an identical function in another client (function ?f@@YAPADPAUVChunk@@@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /MD
#pragma optimize("g", off)
struct VChunk{char pad[0x1d];}; char* f(VChunk* p){return p->pad+0x1d;}