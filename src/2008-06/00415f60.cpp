// from server: 100% by king_originala
// roc 2008-06 00415f60  unit: CopyVerb  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415f60
//
// 00415f60  64a100000000         mov eax, dword ptr fs:[0]
// 00415f66  6aff                 push -1
// 00415f68  6888617c00           push 0x7c6188
// 00415f6d  50                   push eax
// 00415f6e  64892500000000       mov dword ptr fs:[0], esp
// 00415f75  83ec0c               sub esp, 0xc
// 00415f78  56                   push esi
// 00415f79  8b742420             mov esi, dword ptr [esp + 0x20]
// 00415f7d  85f6                 test esi, esi
// 00415f7f  742c                 je 0x415fad
// 00415f81  8b0e                 mov ecx, dword ptr [esi]
// 00415f83  85c9                 test ecx, ecx
// 00415f85  7409                 je 0x415f90
// 00415f87  8b01                 mov eax, dword ptr [ecx]
// 00415f89  8b5004               mov edx, dword ptr [eax + 4]
// 00415f8c  ffd2                 call edx
// 00415f8e  eb05                 jmp 0x415f95
// 00415f90  b814969200           mov eax, 0x929614
// 00415f95  6844969200           push 0x929644
// 00415f9a  8bc8                 mov ecx, eax
// 00415f9c  ff1578288000         call dword ptr [0x802878]
// 00415fa2  84c0                 test al, al
// 00415fa4  7407                 je 0x415fad
// 00415fa6  8b06                 mov eax, dword ptr [esi]
// 00415fa8  83c004               add eax, 4
// 00415fab  7529                 jne 0x415fd6
// 00415fad  6834ba8000           push 0x80ba34
// 00415fb2  8d4c2408             lea ecx, [esp + 8]
// 00415fb6  ff1564288000         call dword ptr [0x802864]
// 00415fbc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 00415fc4  8d442404             lea eax, [esp + 4]
// 00415fc8  50                   push eax
// 00415fc9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00415fd1  e81a44ffff           call 0x40a3f0
// 00415fd6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00415fda  8a00                 mov al, byte ptr [eax]
// 00415fdc  5e                   pop esi
// 00415fdd  64890d00000000       mov dword ptr fs:[0], ecx
// 00415fe4  83c418               add esp, 0x18
// 00415fe7  c3                   ret 

struct TypeInfo;

struct Placeholder
{
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct Any
{
    Placeholder* content;
};

struct BadCast
{
    unsigned long data[3];
    BadCast(const char*);
    ~BadCast();
};

extern const TypeInfo void_type;
extern const TypeInfo bool_type;

extern bool (__thiscall *type_equal)(const TypeInfo*, const TypeInfo&);
extern void (__thiscall *construct_bad_cast)(BadCast*, const char*);

__declspec(noreturn) void __cdecl raise_bad_cast(const void* source);

__forceinline BadCast::BadCast(const char* message)
{
    construct_bad_cast(this, message);
    data[0] = 0x0080BA2CUL;
}

bool __cdecl read_bool(const Any* value)
{
    bool* result = 0;
    if (value)
    {
        const TypeInfo& type =
            value->content ? value->content->type() : void_type;
        if (type_equal(&type, bool_type))
            result = reinterpret_cast<bool*>(
                reinterpret_cast<char*>(value->content) + 4);
    }

    if (!result)
    {
        BadCast error("bad cast");
        raise_bad_cast(&error);
    }

    return *result;
}
