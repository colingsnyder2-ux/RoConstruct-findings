// from server: 100% by king_originala
// roc 2008-06 00584590  unit: RBX::ModelInstance  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584590
//
// 00584590  64a100000000         mov eax, dword ptr fs:[0]
// 00584596  6aff                 push -1
// 00584598  6888617c00           push 0x7c6188
// 0058459d  50                   push eax
// 0058459e  64892500000000       mov dword ptr fs:[0], esp
// 005845a5  83ec0c               sub esp, 0xc
// 005845a8  56                   push esi
// 005845a9  8b742420             mov esi, dword ptr [esp + 0x20]
// 005845ad  85f6                 test esi, esi
// 005845af  742c                 je 0x5845dd
// 005845b1  8b0e                 mov ecx, dword ptr [esi]
// 005845b3  85c9                 test ecx, ecx
// 005845b5  7409                 je 0x5845c0
// 005845b7  8b01                 mov eax, dword ptr [ecx]
// 005845b9  8b5004               mov edx, dword ptr [eax + 4]
// 005845bc  ffd2                 call edx
// 005845be  eb05                 jmp 0x5845c5
// 005845c0  b814969200           mov eax, 0x929614
// 005845c5  6880639400           push 0x946380
// 005845ca  8bc8                 mov ecx, eax
// 005845cc  ff1578288000         call dword ptr [0x802878]
// 005845d2  84c0                 test al, al
// 005845d4  7407                 je 0x5845dd
// 005845d6  8b06                 mov eax, dword ptr [esi]
// 005845d8  83c004               add eax, 4
// 005845db  7529                 jne 0x584606
// 005845dd  6834ba8000           push 0x80ba34
// 005845e2  8d4c2408             lea ecx, [esp + 8]
// 005845e6  ff1564288000         call dword ptr [0x802864]
// 005845ec  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 005845f4  8d442404             lea eax, [esp + 4]
// 005845f8  50                   push eax
// 005845f9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00584601  e8ea5de8ff           call 0x40a3f0
// 00584606  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058460a  5e                   pop esi
// 0058460b  64890d00000000       mov dword ptr fs:[0], ecx
// 00584612  83c418               add esp, 0x18
// 00584615  c3                   ret 

struct TypeInfo {};

extern bool (__thiscall *type_info_equal)(const TypeInfo *, const TypeInfo *);
extern void (__thiscall *construct_bad_cast)(void *, const char *);
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct BadCast {
    unsigned long words[3];
    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, reinterpret_cast<const char *>(0x0080BA34UL));
    words[0] = 0x0080BA2CUL;
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo &type() const = 0;
};

struct Any {
    Placeholder *content;
};

void *__cdecl cast_coordinate_frame(Any *value)
{
    if (value) {
        const TypeInfo *type = value->content
            ? &value->content->type()
            : reinterpret_cast<const TypeInfo *>(0x00929614UL);

        if (type_info_equal(type,
                reinterpret_cast<const TypeInfo *>(0x00946380UL))) {
            void *result = reinterpret_cast<char *>(value->content) + 4;
            if (result)
                return result;
        }
    }

    BadCast error;
    raise_bad_cast(&error);
}
