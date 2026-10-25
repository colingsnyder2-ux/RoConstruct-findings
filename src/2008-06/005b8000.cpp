// from server: 100% by king_originala
// roc 2008-06 005b8000  unit: VStockSound::?$FactoryProduct  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b8000
//
// 005b8000  64a100000000         mov eax, dword ptr fs:[0]
// 005b8006  6aff                 push -1
// 005b8008  6888617c00           push 0x7c6188
// 005b800d  50                   push eax
// 005b800e  64892500000000       mov dword ptr fs:[0], esp
// 005b8015  83ec0c               sub esp, 0xc
// 005b8018  56                   push esi
// 005b8019  8b742420             mov esi, dword ptr [esp + 0x20]
// 005b801d  85f6                 test esi, esi
// 005b801f  742c                 je 0x5b804d
// 005b8021  8b0e                 mov ecx, dword ptr [esi]
// 005b8023  85c9                 test ecx, ecx
// 005b8025  7409                 je 0x5b8030
// 005b8027  8b01                 mov eax, dword ptr [ecx]
// 005b8029  8b5004               mov edx, dword ptr [eax + 4]
// 005b802c  ffd2                 call edx
// 005b802e  eb05                 jmp 0x5b8035
// 005b8030  b814969200           mov eax, 0x929614
// 005b8035  68e8d39400           push 0x94d3e8
// 005b803a  8bc8                 mov ecx, eax
// 005b803c  ff1578288000         call dword ptr [0x802878]
// 005b8042  84c0                 test al, al
// 005b8044  7407                 je 0x5b804d
// 005b8046  8b06                 mov eax, dword ptr [esi]
// 005b8048  83c004               add eax, 4
// 005b804b  7529                 jne 0x5b8076
// 005b804d  6834ba8000           push 0x80ba34
// 005b8052  8d4c2408             lea ecx, [esp + 8]
// 005b8056  ff1564288000         call dword ptr [0x802864]
// 005b805c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 005b8064  8d442404             lea eax, [esp + 4]
// 005b8068  50                   push eax
// 005b8069  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005b8071  e87a23e5ff           call 0x40a3f0
// 005b8076  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b807a  5e                   pop esi
// 005b807b  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8082  83c418               add esp, 0x18
// 005b8085  c3                   ret 

struct TypeInfo {};

extern const TypeInfo emptyType;
extern const TypeInfo soundType;
extern const unsigned long badCastVtable;
extern bool (__thiscall *typeEqual)(const TypeInfo*, const TypeInfo&);
extern void (__thiscall *constructBadCast)(void*, const char*);
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void*);

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct Any {
    Placeholder* content;
};

struct BadCast {
    unsigned long data[3];
    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    constructBadCast(this, "bad cast");
    data[0] = reinterpret_cast<unsigned long>(&badCastVtable);
}

void* __cdecl castSound(Any* value)
{
    if (value) {
        const TypeInfo* type = value->content
            ? &value->content->type()
            : &emptyType;
        if (typeEqual(type, soundType)) {
            void* result = reinterpret_cast<char*>(value->content) + 4;
            if (result)
                return result;
        }
    }

    BadCast error;
    raise_bad_cast(&error);
}
