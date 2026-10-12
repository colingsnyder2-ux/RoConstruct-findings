// from server: 100% by king_originala
// roc 2008-06 00541400  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541400
//
// 00541400  55                   push ebp
// 00541401  8bec                 mov ebp, esp
// 00541403  83ec18               sub esp, 0x18
// 00541406  894de8               mov dword ptr [ebp - 0x18], ecx
// 00541409  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0054140c  50                   push eax
// 0054140d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00541410  51                   push ecx
// 00541411  8d55f8               lea edx, [ebp - 8]
// 00541414  52                   push edx
// 00541415  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00541418  e843ffffff           call 0x541360
// 0054141d  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00541420  50                   push eax
// 00541421  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00541424  51                   push ecx
// 00541425  8d55f0               lea edx, [ebp - 0x10]
// 00541428  52                   push edx
// 00541429  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0054142c  e82fffffff           call 0x541360
// 00541431  8d45f0               lea eax, [ebp - 0x10]
// 00541434  50                   push eax
// 00541435  8d4df8               lea ecx, [ebp - 8]
// 00541438  e8e3faffff           call 0x540f20
// 0054143d  0fb6c8               movzx ecx, al
// 00541440  85c9                 test ecx, ecx
// 00541442  7436                 je 0x54147a
// 00541444  8b55fc               mov edx, dword ptr [ebp - 4]
// 00541447  52                   push edx
// 00541448  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0054144b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0054144e  51                   push ecx
// 0054144f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00541452  52                   push edx
// 00541453  e8084a0000           call 0x545e60
// 00541458  83c40c               add esp, 0xc
// 0054145b  8945ec               mov dword ptr [ebp - 0x14], eax
// 0054145e  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00541461  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00541464  51                   push ecx
// 00541465  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00541468  52                   push edx
// 00541469  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0054146c  e82f000000           call 0x5414a0
// 00541471  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00541474  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00541477  894810               mov dword ptr [eax + 0x10], ecx
// 0054147a  8b5508               mov edx, dword ptr [ebp + 8]
// 0054147d  8b45f8               mov eax, dword ptr [ebp - 8]
// 00541480  8902                 mov dword ptr [edx], eax
// 00541482  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00541485  894a04               mov dword ptr [edx + 4], ecx
// 00541488  8b4508               mov eax, dword ptr [ebp + 8]
// 0054148b  8be5                 mov esp, ebp
// 0054148d  5d                   pop ebp
// 0054148e  c21400               ret 0x14

#pragma optimize("", off)

struct Pair {
    int first;
    int second;
    bool differs(const Pair& other) const;
};

extern int __cdecl combine(int first, int second, int third);

struct S {
    int padding[4];
    int value;

    Pair find(int first, int second);
    void update(int first, int second);
    Pair f(int a, int b, int c, int d);
};

Pair S::f(int a, int b, int c, int d)
{
    Pair first = find(a, b);
    Pair second = find(c, d);

    if (first.differs(second)) {
        int replacement = combine(second.second, value, first.second);
        update(replacement, value);
        value = replacement;
    }

    return first;
}
