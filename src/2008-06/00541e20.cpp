// from server: 100% by king_originala
// roc 2008-06 00541e20  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541e20
//
// 00541e20  55                   push ebp
// 00541e21  8bec                 mov ebp, esp
// 00541e23  83ec24               sub esp, 0x24
// 00541e26  894ddc               mov dword ptr [ebp - 0x24], ecx
// 00541e29  8d45f8               lea eax, [ebp - 8]
// 00541e2c  50                   push eax
// 00541e2d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00541e30  e80bd30000           call 0x54f140
// 00541e35  50                   push eax
// 00541e36  8d4d0c               lea ecx, [ebp + 0xc]
// 00541e39  e892f0ffff           call 0x540ed0
// 00541e3e  0fb6c8               movzx ecx, al
// 00541e41  85c9                 test ecx, ecx
// 00541e43  7437                 je 0x541e7c
// 00541e45  8d55f0               lea edx, [ebp - 0x10]
// 00541e48  52                   push edx
// 00541e49  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00541e4c  e85febffff           call 0x5409b0
// 00541e51  50                   push eax
// 00541e52  8d4d14               lea ecx, [ebp + 0x14]
// 00541e55  e876f0ffff           call 0x540ed0
// 00541e5a  0fb6c0               movzx eax, al
// 00541e5d  85c0                 test eax, eax
// 00541e5f  741b                 je 0x541e7c
// 00541e61  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00541e64  e8f7eeffff           call 0x540d60
// 00541e69  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00541e6c  51                   push ecx
// 00541e6d  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00541e70  e8cbd20000           call 0x54f140
// 00541e75  8b4508               mov eax, dword ptr [ebp + 8]
// 00541e78  eb4f                 jmp 0x541ec9
// 00541e7a  eb4d                 jmp 0x541ec9
// 00541e7c  8d5514               lea edx, [ebp + 0x14]
// 00541e7f  52                   push edx
// 00541e80  8d4d0c               lea ecx, [ebp + 0xc]
// 00541e83  e898f0ffff           call 0x540f20
// 00541e88  0fb6c0               movzx eax, al
// 00541e8b  85c0                 test eax, eax
// 00541e8d  7423                 je 0x541eb2
// 00541e8f  6a00                 push 0
// 00541e91  8d4de8               lea ecx, [ebp - 0x18]
// 00541e94  51                   push ecx
// 00541e95  8d4d0c               lea ecx, [ebp + 0xc]
// 00541e98  e8d3260000           call 0x544570
// 00541e9d  8b5004               mov edx, dword ptr [eax + 4]
// 00541ea0  52                   push edx
// 00541ea1  8b00                 mov eax, dword ptr [eax]
// 00541ea3  50                   push eax
// 00541ea4  8d4de0               lea ecx, [ebp - 0x20]
// 00541ea7  51                   push ecx
// 00541ea8  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00541eab  e8c0170000           call 0x543670
// 00541eb0  ebca                 jmp 0x541e7c
// 00541eb2  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00541eb5  52                   push edx
// 00541eb6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00541eb9  50                   push eax
// 00541eba  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00541ebd  51                   push ecx
// 00541ebe  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00541ec1  e86a280000           call 0x544730
// 00541ec6  8b4508               mov eax, dword ptr [ebp + 8]
// 00541ec9  8be5                 mov esp, ebp
// 00541ecb  5d                   pop ebp
// 00541ecc  c21400               ret 0x14

#pragma optimize("", off)

struct S;
struct VChunk;

struct Result {
    unsigned int value;
    S* owner;

    void __thiscall initialize(unsigned int, S*);
    bool operator==(const Result&) const;
    bool operator!=(const Result&) const;
    Result operator++(int);
};

struct S {
    Result begin();
    Result end();
    VChunk** slot();
    Result erase(Result);
    Result convert(Result);
    Result f(Result, Result);
};

Result S::f(Result first, Result last)
{
    if (first == begin() && last == end()) {
        slot();
        return begin();
    } else {
        while (first != last)
            erase(first++);

        return convert(first);
    }
}
