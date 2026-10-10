// from server: 52% by why2
// roc 2009-06 005c33d0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c33d0
//
// 005c33d0  55                   push ebp
// 005c33d1  8bec                 mov ebp, esp
// 005c33d3  8b4508               mov eax, dword ptr [ebp + 8]
// 005c33d6  83c01c               add eax, 0x1c
// 005c33d9  5d                   pop ebp
// 005c33da  c3                   ret

struct S {
    char pad[0x1c];
    int field;
};

int __cdecl f(S* p) {
    return (int)&p->field;
}
