// from server: 100% by king_originala
// roc 2008-06 00540510  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540510
//
// 00540510  55                   push ebp
// 00540511  8bec                 mov ebp, esp
// 00540513  51                   push ecx
// 00540514  894dfc               mov dword ptr [ebp - 4], ecx
// 00540517  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054051a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054051d  8b10                 mov edx, dword ptr [eax]
// 0054051f  3911                 cmp dword ptr [ecx], edx
// 00540521  1bc0                 sbb eax, eax
// 00540523  f7d8                 neg eax
// 00540525  8be5                 mov esp, ebp
// 00540527  5d                   pop ebp
// 00540528  c20400               ret 4

#pragma optimize("", off)

struct S {
    unsigned int value;
    bool f(const S& other) const;
};

bool S::f(const S& other) const {
    return value > other.value;
}
