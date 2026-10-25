// from server: 100% by king_originala
// roc 2008-06 00443370  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443370
//
// 00443370  64a100000000         mov eax, dword ptr fs:[0]
// 00443376  6aff                 push -1
// 00443378  6888617c00           push 0x7c6188
// 0044337d  50                   push eax
// 0044337e  64892500000000       mov dword ptr fs:[0], esp
// 00443385  83ec0c               sub esp, 0xc
// 00443388  56                   push esi
// 00443389  8b742420             mov esi, dword ptr [esp + 0x20]
// 0044338d  85f6                 test esi, esi
// 0044338f  742c                 je 0x4433bd
// 00443391  8b0e                 mov ecx, dword ptr [esi]
// 00443393  85c9                 test ecx, ecx
// 00443395  7409                 je 0x4433a0
// 00443397  8b01                 mov eax, dword ptr [ecx]
// 00443399  8b5004               mov edx, dword ptr [eax + 4]
// 0044339c  ffd2                 call edx
// 0044339e  eb05                 jmp 0x4433a5
// 004433a0  b814969200           mov eax, 0x929614
// 004433a5  68d0be9200           push 0x92bed0
// 004433aa  8bc8                 mov ecx, eax
// 004433ac  ff1578288000         call dword ptr [0x802878]
// 004433b2  84c0                 test al, al
// 004433b4  7407                 je 0x4433bd
// 004433b6  8b06                 mov eax, dword ptr [esi]
// 004433b8  83c004               add eax, 4
// 004433bb  7529                 jne 0x4433e6
// 004433bd  6834ba8000           push 0x80ba34
// 004433c2  8d4c2408             lea ecx, [esp + 8]
// 004433c6  ff1564288000         call dword ptr [0x802864]
// 004433cc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 004433d4  8d442404             lea eax, [esp + 4]
// 004433d8  50                   push eax
// 004433d9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004433e1  e80a70fcff           call 0x40a3f0
// 004433e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004433ea  5e                   pop esi
// 004433eb  64890d00000000       mov dword ptr fs:[0], ecx
// 004433f2  83c418               add esp, 0x18
// 004433f5  c3                   ret 

struct TypeInfo {};

extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo &);
extern void (__thiscall *construct_bad_cast)(void *, const char *);
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct BadCast {
    unsigned long data[3];
    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, reinterpret_cast<const char *>(0x0080BA34UL));
    data[0] = 0x0080BA2CUL;
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo &type() const;
};

struct Any {
    Placeholder *content;
};

void *__cdecl checked_cast(Any *operand)
{
    void *result = 0;
    if (operand) {
        const TypeInfo &actual = operand->content
            ? operand->content->type()
            : *reinterpret_cast<const TypeInfo *>(0x00929614UL);
        if (type_equal(&actual,
                       *reinterpret_cast<const TypeInfo *>(0x0092BED0UL)))
            result = reinterpret_cast<char *>(operand->content) + 4;
    }
    if (!result) {
        BadCast error;
        raise_bad_cast(&error);
    }
    return result;
}
