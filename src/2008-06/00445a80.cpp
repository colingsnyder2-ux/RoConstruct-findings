// from server: 100% by king_originala
// roc 2008-06 00445a80  unit: G3D::VVector2int16::?$holder  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445a80
//
// 00445a80  64a100000000         mov eax, dword ptr fs:[0]
// 00445a86  6aff                 push -1
// 00445a88  6888617c00           push 0x7c6188
// 00445a8d  50                   push eax
// 00445a8e  64892500000000       mov dword ptr fs:[0], esp
// 00445a95  83ec0c               sub esp, 0xc
// 00445a98  56                   push esi
// 00445a99  8b742420             mov esi, dword ptr [esp + 0x20]
// 00445a9d  85f6                 test esi, esi
// 00445a9f  742c                 je 0x445acd
// 00445aa1  8b0e                 mov ecx, dword ptr [esi]
// 00445aa3  85c9                 test ecx, ecx
// 00445aa5  7409                 je 0x445ab0
// 00445aa7  8b01                 mov eax, dword ptr [ecx]
// 00445aa9  8b5004               mov edx, dword ptr [eax + 4]
// 00445aac  ffd2                 call edx
// 00445aae  eb05                 jmp 0x445ab5
// 00445ab0  b814969200           mov eax, 0x929614
// 00445ab5  68dcbe9200           push 0x92bedc
// 00445aba  8bc8                 mov ecx, eax
// 00445abc  ff1578288000         call dword ptr [0x802878]
// 00445ac2  84c0                 test al, al
// 00445ac4  7407                 je 0x445acd
// 00445ac6  8b06                 mov eax, dword ptr [esi]
// 00445ac8  83c004               add eax, 4
// 00445acb  7529                 jne 0x445af6
// 00445acd  6834ba8000           push 0x80ba34
// 00445ad2  8d4c2408             lea ecx, [esp + 8]
// 00445ad6  ff1564288000         call dword ptr [0x802864]
// 00445adc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 00445ae4  8d442404             lea eax, [esp + 4]
// 00445ae8  50                   push eax
// 00445ae9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00445af1  e8fa48fcff           call 0x40a3f0
// 00445af6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00445afa  5e                   pop esi
// 00445afb  64890d00000000       mov dword ptr fs:[0], ecx
// 00445b02  83c418               add esp, 0x18
// 00445b05  c3                   ret 

namespace std {
    class type_info {
    public:
        bool __thiscall operator==(const type_info &) const;
    };
}

extern const std::type_info empty_type;
extern const std::type_info requested_type;
extern bool (__thiscall *type_equal)(const std::type_info *, const std::type_info &);

struct BadCast {
    unsigned long vtable;
    const char *message;
    int owned;

    BadCast(const char *);
    ~BadCast();
};

extern void (__thiscall *construct_bad_cast)(BadCast *, const char *);
extern unsigned long bad_cast_vtable[];
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void *);

inline BadCast::BadCast(const char *text)
{
    construct_bad_cast(this, text);
    vtable = reinterpret_cast<unsigned long>(bad_cast_vtable);
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const std::type_info &type() const = 0;
};

struct Any {
    Placeholder *content;
};

void *__cdecl checked_cast(Any *operand)
{
    if (operand) {
        const std::type_info &actual =
            operand->content ? operand->content->type() : empty_type;
        if (type_equal(&actual, requested_type)) {
            void *result = reinterpret_cast<char *>(operand->content) + 4;
            if (result)
                return result;
        }
    }

    BadCast error("bad cast");
    raise_bad_cast(&error);
}
