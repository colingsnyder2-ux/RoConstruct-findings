// roc 2009-06 005c33d0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c33d0
//
// 005c33d0  55                   push ebp
// 005c33d1  8bec                 mov ebp, esp
// 005c33d3  8b4508               mov eax, dword ptr [ebp + 8]
// 005c33d6  83c01c               add eax, 0x1c
// 005c33d9  5d                   pop ebp
// 005c33da  c3                   ret 
// copied from an identical function in another client (function ?f@@YAPADPAUVChunk@@@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /MD
#pragma optimize("g", off)
struct VChunk{char pad[0x1c];}; char* f(VChunk* p){return p->pad+0x1c;}