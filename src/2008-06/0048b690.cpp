// from server: 100% by king_originala
// roc 2008-06 0048b690  unit: boost::any::placeholder  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b690
//
// 0048b690  64a100000000         mov eax, dword ptr fs:[0]
// 0048b696  6aff                 push -1
// 0048b698  6888617c00           push 0x7c6188
// 0048b69d  50                   push eax
// 0048b69e  64892500000000       mov dword ptr fs:[0], esp
// 0048b6a5  83ec0c               sub esp, 0xc
// 0048b6a8  56                   push esi
// 0048b6a9  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048b6ad  85f6                 test esi, esi
// 0048b6af  742c                 je 0x48b6dd
// 0048b6b1  8b0e                 mov ecx, dword ptr [esi]
// 0048b6b3  85c9                 test ecx, ecx
// 0048b6b5  7409                 je 0x48b6c0
// 0048b6b7  8b01                 mov eax, dword ptr [ecx]
// 0048b6b9  8b5004               mov edx, dword ptr [eax + 4]
// 0048b6bc  ffd2                 call edx
// 0048b6be  eb05                 jmp 0x48b6c5
// 0048b6c0  b814969200           mov eax, 0x929614
// 0048b6c5  6898539300           push 0x935398
// 0048b6ca  8bc8                 mov ecx, eax
// 0048b6cc  ff1578288000         call dword ptr [0x802878]
// 0048b6d2  84c0                 test al, al
// 0048b6d4  7407                 je 0x48b6dd
// 0048b6d6  8b06                 mov eax, dword ptr [esi]
// 0048b6d8  83c004               add eax, 4
// 0048b6db  7529                 jne 0x48b706
// 0048b6dd  6834ba8000           push 0x80ba34
// 0048b6e2  8d4c2408             lea ecx, [esp + 8]
// 0048b6e6  ff1564288000         call dword ptr [0x802864]
// 0048b6ec  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 0048b6f4  8d442404             lea eax, [esp + 4]
// 0048b6f8  50                   push eax
// 0048b6f9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0048b701  e8eaecf7ff           call 0x40a3f0
// 0048b706  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b70a  5e                   pop esi
// 0048b70b  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b712  83c418               add esp, 0x18
// 0048b715  c3                   ret 

class type_info {
public:
    virtual ~type_info();
    bool operator==(const type_info &) const;
};

namespace RBX {
    class BrickColor {};
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const type_info &type() const = 0;
};

struct Any {
    Placeholder *content;
};

extern bool (__thiscall *type_equal)(
    const type_info *, const type_info &);

extern void (__thiscall *construct_bad_cast)(void *, const char *);

struct BadCast {
    unsigned long vtable;
    char *message;
    unsigned long owned;

    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, "bad cast");
    vtable = 0x0080BA2CUL;
}

__declspec(noreturn) void __cdecl raise_bad_cast(const void *);

RBX::BrickColor &__cdecl cast_brick_color(Any *value)
{
    RBX::BrickColor *result = 0;
    if (value) {
        const type_info &type =
            value->content ? value->content->type() : typeid(void);
        if (type_equal(&type, typeid(RBX::BrickColor)))
            result = reinterpret_cast<RBX::BrickColor *>(value->content + 1);
    }

    if (!result) {
        BadCast error;
        raise_bad_cast(&error);
    }

    return *result;
}
