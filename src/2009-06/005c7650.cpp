// roc 2009-06 005c7650  unit: seg_005c0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c7650
//
// 005c7650  55                   push ebp
// 005c7651  8bec                 mov ebp, esp
// 005c7653  51                   push ecx
// 005c7654  894dfc               mov dword ptr [ebp - 4], ecx
// 005c7657  8b4508               mov eax, dword ptr [ebp + 8]
// 005c765a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c765d  8b10                 mov edx, dword ptr [eax]
// 005c765f  3b11                 cmp edx, dword ptr [ecx]
// 005c7661  1bc0                 sbb eax, eax
// 005c7663  f7d8                 neg eax
// 005c7665  8be5                 mov esp, ebp
// 005c7667  5d                   pop ebp
// 005c7668  c20800               ret 8
// copied from an identical function in another client (function ?less@S@@QBE_NABI0@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    bool less(const unsigned int& a, const unsigned int& b) const;
};

#pragma optimize("", off)
bool S::less(const unsigned int& a, const unsigned int& b) const {
    return a < b;
}
#pragma optimize("", on)