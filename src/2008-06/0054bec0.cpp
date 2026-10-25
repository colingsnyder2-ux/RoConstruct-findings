// from server: 100% by king_originala
// roc 2008-06 0054bec0  unit: RBX::RenderBase::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054bec0
//
// 0054bec0  55                   push ebp
// 0054bec1  8bec                 mov ebp, esp
// 0054bec3  51                   push ecx
// 0054bec4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054bec7  6a00                 push 0
// 0054bec9  6a00                 push 0
// 0054becb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054bece  e8bd140000           call 0x54d390
// 0054bed3  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054bed6  8be5                 mov esp, ebp
// 0054bed8  5d                   pop ebp
// 0054bed9  c3                   ret 

struct S {
    S();
    void init(int, int);
};

#pragma optimize("", off)
S::S()
{
    init(0, 0);
}
#pragma optimize("", on)
