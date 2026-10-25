// from server: 100% by king_originala
// roc 2008-06 0054acf0  unit: RBX::RenderBase::Mesh  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054acf0
//
// 0054acf0  55                   push ebp
// 0054acf1  8bec                 mov ebp, esp
// 0054acf3  51                   push ecx
// 0054acf4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054acf7  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054acfa  8a80f4070000         mov al, byte ptr [eax + 0x7f4]
// 0054ad00  8be5                 mov esp, ebp
// 0054ad02  5d                   pop ebp
// 0054ad03  c3                   ret 

struct Mesh {
    char pad[0x7f4];
    bool value;
    bool get();
};

#pragma optimize("", off)
bool Mesh::get()
{
    return value;
}
#pragma optimize("", on)
