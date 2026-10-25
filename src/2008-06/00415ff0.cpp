// from server: 100% by king_originala
// roc 2008-06 00415ff0  unit: CopyVerb  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415ff0
//
// 00415ff0  64a100000000         mov eax, dword ptr fs:[0]
// 00415ff6  6aff                 push -1
// 00415ff8  6888617c00           push 0x7c6188
// 00415ffd  50                   push eax
// 00415ffe  64892500000000       mov dword ptr fs:[0], esp
// 00416005  83ec0c               sub esp, 0xc
// 00416008  56                   push esi
// 00416009  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041600d  85f6                 test esi, esi
// 0041600f  742c                 je 0x41603d
// 00416011  8b0e                 mov ecx, dword ptr [esi]
// 00416013  85c9                 test ecx, ecx
// 00416015  7409                 je 0x416020
// 00416017  8b01                 mov eax, dword ptr [ecx]
// 00416019  8b5004               mov edx, dword ptr [eax + 4]
// 0041601c  ffd2                 call edx
// 0041601e  eb05                 jmp 0x416025
// 00416020  b814969200           mov eax, 0x929614
// 00416025  68dcbe9200           push 0x92bedc
// 0041602a  8bc8                 mov ecx, eax
// 0041602c  ff1578288000         call dword ptr [0x802878]
// 00416032  84c0                 test al, al
// 00416034  7407                 je 0x41603d
// 00416036  8b06                 mov eax, dword ptr [esi]
// 00416038  83c004               add eax, 4
// 0041603b  7529                 jne 0x416066
// 0041603d  6834ba8000           push 0x80ba34
// 00416042  8d4c2408             lea ecx, [esp + 8]
// 00416046  ff1564288000         call dword ptr [0x802864]
// 0041604c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 00416054  8d442404             lea eax, [esp + 4]
// 00416058  50                   push eax
// 00416059  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00416061  e88a43ffff           call 0x40a3f0
// 00416066  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041606a  d900                 fld dword ptr [eax]
// 0041606c  5e                   pop esi
// 0041606d  64890d00000000       mov dword ptr fs:[0], ecx
// 00416074  83c418               add esp, 0x18
// 00416077  c3                   ret 

struct TypeInfo {};

extern const TypeInfo empty_type;
extern const TypeInfo float_type;
extern const char bad_cast_message[];
extern unsigned long bad_cast_vtable[];

extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo &);
extern void (__thiscall *construct_bad_cast)(void *, const char *);

struct BadCast
{
    unsigned long words[3];
    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, bad_cast_message);
    words[0] = reinterpret_cast<unsigned long>(bad_cast_vtable);
}

__declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct Placeholder
{
    virtual ~Placeholder();
    virtual const TypeInfo &type() const;
};

struct FloatHolder : Placeholder
{
    float value;
};

struct Any
{
    Placeholder *content;
};

float __cdecl extract_float(const Any *source)
{
    float *value = 0;

    if (source)
    {
        const TypeInfo &type = source->content
            ? source->content->type()
            : empty_type;

        if (type_equal(&type, float_type))
            value = &static_cast<FloatHolder *>(source->content)->value;
    }

    if (!value)
    {
        BadCast error;
        raise_bad_cast(&error);
    }

    return *value;
}
