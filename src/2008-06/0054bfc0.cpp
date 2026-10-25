// from server: 100% by king_originala
// roc 2008-06 0054bfc0  unit: RBX::RenderBase::Mesh  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054bfc0
//
// 0054bfc0  55                   push ebp
// 0054bfc1  8bec                 mov ebp, esp
// 0054bfc3  51                   push ecx
// 0054bfc4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054bfc7  33c0                 xor eax, eax
// 0054bfc9  75fc                 jne 0x54bfc7
// 0054bfcb  33c9                 xor ecx, ecx
// 0054bfcd  75fc                 jne 0x54bfcb
// 0054bfcf  8b4508               mov eax, dword ptr [ebp + 8]
// 0054bfd2  c1e004               shl eax, 4
// 0054bfd5  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054bfd8  0302                 add eax, dword ptr [edx]
// 0054bfda  8be5                 mov esp, ebp
// 0054bfdc  5d                   pop ebp
// 0054bfdd  c20400               ret 4

#pragma optimize("", off)

struct Element {
    char data[16];
};

struct Mesh {
    Element* elements;
    Element* get(unsigned int index);
};

Element* Mesh::get(unsigned int index) {
    do {} while (0);
    do {} while (0);
    return elements + index;
}
