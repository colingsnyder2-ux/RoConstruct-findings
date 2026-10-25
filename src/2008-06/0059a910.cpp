// from server: 100% by king_originala
// roc 2008-06 0059a910  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a910
//
// 0059a910  64a100000000         mov eax, dword ptr fs:[0]
// 0059a916  6aff                 push -1
// 0059a918  6888617c00           push 0x7c6188
// 0059a91d  50                   push eax
// 0059a91e  64892500000000       mov dword ptr fs:[0], esp
// 0059a925  83ec0c               sub esp, 0xc
// 0059a928  56                   push esi
// 0059a929  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059a92d  85f6                 test esi, esi
// 0059a92f  742c                 je 0x59a95d
// 0059a931  8b0e                 mov ecx, dword ptr [esi]
// 0059a933  85c9                 test ecx, ecx
// 0059a935  7409                 je 0x59a940
// 0059a937  8b01                 mov eax, dword ptr [ecx]
// 0059a939  8b5004               mov edx, dword ptr [eax + 4]
// 0059a93c  ffd2                 call edx
// 0059a93e  eb05                 jmp 0x59a945
// 0059a940  b814969200           mov eax, 0x929614
// 0059a945  6864639400           push 0x946364
// 0059a94a  8bc8                 mov ecx, eax
// 0059a94c  ff1578288000         call dword ptr [0x802878]
// 0059a952  84c0                 test al, al
// 0059a954  7407                 je 0x59a95d
// 0059a956  8b06                 mov eax, dword ptr [esi]
// 0059a958  83c004               add eax, 4
// 0059a95b  7529                 jne 0x59a986
// 0059a95d  6834ba8000           push 0x80ba34
// 0059a962  8d4c2408             lea ecx, [esp + 8]
// 0059a966  ff1564288000         call dword ptr [0x802864]
// 0059a96c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 0059a974  8d442404             lea eax, [esp + 4]
// 0059a978  50                   push eax
// 0059a979  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0059a981  e86afae6ff           call 0x40a3f0
// 0059a986  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059a98a  5e                   pop esi
// 0059a98b  64890d00000000       mov dword ptr fs:[0], ecx
// 0059a992  83c418               add esp, 0x18
// 0059a995  c3                   ret 

namespace std {
    class type_info {
        unsigned long data[2];
    };
}

struct Placeholder {
    virtual void destroy();
    virtual const std::type_info &type() const;
};

struct Any {
    Placeholder *content;
};

struct Vector3 {
    float x, y, z;
};

extern bool (__thiscall *equal_type)(const std::type_info *,
                                    const std::type_info *);
extern void (__thiscall *construct_bad_cast)(void *, const char *);
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct BadCast {
    unsigned long data[3];
    BadCast(const char *);
    ~BadCast();
};

__forceinline BadCast::BadCast(const char *message)
{
    construct_bad_cast(this, message);
    data[0] = 0x0080BA2CUL;
}

Vector3 *__cdecl cast_vector(Any *value)
{
    if (value) {
        const std::type_info *type =
            value->content ? &value->content->type()
                           : reinterpret_cast<const std::type_info *>(0x00929614UL);
        if (equal_type(type,
                       reinterpret_cast<const std::type_info *>(0x00946364UL))) {
            Vector3 *result =
                reinterpret_cast<Vector3 *>(value->content + 1);
            if (result)
                return result;
        }
    }

    BadCast error("bad cast");
    raise_bad_cast(&error);
}
