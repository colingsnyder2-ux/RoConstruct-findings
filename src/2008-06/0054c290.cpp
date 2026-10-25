// from server: 100% by king_originala
// roc 2008-06 0054c290  unit: RBX::RenderBase::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c290
//
// 0054c290  55                   push ebp
// 0054c291  8bec                 mov ebp, esp
// 0054c293  51                   push ecx
// 0054c294  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c297  6a00                 push 0
// 0054c299  6a00                 push 0
// 0054c29b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c29e  e8fd180000           call 0x54dba0
// 0054c2a3  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c2a6  8be5                 mov esp, ebp
// 0054c2a8  5d                   pop ebp
// 0054c2a9  c3                   ret 

struct Mesh {
    void *data;
    int count;
    int capacity;
    Mesh();
    void f(int size, int allocate);
};

#pragma optimize("", off)
Mesh::Mesh()
{
    f(0, 0);
}
