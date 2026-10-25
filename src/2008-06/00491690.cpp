// from server: 100% by king_originala
// roc 2008-06 00491690  unit: RBX::Reflection::VDescribedBase::V?$shared_ptr::?$holder  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491690
//
// 00491690  64a100000000         mov eax, dword ptr fs:[0]
// 00491696  6aff                 push -1
// 00491698  6888617c00           push 0x7c6188
// 0049169d  50                   push eax
// 0049169e  64892500000000       mov dword ptr fs:[0], esp
// 004916a5  83ec0c               sub esp, 0xc
// 004916a8  56                   push esi
// 004916a9  8b742420             mov esi, dword ptr [esp + 0x20]
// 004916ad  85f6                 test esi, esi
// 004916af  742c                 je 0x4916dd
// 004916b1  8b0e                 mov ecx, dword ptr [esi]
// 004916b3  85c9                 test ecx, ecx
// 004916b5  7409                 je 0x4916c0
// 004916b7  8b01                 mov eax, dword ptr [ecx]
// 004916b9  8b5004               mov edx, dword ptr [eax + 4]
// 004916bc  ffd2                 call edx
// 004916be  eb05                 jmp 0x4916c5
// 004916c0  b814969200           mov eax, 0x929614
// 004916c5  6810709300           push 0x937010
// 004916ca  8bc8                 mov ecx, eax
// 004916cc  ff1578288000         call dword ptr [0x802878]
// 004916d2  84c0                 test al, al
// 004916d4  7407                 je 0x4916dd
// 004916d6  8b06                 mov eax, dword ptr [esi]
// 004916d8  83c004               add eax, 4
// 004916db  7529                 jne 0x491706
// 004916dd  6834ba8000           push 0x80ba34
// 004916e2  8d4c2408             lea ecx, [esp + 8]
// 004916e6  ff1564288000         call dword ptr [0x802864]
// 004916ec  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 004916f4  8d442404             lea eax, [esp + 4]
// 004916f8  50                   push eax
// 004916f9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00491701  e8ea8cf7ff           call 0x40a3f0
// 00491706  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049170a  5e                   pop esi
// 0049170b  64890d00000000       mov dword ptr fs:[0], ecx
// 00491712  83c418               add esp, 0x18
// 00491715  c3                   ret 

struct TypeInfo
{
    unsigned long data;
};

extern TypeInfo empty_type;
extern TypeInfo shared_type;
extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo &);
extern void (__thiscall *construct_bad_cast)(void *, const char *);

struct BadCast
{
    unsigned long vtable;
    unsigned long message;
    unsigned long owned;

    BadCast(const char *);
    ~BadCast();
};

__forceinline BadCast::BadCast(const char *text)
{
    construct_bad_cast(this, text);
    vtable = 0x0080BA2CUL;
}

__declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct Placeholder
{
    virtual ~Placeholder();
    virtual const TypeInfo &type() const;
};

struct Any
{
    Placeholder *content;
};

void *__cdecl func_00491690(Any *value)
{
    if (value)
    {
        const TypeInfo &type =
            value->content ? value->content->type() : empty_type;
        if (type_equal(&type, shared_type))
        {
            void *result = reinterpret_cast<char *>(value->content) + 4;
            if (result)
                return result;
        }
    }

    raise_bad_cast(&BadCast("bad cast"));
}
