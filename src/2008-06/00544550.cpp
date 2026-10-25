// from server: 100% by king_originala
// roc 2008-06 00544550  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544550
//
// 00544550  55                   push ebp
// 00544551  8bec                 mov ebp, esp
// 00544553  51                   push ecx
// 00544554  894dfc               mov dword ptr [ebp - 4], ecx
// 00544557  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054455a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054455d  8b5004               mov edx, dword ptr [eax + 4]
// 00544560  3b5104               cmp edx, dword ptr [ecx + 4]
// 00544563  1bc0                 sbb eax, eax
// 00544565  f7d8                 neg eax
// 00544567  8be5                 mov esp, ebp
// 00544569  5d                   pop ebp
// 0054456a  c20400               ret 4

#pragma optimize("", off)
struct S {
    unsigned int unused;
    unsigned int value;
    int f(const S& other);
};

int S::f(const S& other) {
    return value < other.value;
}
