// from server: 100% by king_originala
// roc 2008-06 00540ce0  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540ce0
//
// 00540ce0  55                   push ebp
// 00540ce1  8bec                 mov ebp, esp
// 00540ce3  83ec30               sub esp, 0x30
// 00540ce6  894dd0               mov dword ptr [ebp - 0x30], ecx
// 00540ce9  8b4508               mov eax, dword ptr [ebp + 8]
// 00540cec  50                   push eax
// 00540ced  8d4dec               lea ecx, [ebp - 0x14]
// 00540cf0  51                   push ecx
// 00540cf1  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00540cf4  e8d7110000           call 0x541ed0
// 00540cf9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00540d00  8d55fc               lea edx, [ebp - 4]
// 00540d03  52                   push edx
// 00540d04  8b45f8               mov eax, dword ptr [ebp - 8]
// 00540d07  50                   push eax
// 00540d08  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00540d0b  51                   push ecx
// 00540d0c  8b55f0               mov edx, dword ptr [ebp - 0x10]
// 00540d0f  52                   push edx
// 00540d10  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00540d13  50                   push eax
// 00540d14  e8b7510000           call 0x545ed0
// 00540d19  83c414               add esp, 0x14
// 00540d1c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00540d1f  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00540d22  8b55f8               mov edx, dword ptr [ebp - 8]
// 00540d25  8955e8               mov dword ptr [ebp - 0x18], edx
// 00540d28  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00540d2b  8945dc               mov dword ptr [ebp - 0x24], eax
// 00540d2e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00540d31  894de0               mov dword ptr [ebp - 0x20], ecx
// 00540d34  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 00540d37  52                   push edx
// 00540d38  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00540d3b  50                   push eax
// 00540d3c  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00540d3f  51                   push ecx
// 00540d40  8b55dc               mov edx, dword ptr [ebp - 0x24]
// 00540d43  52                   push edx
// 00540d44  8d45d4               lea eax, [ebp - 0x2c]
// 00540d47  50                   push eax
// 00540d48  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 00540d4b  e8d0100000           call 0x541e20
// 00540d50  8b45fc               mov eax, dword ptr [ebp - 4]
// 00540d53  8be5                 mov esp, ebp
// 00540d55  5d                   pop ebp
// 00540d56  c20400               ret 4

struct S;

struct Result {
    unsigned int value;
    S* owner;
    void __thiscall initialize(unsigned int, S*);
    bool operator==(const Result&) const;
    bool operator!=(const Result&) const;
    Result operator++(int);
};

struct Range {
    Result first;
    Result second;
};

void __cdecl process(Result, Result, int*);

struct S {
    Range __thiscall equal_range(unsigned int);
    Result __thiscall erase(Result, Result);
    int __thiscall f(unsigned int);
};

#pragma optimize("", off)
int S::f(unsigned int key) {
    Range range = equal_range(key);
    int count = 0;
    process(range.first, range.second, &count);
    erase(Result(range.first), Result(range.second));
    return count;
}
