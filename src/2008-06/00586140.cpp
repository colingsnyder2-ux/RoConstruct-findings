// from server: 100% by king_originala
// roc 2008-06 00586140  unit: RBX::VLocalScript::?$FactoryProduct  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586140
//
// 00586140  64a100000000         mov eax, dword ptr fs:[0]
// 00586146  6aff                 push -1
// 00586148  6888617c00           push 0x7c6188
// 0058614d  50                   push eax
// 0058614e  64892500000000       mov dword ptr fs:[0], esp
// 00586155  83ec0c               sub esp, 0xc
// 00586158  56                   push esi
// 00586159  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058615d  85f6                 test esi, esi
// 0058615f  742c                 je 0x58618d
// 00586161  8b0e                 mov ecx, dword ptr [esi]
// 00586163  85c9                 test ecx, ecx
// 00586165  7409                 je 0x586170
// 00586167  8b01                 mov eax, dword ptr [ecx]
// 00586169  8b5004               mov edx, dword ptr [eax + 4]
// 0058616c  ffd2                 call edx
// 0058616e  eb05                 jmp 0x586175
// 00586170  b814969200           mov eax, 0x929614
// 00586175  6844bf9200           push 0x92bf44
// 0058617a  8bc8                 mov ecx, eax
// 0058617c  ff1578288000         call dword ptr [0x802878]
// 00586182  84c0                 test al, al
// 00586184  7407                 je 0x58618d
// 00586186  8b06                 mov eax, dword ptr [esi]
// 00586188  83c004               add eax, 4
// 0058618b  7529                 jne 0x5861b6
// 0058618d  6834ba8000           push 0x80ba34
// 00586192  8d4c2408             lea ecx, [esp + 8]
// 00586196  ff1564288000         call dword ptr [0x802864]
// 0058619c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 005861a4  8d442404             lea eax, [esp + 4]
// 005861a8  50                   push eax
// 005861a9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005861b1  e83a42e8ff           call 0x40a3f0
// 005861b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005861ba  5e                   pop esi
// 005861bb  64890d00000000       mov dword ptr fs:[0], ecx
// 005861c2  83c418               add esp, 0x18
// 005861c5  c3                   ret 

class type_info {};

extern bool (__thiscall *equal_type)(const type_info *, const type_info &);
extern void (__thiscall *construct_bad_cast)(void *, const char *);
extern unsigned long bad_any_cast_vtable[];

struct BadAnyCast {
    unsigned long data[3];
    BadAnyCast();
    ~BadAnyCast();
};

BadAnyCast::BadAnyCast()
{
    construct_bad_cast(this, "bad cast");
    data[0] = reinterpret_cast<unsigned long>(bad_any_cast_vtable);
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const type_info &type() const = 0;
};

struct Any {
    Placeholder *content;
};

struct ContentId {};

struct Holder : Placeholder {
    ContentId value;
};

extern const type_info empty_type;
extern const type_info content_id_type;
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void *);

ContentId &__cdecl cast_content_id(Any *operand)
{
    ContentId *result = 0;
    if (operand) {
        const type_info &actual =
            operand->content ? operand->content->type() : empty_type;
        if (equal_type(&actual, content_id_type))
            result = &static_cast<Holder *>(operand->content)->value;
    }
    if (!result) {
        BadAnyCast error;
        raise_bad_cast(&error);
    }
    return *result;
}
