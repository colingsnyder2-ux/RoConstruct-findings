// from server: 100% by king_originala
// roc 2008-06 0054d660  unit: RBX::RenderBase::Mesh  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d660
//
// 0054d660  55                   push ebp
// 0054d661  8bec                 mov ebp, esp
// 0054d663  51                   push ecx
// 0054d664  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d667  33c0                 xor eax, eax
// 0054d669  75fc                 jne 0x54d667
// 0054d66b  33c9                 xor ecx, ecx
// 0054d66d  75fc                 jne 0x54d66b
// 0054d66f  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054d672  8b4204               mov eax, dword ptr [edx + 4]
// 0054d675  83e801               sub eax, 1
// 0054d678  c1e004               shl eax, 4
// 0054d67b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054d67e  0301                 add eax, dword ptr [ecx]
// 0054d680  8be5                 mov esp, ebp
// 0054d682  5d                   pop ebp
// 0054d683  c3                   ret 

#pragma optimize("", off)

struct Element
{
    unsigned char data[16];
};

struct Mesh
{
    Element* elements;
    unsigned int count;
    Element* last();
};

Element* Mesh::last()
{
    do {} while (0);
    do {} while (0);
    return elements + (count - 1);
}
