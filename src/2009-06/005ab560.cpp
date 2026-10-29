// roc 2009-06 005ab560  unit: RBX::Mesh  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ab560
//
// 005ab560  55                   push ebp
// 005ab561  8bec                 mov ebp, esp
// 005ab563  51                   push ecx
// 005ab564  894dfc               mov dword ptr [ebp - 4], ecx
// 005ab567  33c0                 xor eax, eax
// 005ab569  75fc                 jne 0x5ab567
// 005ab56b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ab56e  8b11                 mov edx, dword ptr [ecx]
// 005ab570  8b4508               mov eax, dword ptr [ebp + 8]
// 005ab573  8d0482               lea eax, [edx + eax*4]
// 005ab576  8be5                 mov esp, ebp
// 005ab578  5d                   pop ebp
// 005ab579  c20400               ret 4
// copied from an identical function in another client (function ?get@Mesh@@QAEPAII@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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