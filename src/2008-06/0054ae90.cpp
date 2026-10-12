// from server: 100% by king_originala
// roc 2008-06 0054ae90  unit: RBX::RenderBase::Mesh  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054ae90
//
// 0054ae90  55                   push ebp
// 0054ae91  8bec                 mov ebp, esp
// 0054ae93  51                   push ecx
// 0054ae94  894dfc               mov dword ptr [ebp - 4], ecx
// 0054ae97  33c0                 xor eax, eax
// 0054ae99  75fc                 jne 0x54ae97
// 0054ae9b  33c9                 xor ecx, ecx
// 0054ae9d  75fc                 jne 0x54ae9b
// 0054ae9f  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054aea2  8b02                 mov eax, dword ptr [edx]
// 0054aea4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054aea7  8d0488               lea eax, [eax + ecx*4]
// 0054aeaa  8be5                 mov esp, ebp
// 0054aeac  5d                   pop ebp
// 0054aead  c20400               ret 4

#pragma optimize("", off)

struct Mesh {
    int* data;
    int* element(int index);
};

int* Mesh::element(int index)
{
    do {} while (0);
    do {} while (0);
    return data + index;
}
