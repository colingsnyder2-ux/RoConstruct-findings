// roc 2009-06 005ac2a0  unit: RBX::Mesh  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ac2a0
//
// 005ac2a0  55                   push ebp
// 005ac2a1  8bec                 mov ebp, esp
// 005ac2a3  51                   push ecx
// 005ac2a4  894dfc               mov dword ptr [ebp - 4], ecx
// 005ac2a7  33c0                 xor eax, eax
// 005ac2a9  75fc                 jne 0x5ac2a7
// 005ac2ab  33c9                 xor ecx, ecx
// 005ac2ad  75fc                 jne 0x5ac2ab
// 005ac2af  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ac2b2  8b4204               mov eax, dword ptr [edx + 4]
// 005ac2b5  83e801               sub eax, 1
// 005ac2b8  c1e004               shl eax, 4
// 005ac2bb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ac2be  0301                 add eax, dword ptr [ecx]
// 005ac2c0  8be5                 mov esp, ebp
// 005ac2c2  5d                   pop ebp
// 005ac2c3  c3                   ret 
// copied from an identical function in another client (function ?last@Mesh@@QAEPAUElement@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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