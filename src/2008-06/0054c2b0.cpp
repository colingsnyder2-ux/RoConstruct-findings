// from server: 100% by king_originala
// roc 2008-06 0054c2b0  unit: RBX::RenderBase::Mesh  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c2b0
//
// 0054c2b0  55                   push ebp
// 0054c2b1  8bec                 mov ebp, esp
// 0054c2b3  51                   push ecx
// 0054c2b4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c2b7  33c0                 xor eax, eax
// 0054c2b9  75fc                 jne 0x54c2b7
// 0054c2bb  33c9                 xor ecx, ecx
// 0054c2bd  75fc                 jne 0x54c2bb
// 0054c2bf  8b55fc               mov edx, dword ptr [ebp - 4]
// 0054c2c2  8b02                 mov eax, dword ptr [edx]
// 0054c2c4  034508               add eax, dword ptr [ebp + 8]
// 0054c2c7  8be5                 mov esp, ebp
// 0054c2c9  5d                   pop ebp
// 0054c2ca  c20400               ret 4

struct Mesh {
    int value;
    int f(int offset);
};

#pragma optimize("", off)
int Mesh::f(int offset)
{
    do {} while (0);
    do {} while (0);
    return value + offset;
}
#pragma optimize("", on)
