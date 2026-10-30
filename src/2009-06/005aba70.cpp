// roc 2009-06 005aba70  unit: RBX::Mesh  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005aba70
//
// 005aba70  55                   push ebp
// 005aba71  8bec                 mov ebp, esp
// 005aba73  51                   push ecx
// 005aba74  894dfc               mov dword ptr [ebp - 4], ecx
// 005aba77  33c0                 xor eax, eax
// 005aba79  75fc                 jne 0x5aba77
// 005aba7b  33c9                 xor ecx, ecx
// 005aba7d  75fc                 jne 0x5aba7b
// 005aba7f  8b4508               mov eax, dword ptr [ebp + 8]
// 005aba82  c1e004               shl eax, 4
// 005aba85  8b55fc               mov edx, dword ptr [ebp - 4]
// 005aba88  0302                 add eax, dword ptr [edx]
// 005aba8a  8be5                 mov esp, ebp
// 005aba8c  5d                   pop ebp
// 005aba8d  c20400               ret 4
// copied from an identical function in another client (function ?get@Mesh@@QAEPAUElement@@I@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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