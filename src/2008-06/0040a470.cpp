// from server: 100% by king_originala
// roc 2008-06 0040a470  unit: boost::any::_N::?$holder  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a470
//
// 0040a470  64a100000000         mov eax, dword ptr fs:[0]
// 0040a476  6aff                 push -1
// 0040a478  6888617c00           push 0x7c6188
// 0040a47d  50                   push eax
// 0040a47e  64892500000000       mov dword ptr fs:[0], esp
// 0040a485  83ec0c               sub esp, 0xc
// 0040a488  56                   push esi
// 0040a489  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040a48d  85f6                 test esi, esi
// 0040a48f  742c                 je 0x40a4bd
// 0040a491  8b0e                 mov ecx, dword ptr [esi]
// 0040a493  85c9                 test ecx, ecx
// 0040a495  7409                 je 0x40a4a0
// 0040a497  8b01                 mov eax, dword ptr [ecx]
// 0040a499  8b5004               mov edx, dword ptr [eax + 4]
// 0040a49c  ffd2                 call edx
// 0040a49e  eb05                 jmp 0x40a4a5
// 0040a4a0  b814969200           mov eax, 0x929614
// 0040a4a5  6844969200           push 0x929644
// 0040a4aa  8bc8                 mov ecx, eax
// 0040a4ac  ff1578288000         call dword ptr [0x802878]
// 0040a4b2  84c0                 test al, al
// 0040a4b4  7407                 je 0x40a4bd
// 0040a4b6  8b06                 mov eax, dword ptr [esi]
// 0040a4b8  83c004               add eax, 4
// 0040a4bb  7529                 jne 0x40a4e6
// 0040a4bd  6834ba8000           push 0x80ba34
// 0040a4c2  8d4c2408             lea ecx, [esp + 8]
// 0040a4c6  ff1564288000         call dword ptr [0x802864]
// 0040a4cc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 0040a4d4  8d442404             lea eax, [esp + 4]
// 0040a4d8  50                   push eax
// 0040a4d9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0040a4e1  e80affffff           call 0x40a3f0
// 0040a4e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040a4ea  5e                   pop esi
// 0040a4eb  64890d00000000       mov dword ptr fs:[0], ecx
// 0040a4f2  83c418               add esp, 0x18
// 0040a4f5  c3                   ret 

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
    unsigned long words[3];
    BadCast();
    ~BadCast();
};

extern bool (__thiscall *type_equal)(const TypeInfo*, const TypeInfo&);
extern void (__thiscall *construct_bad_cast)(void*, const char*);
__declspec(noreturn) void __cdecl raise_bad_cast(const void*);

__forceinline BadCast::BadCast()
{
    construct_bad_cast(this, reinterpret_cast<const char*>(0x0080BA34UL));
    words[0] = 0x0080BA2CUL;
}

void* __cdecl any_cast(Any* value)
{
    void* result = 0;

    if (value)
    {
        const TypeInfo* type = value->content
            ? &value->content->type()
            : reinterpret_cast<const TypeInfo*>(0x00929614UL);

        if (type_equal(type, *reinterpret_cast<const TypeInfo*>(0x00929644UL)))
            result = reinterpret_cast<char*>(value->content) + 4;
    }

    if (!result)
    {
        BadCast error;
        raise_bad_cast(&error);
    }

    return result;
}
