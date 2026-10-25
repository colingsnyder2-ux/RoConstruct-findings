// from server: 100% by king_originala
// roc 2008-06 005e7b20  unit: RBX::Geometry  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7b20
//
// 005e7b20  56                   push esi
// 005e7b21  57                   push edi
// 005e7b22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e7b26  8b07                 mov eax, dword ptr [edi]
// 005e7b28  8b500c               mov edx, dword ptr [eax + 0xc]
// 005e7b2b  8bf1                 mov esi, ecx
// 005e7b2d  8bcf                 mov ecx, edi
// 005e7b2f  ffd2                 call edx
// 005e7b31  85c0                 test eax, eax
// 005e7b33  752f                 jne 0x5e7b64
// 005e7b35  3b770c               cmp esi, dword ptr [edi + 0xc]
// 005e7b38  7505                 jne 0x5e7b3f
// 005e7b3a  8b7f14               mov edi, dword ptr [edi + 0x14]
// 005e7b3d  eb03                 jmp 0x5e7b42
// 005e7b3f  8b7f18               mov edi, dword ptr [edi + 0x18]
// 005e7b42  8d4701               lea eax, [edi + 1]
// 005e7b45  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005e7b48  7d0a                 jge 0x5e7b54
// 005e7b4a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005e7b4d  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005e7b50  85c0                 test eax, eax
// 005e7b52  7532                 jne 0x5e7b86
// 005e7b54  837e2000             cmp dword ptr [esi + 0x20], 0
// 005e7b58  7e2a                 jle 0x5e7b84
// 005e7b5a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005e7b5d  8b02                 mov eax, dword ptr [edx]
// 005e7b5f  5f                   pop edi
// 005e7b60  5e                   pop esi
// 005e7b61  c20400               ret 4
// 005e7b64  3b770c               cmp esi, dword ptr [edi + 0xc]
// 005e7b67  7505                 jne 0x5e7b6e
// 005e7b69  8b7f14               mov edi, dword ptr [edi + 0x14]
// 005e7b6c  eb03                 jmp 0x5e7b71
// 005e7b6e  8b7f18               mov edi, dword ptr [edi + 0x18]
// 005e7b71  8d4701               lea eax, [edi + 1]
// 005e7b74  3b4620               cmp eax, dword ptr [esi + 0x20]
// 005e7b77  7d0b                 jge 0x5e7b84
// 005e7b79  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005e7b7c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005e7b7f  5f                   pop edi
// 005e7b80  5e                   pop esi
// 005e7b81  c20400               ret 4
// 005e7b84  33c0                 xor eax, eax
// 005e7b86  5f                   pop edi
// 005e7b87  5e                   pop esi
// 005e7b88  c20400               ret 4

struct Geometry;

struct Primitive {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int isA();

    char pad08[8];
    Geometry* owner;
    char pad10[4];
    int ownerIndex;
    int otherIndex;
};

struct Geometry {
    char pad00[0x1c];
    Primitive** a;
    int aCount;
    int aCapacity;
    char pad28[0x10];
    Primitive** b;
    int bCount;

    Primitive* getNext(Primitive* p);
};

Primitive* Geometry::getNext(Primitive* p)
{
    if (!p->isA()) {
        int index = (this == p->owner ? p->ownerIndex : p->otherIndex) + 1;
        Primitive* next = index < bCount ? b[index] : 0;
        if (next)
            return next;
        if (aCount > 0)
            return a[0];
    } else {
        int index = (this == p->owner ? p->ownerIndex : p->otherIndex) + 1;
        if (index < aCount)
            return a[index];
    }
    return 0;
}
