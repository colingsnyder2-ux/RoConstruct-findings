// from server: 100% by king_originala
// roc 2008-06 0054d0e0  unit: RBX::RenderBase::Mesh  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d0e0
//
// 0054d0e0  55                   push ebp
// 0054d0e1  8bec                 mov ebp, esp
// 0054d0e3  51                   push ecx
// 0054d0e4  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d0e7  8b4508               mov eax, dword ptr [ebp + 8]
// 0054d0ea  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054d0ed  8b10                 mov edx, dword ptr [eax]
// 0054d0ef  3b11                 cmp edx, dword ptr [ecx]
// 0054d0f1  1bc0                 sbb eax, eax
// 0054d0f3  f7d8                 neg eax
// 0054d0f5  8be5                 mov esp, ebp
// 0054d0f7  5d                   pop ebp
// 0054d0f8  c20800               ret 8

struct S {
    bool less(const unsigned int& a, const unsigned int& b) const;
};

#pragma optimize("", off)
bool S::less(const unsigned int& a, const unsigned int& b) const {
    return a < b;
}
#pragma optimize("", on)
