// from server: 100% by king_originala
// roc 2008-06 0059f1d0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f1d0
//
// 0059f1d0  64a100000000         mov eax, dword ptr fs:[0]
// 0059f1d6  6aff                 push -1
// 0059f1d8  6888617c00           push 0x7c6188
// 0059f1dd  50                   push eax
// 0059f1de  64892500000000       mov dword ptr fs:[0], esp
// 0059f1e5  83ec0c               sub esp, 0xc
// 0059f1e8  56                   push esi
// 0059f1e9  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059f1ed  85f6                 test esi, esi
// 0059f1ef  742c                 je 0x59f21d
// 0059f1f1  8b0e                 mov ecx, dword ptr [esi]
// 0059f1f3  85c9                 test ecx, ecx
// 0059f1f5  7409                 je 0x59f200
// 0059f1f7  8b01                 mov eax, dword ptr [ecx]
// 0059f1f9  8b5004               mov edx, dword ptr [eax + 4]
// 0059f1fc  ffd2                 call edx
// 0059f1fe  eb05                 jmp 0x59f205
// 0059f200  b814969200           mov eax, 0x929614
// 0059f205  6868b39400           push 0x94b368
// 0059f20a  8bc8                 mov ecx, eax
// 0059f20c  ff1578288000         call dword ptr [0x802878]
// 0059f212  84c0                 test al, al
// 0059f214  7407                 je 0x59f21d
// 0059f216  8b06                 mov eax, dword ptr [esi]
// 0059f218  83c004               add eax, 4
// 0059f21b  7529                 jne 0x59f246
// 0059f21d  6834ba8000           push 0x80ba34
// 0059f222  8d4c2408             lea ecx, [esp + 8]
// 0059f226  ff1564288000         call dword ptr [0x802864]
// 0059f22c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 0059f234  8d442404             lea eax, [esp + 4]
// 0059f238  50                   push eax
// 0059f239  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0059f241  e8aab1e6ff           call 0x40a3f0
// 0059f246  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059f24a  5e                   pop esi
// 0059f24b  64890d00000000       mov dword ptr fs:[0], ecx
// 0059f252  83c418               add esp, 0x18
// 0059f255  c3                   ret 

struct TypeInfo {};

struct Placeholder {
    virtual ~Placeholder();
    virtual const TypeInfo& type() const = 0;
};

struct Any {
    Placeholder* content;
};

extern const TypeInfo empty_type;
extern const TypeInfo mesh_type;
extern const char bad_cast_message[];
extern const unsigned long bad_cast_vtable[];

extern bool (__thiscall *type_info_equal)(const TypeInfo*, const TypeInfo*);
extern void (__thiscall *bad_cast_construct)(void*, const char*);
extern __declspec(noreturn) void __cdecl raise_bad_cast(const void*);

namespace std {
    struct bad_cast {
        unsigned long words[3];
        bad_cast();
        ~bad_cast();
    };
}

inline std::bad_cast::bad_cast()
{
    bad_cast_construct(this, bad_cast_message);
    words[0] = reinterpret_cast<unsigned long>(bad_cast_vtable);
}

void* __cdecl cast_value(Any* operand)
{
    void* result = 0;

    if (operand) {
        const TypeInfo* actual = operand->content
            ? &operand->content->type()
            : &empty_type;

        if (type_info_equal(actual, &mesh_type))
            result = reinterpret_cast<char*>(operand->content) + 4;
    }

    if (!result) {
        std::bad_cast error;
        raise_bad_cast(&error);
    }

    return result;
}
