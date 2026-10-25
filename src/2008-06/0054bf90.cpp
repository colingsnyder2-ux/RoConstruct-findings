// from server: 100% by king_originala
// roc 2008-06 0054bf90  unit: RBX::RenderBase::Mesh  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054bf90
//
// 0054bf90  55                   push ebp
// 0054bf91  8bec                 mov ebp, esp
// 0054bf93  51                   push ecx
// 0054bf94  894dfc               mov dword ptr [ebp - 4], ecx
// 0054bf97  6a00                 push 0
// 0054bf99  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054bf9c  8b4804               mov ecx, dword ptr [eax + 4]
// 0054bf9f  83c101               add ecx, 1
// 0054bfa2  51                   push ecx
// 0054bfa3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054bfa6  e885140000           call 0x54d430
// 0054bfab  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054bfae  e8ad160000           call 0x54d660
// 0054bfb3  8be5                 mov esp, ebp
// 0054bfb5  5d                   pop ebp
// 0054bfb6  c3                   ret 

#pragma optimize("", off)

struct Element
{
    unsigned char data[16];
};

struct Mesh
{
    Element* elements;
    unsigned int count;

    void resize(unsigned int size, int value);
    Element* last();
    Element* append();
};

Element* Mesh::append()
{
    resize(count + 1, 0);
    return last();
}
