// roc 2009-06 005bf510  unit: RBX::AggregatingSceneManager::Bucket  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf510
//
// 005bf510  55                   push ebp
// 005bf511  8bec                 mov ebp, esp
// 005bf513  51                   push ecx
// 005bf514  894dfc               mov dword ptr [ebp - 4], ecx
// 005bf517  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bf51a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bf51d  8b10                 mov edx, dword ptr [eax]
// 005bf51f  3b11                 cmp edx, dword ptr [ecx]
// 005bf521  1bc0                 sbb eax, eax
// 005bf523  f7d8                 neg eax
// 005bf525  8be5                 mov esp, ebp
// 005bf527  5d                   pop ebp
// 005bf528  c20400               ret 4
// copied from an identical function in another client (function ??MS@@QBE_NABU0@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    unsigned int value;
    bool operator<(const S& other) const;
};

#pragma optimize("", off)
bool S::operator<(const S& other) const {
    return value < other.value;
}