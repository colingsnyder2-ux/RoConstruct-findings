// from server: 100% by king_originala
// roc 2008-06 0054aeb0  unit: RBX::RenderBase::Mesh  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054aeb0
//
// 0054aeb0  55                   push ebp
// 0054aeb1  8bec                 mov ebp, esp
// 0054aeb3  51                   push ecx
// 0054aeb4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054aeb7  33c0                 xor eax, eax
// 0054aeb9  75fc                 jne 0x54aeb7
// 0054aebb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054aebe  8b11                 mov edx, dword ptr [ecx]
// 0054aec0  8b4508               mov eax, dword ptr [ebp + 8]
// 0054aec3  8d0482               lea eax, [edx + eax*4]
// 0054aec6  8be5                 mov esp, ebp
// 0054aec8  5d                   pop ebp
// 0054aec9  c20400               ret 4

struct Mesh {
    unsigned int* data;
    unsigned int* get(unsigned int index);
};

#pragma optimize("", off)
unsigned int* Mesh::get(unsigned int index)
{
    do {
    } while (0);

    return data + index;
}
