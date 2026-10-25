// from server: 100% by king_originala
// roc 2008-06 0054c030  unit: RBX::RenderBase::Mesh  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c030
//
// 0054c030  55                   push ebp
// 0054c031  8bec                 mov ebp, esp
// 0054c033  51                   push ecx
// 0054c034  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c037  33c0                 xor eax, eax
// 0054c039  75fc                 jne 0x54c037
// 0054c03b  33c9                 xor ecx, ecx
// 0054c03d  75fc                 jne 0x54c03b
// 0054c03f  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c042  6bc018               imul eax, eax, 0x18
// 0054c045  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c048  0302                 add eax, dword ptr [edx]
// 0054c04a  8be5                 mov esp, ebp
// 0054c04c  5d                   pop ebp
// 0054c04d  c20400               ret 4

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
