// from server: 52% by why2
// roc 2009-06 005c1a70  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c1a70
//
// 005c1a70  55                   push ebp
// 005c1a71  8bec                 mov ebp, esp
// 005c1a73  8b4508               mov eax, dword ptr [ebp + 8]
// 005c1a76  83c008               add eax, 8
// 005c1a79  5d                   pop ebp
// 005c1a7a  c3                   ret

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD

struct S {
    char pad[8];
};

S* get(S* p) {
    return (S*)((char*)p + 8);
}
