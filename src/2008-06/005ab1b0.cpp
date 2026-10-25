// from server: 100% by king_originala
// roc 2008-06 005ab1b0  unit: RBX::Lua::ThreadRef::VNode::V?$shared_ptr::?$TItem  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ab1b0
//
// 005ab1b0  64a100000000         mov eax, dword ptr fs:[0]
// 005ab1b6  6aff                 push -1
// 005ab1b8  6888617c00           push 0x7c6188
// 005ab1bd  50                   push eax
// 005ab1be  64892500000000       mov dword ptr fs:[0], esp
// 005ab1c5  83ec0c               sub esp, 0xc
// 005ab1c8  56                   push esi
// 005ab1c9  8b742420             mov esi, dword ptr [esp + 0x20]
// 005ab1cd  85f6                 test esi, esi
// 005ab1cf  742c                 je 0x5ab1fd
// 005ab1d1  8b0e                 mov ecx, dword ptr [esi]
// 005ab1d3  85c9                 test ecx, ecx
// 005ab1d5  7409                 je 0x5ab1e0
// 005ab1d7  8b01                 mov eax, dword ptr [ecx]
// 005ab1d9  8b5004               mov edx, dword ptr [eax + 4]
// 005ab1dc  ffd2                 call edx
// 005ab1de  eb05                 jmp 0x5ab1e5
// 005ab1e0  b814969200           mov eax, 0x929614
// 005ab1e5  6840639400           push 0x946340
// 005ab1ea  8bc8                 mov ecx, eax
// 005ab1ec  ff1578288000         call dword ptr [0x802878]
// 005ab1f2  84c0                 test al, al
// 005ab1f4  7407                 je 0x5ab1fd
// 005ab1f6  8b06                 mov eax, dword ptr [esi]
// 005ab1f8  83c004               add eax, 4
// 005ab1fb  7529                 jne 0x5ab226
// 005ab1fd  6834ba8000           push 0x80ba34
// 005ab202  8d4c2408             lea ecx, [esp + 8]
// 005ab206  ff1564288000         call dword ptr [0x802864]
// 005ab20c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 005ab214  8d442404             lea eax, [esp + 4]
// 005ab218  50                   push eax
// 005ab219  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005ab221  e8caf1e5ff           call 0x40a3f0
// 005ab226  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ab22a  5e                   pop esi
// 005ab22b  64890d00000000       mov dword ptr fs:[0], ecx
// 005ab232  83c418               add esp, 0x18
// 005ab235  c3                   ret 

struct TypeInfo {};
extern const TypeInfo emptyType;
extern const TypeInfo targetType;
extern bool (__thiscall *typeEqual)(const TypeInfo*, const TypeInfo&);

struct Holder {
    virtual ~Holder();
    virtual const TypeInfo& type() const;
    unsigned long value;
};

struct Storage {
    Holder* content;
};

extern void (__thiscall *construct_bad_cast)(void*, const char*);
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void*);
extern const unsigned long badCastVtable[];

struct BadCast {
    unsigned long object[3];
    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, "bad cast");
    object[0] = reinterpret_cast<unsigned long>(badCastVtable);
}

unsigned long* __cdecl cast_value(Storage* source)
{
    unsigned long* result = 0;
    if (source) {
        const TypeInfo& type = source->content
            ? source->content->type() : emptyType;
        if (typeEqual(&type, targetType))
            result = &source->content->value;
    }
    if (!result) {
        BadCast error;
        raise_bad_cast(&error);
    }
    return result;
}
