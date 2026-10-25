// from server: 100% by king_originala
// roc 2008-06 0054bfe0  unit: RBX::RenderBase::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054bfe0
//
// 0054bfe0  55                   push ebp
// 0054bfe1  8bec                 mov ebp, esp
// 0054bfe3  51                   push ecx
// 0054bfe4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054bfe7  6a00                 push 0
// 0054bfe9  6a00                 push 0
// 0054bfeb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054bfee  e89d160000           call 0x54d690
// 0054bff3  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054bff6  8be5                 mov esp, ebp
// 0054bff8  5d                   pop ebp
// 0054bff9  c3                   ret 

struct Mesh {
    Mesh();
    void f(void *arg, int count);
};

#pragma optimize("", off)
Mesh::Mesh()
{
    f(0, 0);
}
