// from server: 100% by king_originala
// roc 2008-06 0059a880  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a880
//
// 0059a880  64a100000000         mov eax, dword ptr fs:[0]
// 0059a886  6aff                 push -1
// 0059a888  6888617c00           push 0x7c6188
// 0059a88d  50                   push eax
// 0059a88e  64892500000000       mov dword ptr fs:[0], esp
// 0059a895  83ec0c               sub esp, 0xc
// 0059a898  56                   push esi
// 0059a899  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059a89d  85f6                 test esi, esi
// 0059a89f  742c                 je 0x59a8cd
// 0059a8a1  8b0e                 mov ecx, dword ptr [esi]
// 0059a8a3  85c9                 test ecx, ecx
// 0059a8a5  7409                 je 0x59a8b0
// 0059a8a7  8b01                 mov eax, dword ptr [ecx]
// 0059a8a9  8b5004               mov edx, dword ptr [eax + 4]
// 0059a8ac  ffd2                 call edx
// 0059a8ae  eb05                 jmp 0x59a8b5
// 0059a8b0  b814969200           mov eax, 0x929614
// 0059a8b5  68a4639400           push 0x9463a4
// 0059a8ba  8bc8                 mov ecx, eax
// 0059a8bc  ff1578288000         call dword ptr [0x802878]
// 0059a8c2  84c0                 test al, al
// 0059a8c4  7407                 je 0x59a8cd
// 0059a8c6  8b06                 mov eax, dword ptr [esi]
// 0059a8c8  83c004               add eax, 4
// 0059a8cb  7529                 jne 0x59a8f6
// 0059a8cd  6834ba8000           push 0x80ba34
// 0059a8d2  8d4c2408             lea ecx, [esp + 8]
// 0059a8d6  ff1564288000         call dword ptr [0x802864]
// 0059a8dc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 0059a8e4  8d442404             lea eax, [esp + 4]
// 0059a8e8  50                   push eax
// 0059a8e9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0059a8f1  e8fafae6ff           call 0x40a3f0
// 0059a8f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059a8fa  5e                   pop esi
// 0059a8fb  64890d00000000       mov dword ptr fs:[0], ecx
// 0059a902  83c418               add esp, 0x18
// 0059a905  c3                   ret 

struct TypeInfo {};

extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo &);
extern void (__thiscall *construct_bad_cast)(void *, const char *);

struct BadCast {
    unsigned long table;
    unsigned long data[2];

    BadCast(const char *);
    ~BadCast();
};

inline BadCast::BadCast(const char *message)
{
    construct_bad_cast(this, message);
    table = 0x0080BA2CUL;
}

__declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct Placeholder {
    virtual void destroy();
    virtual const TypeInfo &type() const;
};

struct Any {
    Placeholder *content;
};

void *__cdecl cast_color(Any *value)
{
    if (value) {
        const TypeInfo &actual = value->content
            ? value->content->type()
            : *reinterpret_cast<const TypeInfo *>(0x00929614UL);

        if (type_equal(&actual,
                       *reinterpret_cast<const TypeInfo *>(0x009463A4UL))) {
            void *result = reinterpret_cast<char *>(value->content) + 4;
            if (result)
                return result;
        }
    }

    BadCast error("bad cast");
    raise_bad_cast(&error);
}
