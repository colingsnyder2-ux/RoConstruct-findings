// from server: 100% by king_originala
// roc 2008-06 00415ed0  unit: CopyVerb  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415ed0
//
// 00415ed0  64a100000000         mov eax, dword ptr fs:[0]
// 00415ed6  6aff                 push -1
// 00415ed8  6888617c00           push 0x7c6188
// 00415edd  50                   push eax
// 00415ede  64892500000000       mov dword ptr fs:[0], esp
// 00415ee5  83ec0c               sub esp, 0xc
// 00415ee8  56                   push esi
// 00415ee9  8b742420             mov esi, dword ptr [esp + 0x20]
// 00415eed  85f6                 test esi, esi
// 00415eef  742c                 je 0x415f1d
// 00415ef1  8b0e                 mov ecx, dword ptr [esi]
// 00415ef3  85c9                 test ecx, ecx
// 00415ef5  7409                 je 0x415f00
// 00415ef7  8b01                 mov eax, dword ptr [ecx]
// 00415ef9  8b5004               mov edx, dword ptr [eax + 4]
// 00415efc  ffd2                 call edx
// 00415efe  eb05                 jmp 0x415f05
// 00415f00  b814969200           mov eax, 0x929614
// 00415f05  68d0be9200           push 0x92bed0
// 00415f0a  8bc8                 mov ecx, eax
// 00415f0c  ff1578288000         call dword ptr [0x802878]
// 00415f12  84c0                 test al, al
// 00415f14  7407                 je 0x415f1d
// 00415f16  8b06                 mov eax, dword ptr [esi]
// 00415f18  83c004               add eax, 4
// 00415f1b  7529                 jne 0x415f46
// 00415f1d  6834ba8000           push 0x80ba34
// 00415f22  8d4c2408             lea ecx, [esp + 8]
// 00415f26  ff1564288000         call dword ptr [0x802864]
// 00415f2c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 00415f34  8d442404             lea eax, [esp + 4]
// 00415f38  50                   push eax
// 00415f39  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00415f41  e8aa44ffff           call 0x40a3f0
// 00415f46  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00415f4a  8b00                 mov eax, dword ptr [eax]
// 00415f4c  5e                   pop esi
// 00415f4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00415f54  83c418               add esp, 0x18
// 00415f57  c3                   ret 

struct TypeInfo {};

extern bool (__thiscall *same_type)(const TypeInfo*, const TypeInfo&);
extern void (__thiscall *construct_bad_cast)(void*, const char*);
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void*);

struct BadCast {
    unsigned long words[3];
    BadCast(const char* message) {
        construct_bad_cast(this, message);
        words[0] = 0x0080BA2CUL;
    }
    ~BadCast();
};

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
    unsigned long value;
};

struct Any {
    Placeholder* content;
};

unsigned long __cdecl cast_value(const Any* source)
{
    unsigned long* result = 0;
    if (source) {
        const TypeInfo& type = source->content
            ? source->content->type()
            : *reinterpret_cast<const TypeInfo*>(0x00929614UL);
        if (same_type(&type,
                      *reinterpret_cast<const TypeInfo*>(0x0092BED0UL)))
            result = &source->content->value;
    }
    if (!result) {
        BadCast error(reinterpret_cast<const char*>(0x0080BA34UL));
        raise_bad_cast(&error);
    }
    return *result;
}
