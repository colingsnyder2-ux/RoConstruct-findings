// from server: 100% by king_originala
// roc 2008-06 00416260  unit: CopyVerb  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416260
//
// 00416260  64a100000000         mov eax, dword ptr fs:[0]
// 00416266  6aff                 push -1
// 00416268  6888617c00           push 0x7c6188
// 0041626d  50                   push eax
// 0041626e  64892500000000       mov dword ptr fs:[0], esp
// 00416275  83ec0c               sub esp, 0xc
// 00416278  56                   push esi
// 00416279  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041627d  85f6                 test esi, esi
// 0041627f  742c                 je 0x4162ad
// 00416281  8b0e                 mov ecx, dword ptr [esi]
// 00416283  85c9                 test ecx, ecx
// 00416285  7409                 je 0x416290
// 00416287  8b01                 mov eax, dword ptr [ecx]
// 00416289  8b5004               mov edx, dword ptr [eax + 4]
// 0041628c  ffd2                 call edx
// 0041628e  eb05                 jmp 0x416295
// 00416290  b814969200           mov eax, 0x929614
// 00416295  6860bf9200           push 0x92bf60
// 0041629a  8bc8                 mov ecx, eax
// 0041629c  ff1578288000         call dword ptr [0x802878]
// 004162a2  84c0                 test al, al
// 004162a4  7407                 je 0x4162ad
// 004162a6  8b06                 mov eax, dword ptr [esi]
// 004162a8  83c004               add eax, 4
// 004162ab  7529                 jne 0x4162d6
// 004162ad  6834ba8000           push 0x80ba34
// 004162b2  8d4c2408             lea ecx, [esp + 8]
// 004162b6  ff1564288000         call dword ptr [0x802864]
// 004162bc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 004162c4  8d442404             lea eax, [esp + 4]
// 004162c8  50                   push eax
// 004162c9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004162d1  e81a41ffff           call 0x40a3f0
// 004162d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004162da  5e                   pop esi
// 004162db  64890d00000000       mov dword ptr fs:[0], ecx
// 004162e2  83c418               add esp, 0x18
// 004162e5  c3                   ret 

namespace std {
    class type_info {
    public:
        bool operator==(const type_info&) const;
    };
}

extern bool (__thiscall* typeInfoEqual)(
    const std::type_info*, const std::type_info&);

inline bool std::type_info::operator==(const type_info& other) const {
    return typeInfoEqual(this, other);
}

struct BadAnyCast {
    const void* table;
    const char* message;
    int owned;

    BadAnyCast();
    ~BadAnyCast();
};

extern BadAnyCast* (__thiscall* badCastConstructor)(
    BadAnyCast*, const char*);
extern const void* badAnyCastTable[];

inline BadAnyCast::BadAnyCast() {
    badCastConstructor(this, "bad cast");
    table = badAnyCastTable;
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const std::type_info& type() const = 0;
};

struct Any {
    Placeholder* content;
};

extern const std::type_info placeholderType;
extern const std::type_info vectorType;

__declspec(noreturn) void __cdecl throwBadCast(const BadAnyCast&);

void* __cdecl castValue(const Any* value) {
    if (value) {
        const std::type_info& type =
            value->content ? value->content->type() : placeholderType;
        if (type == vectorType) {
            void* result = reinterpret_cast<char*>(value->content) + 4;
            if (result)
                return result;
        }
    }
    throwBadCast(BadAnyCast());
}
