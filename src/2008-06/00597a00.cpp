// from server: 100% by king_originala
// roc 2008-06 00597a00  unit: RBX::VDecal::?$FactoryProduct  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597a00
//
// 00597a00  64a100000000         mov eax, dword ptr fs:[0]
// 00597a06  6aff                 push -1
// 00597a08  6888617c00           push 0x7c6188
// 00597a0d  50                   push eax
// 00597a0e  64892500000000       mov dword ptr fs:[0], esp
// 00597a15  83ec0c               sub esp, 0xc
// 00597a18  56                   push esi
// 00597a19  8b742420             mov esi, dword ptr [esp + 0x20]
// 00597a1d  85f6                 test esi, esi
// 00597a1f  742c                 je 0x597a4d
// 00597a21  8b0e                 mov ecx, dword ptr [esi]
// 00597a23  85c9                 test ecx, ecx
// 00597a25  7409                 je 0x597a30
// 00597a27  8b01                 mov eax, dword ptr [ecx]
// 00597a29  8b5004               mov edx, dword ptr [eax + 4]
// 00597a2c  ffd2                 call edx
// 00597a2e  eb05                 jmp 0x597a35
// 00597a30  b814969200           mov eax, 0x929614
// 00597a35  68789c9400           push 0x949c78
// 00597a3a  8bc8                 mov ecx, eax
// 00597a3c  ff1578288000         call dword ptr [0x802878]
// 00597a42  84c0                 test al, al
// 00597a44  7407                 je 0x597a4d
// 00597a46  8b06                 mov eax, dword ptr [esi]
// 00597a48  83c004               add eax, 4
// 00597a4b  7529                 jne 0x597a76
// 00597a4d  6834ba8000           push 0x80ba34
// 00597a52  8d4c2408             lea ecx, [esp + 8]
// 00597a56  ff1564288000         call dword ptr [0x802864]
// 00597a5c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 00597a64  8d442404             lea eax, [esp + 4]
// 00597a68  50                   push eax
// 00597a69  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00597a71  e87a29e7ff           call 0x40a3f0
// 00597a76  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00597a7a  5e                   pop esi
// 00597a7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00597a82  83c418               add esp, 0x18
// 00597a85  c3                   ret 

struct TypeInfo
{
    unsigned char storage[8];
};

extern TypeInfo emptyType;
extern TypeInfo textureType;
extern bool (__thiscall *equalType)(const TypeInfo *, const TypeInfo &);

struct Holder
{
    virtual ~Holder();
    virtual const TypeInfo &type() const;
};

struct Any
{
    Holder *content;
};

struct TextureId;

extern void (__thiscall *constructBadCast)(void *, const char *);

struct BadCast
{
    unsigned long storage[3];
    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    constructBadCast(this, "bad cast");
    storage[0] = 0x0080BA2CUL;
}

extern __declspec(noreturn) void __cdecl raise_bad_cast(const void *);

TextureId *__cdecl castTexture(Any *value)
{
    TextureId *result = 0;
    if (value)
    {
        const TypeInfo &type = value->content
            ? value->content->type()
            : emptyType;
        if (equalType(&type, textureType))
            result = reinterpret_cast<TextureId *>(
                reinterpret_cast<unsigned char *>(value->content) + 4);
    }

    if (!result)
    {
        BadCast error;
        raise_bad_cast(&error);
    }

    return result;
}
