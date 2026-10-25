// from server: 100% by king_originala
// roc 2008-06 0054c3f0  unit: RBX::RenderBase::Mesh  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c3f0
//
// 0054c3f0  55                   push ebp
// 0054c3f1  8bec                 mov ebp, esp
// 0054c3f3  83ec24               sub esp, 0x24
// 0054c3f6  894de0               mov dword ptr [ebp - 0x20], ecx
// 0054c3f9  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0054c3fc  50                   push eax
// 0054c3fd  8d4df8               lea ecx, [ebp - 8]
// 0054c400  51                   push ecx
// 0054c401  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054c404  e8071e0000           call 0x54e210
// 0054c409  8d55ec               lea edx, [ebp - 0x14]
// 0054c40c  52                   push edx
// 0054c40d  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054c410  e89b45ffff           call 0x5409b0
// 0054c415  50                   push eax
// 0054c416  8d4df8               lea ecx, [ebp - 8]
// 0054c419  e8b24affff           call 0x540ed0
// 0054c41e  0fb6c0               movzx eax, al
// 0054c421  85c0                 test eax, eax
// 0054c423  7530                 jne 0x54c455
// 0054c425  8d4df8               lea ecx, [ebp - 8]
// 0054c428  e843fbffff           call 0x54bf70
// 0054c42d  50                   push eax
// 0054c42e  e8dd010000           call 0x54c610
// 0054c433  83c404               add esp, 4
// 0054c436  50                   push eax
// 0054c437  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054c43a  51                   push ecx
// 0054c43b  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054c43e  83c108               add ecx, 8
// 0054c441  e86a2ef0ff           call 0x44f2b0
// 0054c446  0fb6d0               movzx edx, al
// 0054c449  85d2                 test edx, edx
// 0054c44b  7508                 jne 0x54c455
// 0054c44d  8d45f8               lea eax, [ebp - 8]
// 0054c450  8945dc               mov dword ptr [ebp - 0x24], eax
// 0054c453  eb0f                 jmp 0x54c464
// 0054c455  8d4de4               lea ecx, [ebp - 0x1c]
// 0054c458  51                   push ecx
// 0054c459  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0054c45c  e84f45ffff           call 0x5409b0
// 0054c461  8945dc               mov dword ptr [ebp - 0x24], eax
// 0054c464  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 0054c467  8955f4               mov dword ptr [ebp - 0xc], edx
// 0054c46a  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054c46d  8b08                 mov ecx, dword ptr [eax]
// 0054c46f  8b5004               mov edx, dword ptr [eax + 4]
// 0054c472  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c475  8908                 mov dword ptr [eax], ecx
// 0054c477  895004               mov dword ptr [eax + 4], edx
// 0054c47a  8b4508               mov eax, dword ptr [ebp + 8]
// 0054c47d  8be5                 mov esp, ebp
// 0054c47f  5d                   pop ebp
// 0054c480  c20800               ret 8

struct S;

struct Result {
    unsigned int value;
    void* node;

    void __thiscall initialize(unsigned int, S*);
    bool __thiscall operator==(const Result&) const;
    void* __thiscall get() const;
};

struct Compare {
    bool __thiscall operator()(const unsigned int&, const unsigned int&) const;
};

extern const unsigned int& __cdecl keyOf(void*);

struct S {
    unsigned char padding[8];
    Compare compare;

    Result __thiscall lower_bound(const unsigned int&);
    Result __thiscall end();
    Result __thiscall f(const unsigned int&);
};

#pragma optimize("", off)
Result S::f(const unsigned int& key)
{
    Result candidate = lower_bound(key);
    return !(candidate == end()) && !compare(key, keyOf(candidate.get()))
        ? candidate
        : end();
}
