// roc 2009-12 004e5b90  unit: RBX::Mesh  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e5b90
//
// 004e5b90  55                   push ebp
// 004e5b91  8bec                 mov ebp, esp
// 004e5b93  51                   push ecx
// 004e5b94  894dfc               mov dword ptr [ebp - 4], ecx
// 004e5b97  33c0                 xor eax, eax
// 004e5b99  75fc                 jne 0x4e5b97
// 004e5b9b  33c9                 xor ecx, ecx
// 004e5b9d  75fc                 jne 0x4e5b9b
// 004e5b9f  8b55fc               mov edx, dword ptr [ebp - 4]
// 004e5ba2  8b4204               mov eax, dword ptr [edx + 4]
// 004e5ba5  83e801               sub eax, 1
// 004e5ba8  c1e004               shl eax, 4
// 004e5bab  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004e5bae  0301                 add eax, dword ptr [ecx]
// 004e5bb0  8be5                 mov esp, ebp
// 004e5bb2  5d                   pop ebp
// 004e5bb3  c3                   ret 
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