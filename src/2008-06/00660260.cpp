// from server: 100% by king_originala
// roc 2008-06 00660260  unit: RBX::PartByLocalCharacter  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660260
//
// 00660260  56                   push esi
// 00660261  8bf1                 mov esi, ecx
// 00660263  837e0400             cmp dword ptr [esi + 4], 0
// 00660267  7437                 je 0x6602a0
// 00660269  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0066026d  7431                 je 0x6602a0
// 0066026f  8b442408             mov eax, dword ptr [esp + 8]
// 00660273  50                   push eax
// 00660274  e8079df3ff           call 0x599f80
// 00660279  8b4e04               mov ecx, dword ptr [esi + 4]
// 0066027c  83c404               add esp, 4
// 0066027f  51                   push ecx
// 00660280  8bc8                 mov ecx, eax
// 00660282  e85928dcff           call 0x422ae0
// 00660287  84c0                 test al, al
// 00660289  7415                 je 0x6602a0
// 0066028b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066028e  e82dffffff           call 0x6601c0
// 00660293  33d2                 xor edx, edx
// 00660295  84c0                 test al, al
// 00660297  0f95c2               setne dl
// 0066029a  5e                   pop esi
// 0066029b  8bc2                 mov eax, edx
// 0066029d  c20400               ret 4
// 006602a0  b802000000           mov eax, 2
// 006602a5  5e                   pop esi
// 006602a6  c20400               ret 4

struct S {
    bool f(S* node);
};

struct PartInstance;

struct GetSetImpl {
    static PartInstance* get(PartInstance* p);
};

struct Humanoid {
    int f() const;
};

struct PartByLocalCharacter {
    unsigned char padding0[4];
    S* character;
    unsigned char padding8[4];
    Humanoid* humanoid;

    int f(PartInstance* part);
};

int PartByLocalCharacter::f(PartInstance* part)
{
    if (character != 0 && humanoid != 0) {
        S* node = reinterpret_cast<S*>(GetSetImpl::get(part));
        if (node->f(character))
            return static_cast<unsigned char>(humanoid->f()) != 0;
    }
    return 2;
}
