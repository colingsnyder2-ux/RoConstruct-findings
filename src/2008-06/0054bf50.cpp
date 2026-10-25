// from server: 100% by king_originala
// roc 2008-06 0054bf50  unit: RBX::RenderBase::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054bf50
//
// 0054bf50  55                   push ebp
// 0054bf51  8bec                 mov ebp, esp
// 0054bf53  51                   push ecx
// 0054bf54  894dfc               mov dword ptr [ebp - 4], ecx
// 0054bf57  6a00                 push 0
// 0054bf59  6a00                 push 0
// 0054bf5b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054bf5e  e87d140000           call 0x54d3e0
// 0054bf63  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054bf66  8be5                 mov esp, ebp
// 0054bf68  5d                   pop ebp
// 0054bf69  c3                   ret 

struct Mesh {
    void *data;
    unsigned size;
    unsigned capacity;

    Mesh();
    void f(void *arg, int count);
};

#pragma optimize("", off)
Mesh::Mesh()
{
    f(0, 0);
}
