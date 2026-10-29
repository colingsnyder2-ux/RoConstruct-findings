// roc 2009-06 005bf530  unit: RBX::AggregatingSceneManager::Bucket  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf530
//
// 005bf530  55                   push ebp
// 005bf531  8bec                 mov ebp, esp
// 005bf533  51                   push ecx
// 005bf534  894dfc               mov dword ptr [ebp - 4], ecx
// 005bf537  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bf53a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bf53d  8b10                 mov edx, dword ptr [eax]
// 005bf53f  3911                 cmp dword ptr [ecx], edx
// 005bf541  1bc0                 sbb eax, eax
// 005bf543  f7d8                 neg eax
// 005bf545  8be5                 mov esp, ebp
// 005bf547  5d                   pop ebp
// 005bf548  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QBE_NABU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma optimize("", off)

struct S {
    unsigned int value;
    bool f(const S& other) const;
};

bool S::f(const S& other) const {
    return value > other.value;
}