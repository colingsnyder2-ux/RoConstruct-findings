// from server: 100% by king_originala
// roc 2008-06 0054c000  unit: RBX::RenderBase::Mesh  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c000
//
// 0054c000  55                   push ebp
// 0054c001  8bec                 mov ebp, esp
// 0054c003  51                   push ecx
// 0054c004  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c007  6a00                 push 0
// 0054c009  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c00c  8b4804               mov ecx, dword ptr [eax + 4]
// 0054c00f  83c101               add ecx, 1
// 0054c012  51                   push ecx
// 0054c013  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c016  e8c5160000           call 0x54d6e0
// 0054c01b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c01e  e8ed180000           call 0x54d910
// 0054c023  8be5                 mov esp, ebp
// 0054c025  5d                   pop ebp
// 0054c026  c3                   ret 

struct Mesh {
    int reserved;
    int count;

    void grow(int, int);
    void update();
    void f();
};

#pragma optimize("", off)
void Mesh::f()
{
    grow(count + 1, 0);
    update();
}
#pragma optimize("", on)
