// from server: 100% by king_originala
// roc 2008-06 005404f0  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005404f0
//
// 005404f0  55                   push ebp
// 005404f1  8bec                 mov ebp, esp
// 005404f3  51                   push ecx
// 005404f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005404f7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005404fa  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005404fd  8b10                 mov edx, dword ptr [eax]
// 005404ff  3b11                 cmp edx, dword ptr [ecx]
// 00540501  1bc0                 sbb eax, eax
// 00540503  f7d8                 neg eax
// 00540505  8be5                 mov esp, ebp
// 00540507  5d                   pop ebp
// 00540508  c20400               ret 4

struct S {
    unsigned int value;
    bool operator<(const S& other) const;
};

#pragma optimize("", off)
bool S::operator<(const S& other) const {
    return value < other.value;
}
