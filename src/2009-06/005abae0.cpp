// roc 2009-06 005abae0  unit: RBX::Mesh  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005abae0
//
// 005abae0  55                   push ebp
// 005abae1  8bec                 mov ebp, esp
// 005abae3  51                   push ecx
// 005abae4  894dfc               mov dword ptr [ebp - 4], ecx
// 005abae7  33c0                 xor eax, eax
// 005abae9  75fc                 jne 0x5abae7
// 005abaeb  33c9                 xor ecx, ecx
// 005abaed  75fc                 jne 0x5abaeb
// 005abaef  8b4508               mov eax, dword ptr [ebp + 8]
// 005abaf2  6bc018               imul eax, eax, 0x18
// 005abaf5  8b55fc               mov edx, dword ptr [ebp - 4]
// 005abaf8  0302                 add eax, dword ptr [edx]
// 005abafa  8be5                 mov esp, ebp
// 005abafc  5d                   pop ebp
// 005abafd  c20400               ret 4
// copied from an identical function in another client (function ?getVertex@Mesh@@QAEPAUVertex@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma optimize("", off)

struct Vertex {
    char data[24];
};

struct Mesh {
    Vertex* vertices;
    Vertex* getVertex(int index);
};

Vertex* Mesh::getVertex(int index)
{
    do {} while (0);
    do {} while (0);
    return vertices + index;
}