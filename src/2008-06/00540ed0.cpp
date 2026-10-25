// from server: 100% by king_originala
// roc 2008-06 00540ed0  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540ed0
//
// 00540ed0  55                   push ebp
// 00540ed1  8bec                 mov ebp, esp
// 00540ed3  51                   push ecx
// 00540ed4  894dfc               mov dword ptr [ebp - 4], ecx
// 00540ed7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540eda  e83115ecff           call 0x402410
// 00540edf  0fb6c0               movzx eax, al
// 00540ee2  85c0                 test eax, eax
// 00540ee4  7413                 je 0x540ef9
// 00540ee6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00540ee9  51                   push ecx
// 00540eea  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540eed  e8de62f9ff           call 0x4d71d0
// 00540ef2  0fb6d0               movzx edx, al
// 00540ef5  85d2                 test edx, edx
// 00540ef7  7506                 jne 0x540eff
// 00540ef9  ff1590288000         call dword ptr [0x802890]
// 00540eff  33c0                 xor eax, eax
// 00540f01  75fc                 jne 0x540eff
// 00540f03  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00540f06  8b5508               mov edx, dword ptr [ebp + 8]
// 00540f09  8b4104               mov eax, dword ptr [ecx + 4]
// 00540f0c  33c9                 xor ecx, ecx
// 00540f0e  3b4204               cmp eax, dword ptr [edx + 4]
// 00540f11  0f94c1               sete cl
// 00540f14  8ac1                 mov al, cl
// 00540f16  8be5                 mov esp, ebp
// 00540f18  5d                   pop ebp
// 00540f19  c20400               ret 4

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct S {
    void* container;
    void* current;

    bool _Has_container() const;
    bool _Same_container(const S& other) const;
    bool f(const S& other) const;
};

#pragma optimize("", off)

bool S::f(const S& other) const
{
    if (!(_Has_container() && _Same_container(other)))
        _invalid_parameter_noinfo();

    do {
    } while (0);

    return current == other.current;
}
