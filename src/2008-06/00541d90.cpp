// from server: 52% by colin
// roc 2008-06 00541d90  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541d90
//
// 00541d90  55                   push ebp
// 00541d91  8bec                 mov ebp, esp
// 00541d93  8b4508               mov eax, dword ptr [ebp + 8]
// 00541d96  83c015               add eax, 0x15
// 00541d99  5d                   pop ebp
// 00541d9a  c3                   ret 

struct VChunk {
    char pad[0x15];
};

char* getWeakReferenceCountedPointer(VChunk* p) {
    return p->pad + 0x15;
}
