// from server: 100% by king_originala
// roc 2008-06 0054c1d0  unit: RBX::RenderBase::Mesh  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c1d0
//
// 0054c1d0  55                   push ebp
// 0054c1d1  8bec                 mov ebp, esp
// 0054c1d3  51                   push ecx
// 0054c1d4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c1d7  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c1da  50                   push eax
// 0054c1db  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c1de  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0054c1e1  52                   push edx
// 0054c1e2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054c1e5  e8b682ffff           call 0x5444a0
// 0054c1ea  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c1ed  8be5                 mov esp, ebp
// 0054c1ef  5d                   pop ebp
// 0054c1f0  c20400               ret 4

#pragma optimize("", off)

struct S;

struct Result {
    void initialize(int value, S* owner);
};

struct S {
    char padding[16];
    int value;
    Result* f(Result* result);
};

Result* S::f(Result* result)
{
    result->initialize(value, this);
    return result;
}
