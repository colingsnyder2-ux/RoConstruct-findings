// from server: 100% by king_originala
// roc 2008-06 006602b0  unit: RBX::UnlockedPartByLocalCharacter  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006602b0
//
// 006602b0  56                   push esi
// 006602b1  8bf1                 mov esi, ecx
// 006602b3  837e0400             cmp dword ptr [esi + 4], 0
// 006602b7  57                   push edi
// 006602b8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006602bc  7434                 je 0x6602f2
// 006602be  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006602c2  742e                 je 0x6602f2
// 006602c4  57                   push edi
// 006602c5  e8b69cf3ff           call 0x599f80
// 006602ca  8b4e04               mov ecx, dword ptr [esi + 4]
// 006602cd  83c404               add esp, 4
// 006602d0  51                   push ecx
// 006602d1  8bc8                 mov ecx, eax
// 006602d3  e80828dcff           call 0x422ae0
// 006602d8  84c0                 test al, al
// 006602da  7416                 je 0x6602f2
// 006602dc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006602df  e8dcfeffff           call 0x6601c0
// 006602e4  33d2                 xor edx, edx
// 006602e6  84c0                 test al, al
// 006602e8  0f95c2               setne dl
// 006602eb  8bc2                 mov eax, edx
// 006602ed  83f802               cmp eax, 2
// 006602f0  751a                 jne 0x66030c
// 006602f2  57                   push edi
// 006602f3  e8889cf3ff           call 0x599f80
// 006602f8  33c9                 xor ecx, ecx
// 006602fa  83c404               add esp, 4
// 006602fd  3888f0010000         cmp byte ptr [eax + 0x1f0], cl
// 00660303  0f95c1               setne cl
// 00660306  49                   dec ecx
// 00660307  83e102               and ecx, 2
// 0066030a  8bc1                 mov eax, ecx
// 0066030c  5f                   pop edi
// 0066030d  5e                   pop esi
// 0066030e  c20400               ret 4

struct S {
    char padding[0x104];
    S* parent;
    bool f(S* node);
};

struct PartInstance : S {
    char padding2[0x1f0 - 0x108];
    bool locked;
};

struct GetSetImpl {
    static PartInstance* get(PartInstance* p);
};

struct Humanoid {
    int f() const;
};

struct UnlockedPartByLocalCharacter {
    int unused;
    S* character;
    int unused2;
    Humanoid* humanoid;
    int f(PartInstance* part);
};

int UnlockedPartByLocalCharacter::f(PartInstance* part)
{
    int result = 2;
    if (character && humanoid) {
        PartInstance* instance = GetSetImpl::get(part);
        if (instance->f(character))
            result = (unsigned char)humanoid->f() != 0;
    }

    if (result == 2)
        result = GetSetImpl::get(part)->locked ? 0 : 2;

    return result;
}
