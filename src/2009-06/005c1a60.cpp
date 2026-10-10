// from server: 52% by why2
// roc 2009-06 005c1a60  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c1a60
//
// 005c1a60  55                   push ebp
// 005c1a61  8bec                 mov ebp, esp
// 005c1a63  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1a66  83c004               add eax, 4
// 005c1a69  5d                   pop ebp
// 005c1a6a  c3                   ret

int get(int* p) {
    return (int)(p + 1);
}
