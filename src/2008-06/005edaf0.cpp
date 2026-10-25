// from server: 100% by king_originala
// roc 2008-06 005edaf0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005edaf0
//
// 005edaf0  64a100000000         mov eax, dword ptr fs:[0]
// 005edaf6  6aff                 push -1
// 005edaf8  6888617c00           push 0x7c6188
// 005edafd  50                   push eax
// 005edafe  64892500000000       mov dword ptr fs:[0], esp
// 005edb05  83ec0c               sub esp, 0xc
// 005edb08  56                   push esi
// 005edb09  8b742420             mov esi, dword ptr [esp + 0x20]
// 005edb0d  85f6                 test esi, esi
// 005edb0f  742c                 je 0x5edb3d
// 005edb11  8b0e                 mov ecx, dword ptr [esi]
// 005edb13  85c9                 test ecx, ecx
// 005edb15  7409                 je 0x5edb20
// 005edb17  8b01                 mov eax, dword ptr [ecx]
// 005edb19  8b5004               mov edx, dword ptr [eax + 4]
// 005edb1c  ffd2                 call edx
// 005edb1e  eb05                 jmp 0x5edb25
// 005edb20  b814969200           mov eax, 0x929614
// 005edb25  68205e9500           push 0x955e20
// 005edb2a  8bc8                 mov ecx, eax
// 005edb2c  ff1578288000         call dword ptr [0x802878]
// 005edb32  84c0                 test al, al
// 005edb34  7407                 je 0x5edb3d
// 005edb36  8b06                 mov eax, dword ptr [esi]
// 005edb38  83c004               add eax, 4
// 005edb3b  7529                 jne 0x5edb66
// 005edb3d  6834ba8000           push 0x80ba34
// 005edb42  8d4c2408             lea ecx, [esp + 8]
// 005edb46  ff1564288000         call dword ptr [0x802864]
// 005edb4c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 005edb54  8d442404             lea eax, [esp + 4]
// 005edb58  50                   push eax
// 005edb59  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005edb61  e88ac8e1ff           call 0x40a3f0
// 005edb66  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005edb6a  5e                   pop esi
// 005edb6b  64890d00000000       mov dword ptr fs:[0], ecx
// 005edb72  83c418               add esp, 0x18
// 005edb75  c3                   ret 

namespace std {
    class type_info {
    public:
        bool __thiscall operator==(const type_info&) const;
    };
}

extern bool (__thiscall *type_equal)(
    const std::type_info*, const std::type_info&);
extern void (__thiscall *construct_bad_cast)(void*, const char*);
extern void (__thiscall *destroy_bad_cast)(void*);

extern const std::type_info empty_type;
extern const std::type_info surface_type;
extern const void* bad_cast_vtable[];

struct Placeholder {
    virtual ~Placeholder();
    virtual const std::type_info& type() const;
};

struct Any {
    Placeholder* content;
};

struct BadCast {
    const void* vtable;
    int data[2];

    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, "bad cast");
    vtable = bad_cast_vtable;
}

inline BadCast::~BadCast()
{
    destroy_bad_cast(this);
}

__declspec(noreturn) void __cdecl raise_bad_cast(const void* source);

int* __cdecl cast_surface(Any* value)
{
    if (value) {
        const std::type_info& type =
            value->content ? value->content->type() : empty_type;
        if (type_equal(&type, surface_type)) {
            int* result = reinterpret_cast<int*>(
                reinterpret_cast<char*>(value->content) + 4);
            if (result)
                return result;
        }
    }

    BadCast error;
    raise_bad_cast(&error);
}
