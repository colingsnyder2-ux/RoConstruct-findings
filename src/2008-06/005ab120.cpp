// from server: 100% by king_originala
// roc 2008-06 005ab120  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab120
//
// 005ab120  64a100000000         mov eax, dword ptr fs:[0]
// 005ab126  6aff                 push -1
// 005ab128  6888617c00           push 0x7c6188
// 005ab12d  50                   push eax
// 005ab12e  64892500000000       mov dword ptr fs:[0], esp
// 005ab135  83ec0c               sub esp, 0xc
// 005ab138  56                   push esi
// 005ab139  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ab13d  85f6                 test esi, esi
// 005ab13f  742c                 je 0x5ab16d
// 005ab141  8b0e                 mov ecx, dword ptr [esi]
// 005ab143  85c9                 test ecx, ecx
// 005ab145  7409                 je 0x5ab150
// 005ab147  8b01                 mov eax, dword ptr [ecx]
// 005ab149  8b5004               mov edx, dword ptr [eax + 4]
// 005ab14c  ffd2                 call edx
// 005ab14e  eb05                 jmp 0x5ab155
// 005ab150  b814969200           mov eax, 0x929614
// 005ab155  6880599300           push 0x935980
// 005ab15a  8bc8                 mov ecx, eax
// 005ab15c  ff1578288000         call dword ptr [0x802878]
// 005ab162  84c0                 test al, al
// 005ab164  7407                 je 0x5ab16d
// 005ab166  8b06                 mov eax, dword ptr [esi]
// 005ab168  83c004               add eax, 4
// 005ab16b  7529                 jne 0x5ab196
// 005ab16d  6834ba8000           push 0x80ba34
// 005ab172  8d4c2408             lea ecx, [esp + 8]
// 005ab176  ff1564288000         call dword ptr [0x802864]
// 005ab17c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 005ab184  8d442404             lea eax, [esp + 4]
// 005ab188  50                   push eax
// 005ab189  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005ab191  e85af2e5ff           call 0x40a3f0
// 005ab196  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ab19a  5e                   pop esi
// 005ab19b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ab1a2  83c418               add esp, 0x18
// 005ab1a5  c3                   ret 

struct TypeInfo {};
extern const TypeInfo placeholderType;
extern const TypeInfo requestedType;
extern bool (__thiscall *typeEqual)(const TypeInfo*, const TypeInfo&);

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct Any {
    Placeholder* content;
};

extern void (__thiscall *construct_bad_cast)(void*, const char*);
extern const char badCastMessage[];
__declspec(noreturn) void __cdecl raise_bad_cast(const void*);

struct BadCast {
    unsigned long table;
    unsigned long data[2];

    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, badCastMessage);
    table = 0x0080BA2CUL;
}

void* __cdecl cast_value(Any* value)
{
    if (value) {
        const TypeInfo& type = value->content
            ? value->content->type()
            : placeholderType;
        if (typeEqual(&type, requestedType)) {
            void* result = reinterpret_cast<char*>(value->content) + 4;
            if (result)
                return result;
        }
    }

    BadCast error;
    raise_bad_cast(&error);
}
