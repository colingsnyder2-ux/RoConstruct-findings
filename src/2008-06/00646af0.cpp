// from server: 94% by king_originala
// roc 2008-06 00646af0  unit: RBX::MultiJoint  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646af0
//
// 00646af0  83ec08               sub esp, 8
// 00646af3  56                   push esi
// 00646af4  57                   push edi
// 00646af5  8bf9                 mov edi, ecx
// 00646af7  8b7710               mov esi, dword ptr [edi + 0x10]
// 00646afa  81c6ec000000         add esi, 0xec
// 00646b00  807e0400             cmp byte ptr [esi + 4], 0
// 00646b04  740e                 je 0x646b14
// 00646b06  8b4e08               mov ecx, dword ptr [esi + 8]
// 00646b09  8b460c               mov eax, dword ptr [esi + 0xc]
// 00646b0c  ffd0                 call eax
// 00646b0e  d91e                 fstp dword ptr [esi]
// 00646b10  c6460400             mov byte ptr [esi + 4], 0
// 00646b14  d906                 fld dword ptr [esi]
// 00646b16  8b770c               mov esi, dword ptr [edi + 0xc]
// 00646b19  81c6ec000000         add esi, 0xec
// 00646b1f  d95c2408             fstp dword ptr [esp + 8]
// 00646b23  807e0400             cmp byte ptr [esi + 4], 0
// 00646b27  740e                 je 0x646b37
// 00646b29  8b4e08               mov ecx, dword ptr [esi + 8]
// 00646b2c  8b560c               mov edx, dword ptr [esi + 0xc]
// 00646b2f  ffd2                 call edx
// 00646b31  d91e                 fstp dword ptr [esi]
// 00646b33  c6460400             mov byte ptr [esi + 4], 0
// 00646b37  d906                 fld dword ptr [esi]
// 00646b39  5f                   pop edi
// 00646b3a  d9542408             fst dword ptr [esp + 8]
// 00646b3e  5e                   pop esi
// 00646b3f  d81c24               fcomp dword ptr [esp]
// 00646b42  dfe0                 fnstsw ax
// 00646b44  f6c441               test ah, 0x41
// 00646b47  8d0424               lea eax, [esp]
// 00646b4a  7404                 je 0x646b50
// 00646b4c  8d442404             lea eax, [esp + 4]
// 00646b50  d900                 fld dword ptr [eax]
// 00646b52  83c408               add esp, 8
// 00646b55  c3                   ret 

typedef float (__thiscall *Getter)(void *);

struct CachedFloat {
    float value;
    unsigned char dirty;
    unsigned char padding[3];
    void *object;
    Getter getter;

    float get();
};

struct Node {
    unsigned char padding[0xEC];
    CachedFloat cached;
};

struct S {
    unsigned char padding[12];
    Node *left;
    Node *right;

    float f();
};

inline float CachedFloat::get()
{
    if (dirty) {
        value = getter(object);
        dirty = 0;
    }
    return value;
}

inline const float &minimum(const float &a, const float &b)
{
    return b < a ? b : a;
}

float S::f()
{
    float a = right->cached.get();
    float b = left->cached.get();
    return minimum(b, a);
}
