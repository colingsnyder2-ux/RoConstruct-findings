// from server: 100% by king_originala
// roc 2008-06 00540e40  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540e40
//
// 00540e40  55                   push ebp
// 00540e41  8bec                 mov ebp, esp
// 00540e43  51                   push ecx
// 00540e44  894dfc               mov dword ptr [ebp - 4], ecx
// 00540e47  8b4508               mov eax, dword ptr [ebp + 8]
// 00540e4a  8b08                 mov ecx, dword ptr [eax]
// 00540e4c  51                   push ecx
// 00540e4d  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540e50  e89b170000           call 0x5425f0
// 00540e55  8b45fc               mov eax, dword ptr [ebp - 4]
// 00540e58  8be5                 mov esp, ebp
// 00540e5a  5d                   pop ebp
// 00540e5b  c20400               ret 4

#pragma optimize("", off)
struct S {
    S(const int& value);
    void init(int value);
};

S::S(const int& value) {
    init(value);
}
