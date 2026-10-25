// from server: 100% by colin
// roc 2008-06 005ab090  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab090
//
// 005ab090  64a100000000         mov eax, dword ptr fs:[0]
// 005ab096  6aff                 push -1
// 005ab098  6888617c00           push 0x7c6188
// 005ab09d  50                   push eax
// 005ab09e  64892500000000       mov dword ptr fs:[0], esp
// 005ab0a5  83ec0c               sub esp, 0xc
// 005ab0a8  56                   push esi
// 005ab0a9  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ab0ad  85f6                 test esi, esi
// 005ab0af  742c                 je 0x5ab0dd
// 005ab0b1  8b0e                 mov ecx, dword ptr [esi]
// 005ab0b3  85c9                 test ecx, ecx
// 005ab0b5  7409                 je 0x5ab0c0
// 005ab0b7  8b01                 mov eax, dword ptr [ecx]
// 005ab0b9  8b5004               mov edx, dword ptr [eax + 4]
// 005ab0bc  ffd2                 call edx
// 005ab0be  eb05                 jmp 0x5ab0c5
// 005ab0c0  b814969200           mov eax, 0x929614
// 005ab0c5  68d0c29200           push 0x92c2d0
// 005ab0ca  8bc8                 mov ecx, eax
// 005ab0cc  ff1578288000         call dword ptr [0x802878]
// 005ab0d2  84c0                 test al, al
// 005ab0d4  7407                 je 0x5ab0dd
// 005ab0d6  8b06                 mov eax, dword ptr [esi]
// 005ab0d8  83c004               add eax, 4
// 005ab0db  7529                 jne 0x5ab106
// 005ab0dd  6834ba8000           push 0x80ba34
// 005ab0e2  8d4c2408             lea ecx, [esp + 8]
// 005ab0e6  ff1564288000         call dword ptr [0x802864]
// 005ab0ec  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 005ab0f4  8d442404             lea eax, [esp + 4]
// 005ab0f8  50                   push eax
// 005ab0f9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005ab101  e8eaf2e5ff           call 0x40a3f0
// 005ab106  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ab10a  5e                   pop esi
// 005ab10b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ab112  83c418               add esp, 0x18
// 005ab115  c3                   ret 

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
