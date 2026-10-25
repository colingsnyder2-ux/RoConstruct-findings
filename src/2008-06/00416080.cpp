// from server: 100% by king_originala
// roc 2008-06 00416080  unit: CopyVerb  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416080
//
// 00416080  64a100000000         mov eax, dword ptr fs:[0]
// 00416086  6aff                 push -1
// 00416088  6888617c00           push 0x7c6188
// 0041608d  50                   push eax
// 0041608e  64892500000000       mov dword ptr fs:[0], esp
// 00416095  83ec0c               sub esp, 0xc
// 00416098  56                   push esi
// 00416099  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041609d  85f6                 test esi, esi
// 0041609f  742c                 je 0x4160cd
// 004160a1  8b0e                 mov ecx, dword ptr [esi]
// 004160a3  85c9                 test ecx, ecx
// 004160a5  7409                 je 0x4160b0
// 004160a7  8b01                 mov eax, dword ptr [ecx]
// 004160a9  8b5004               mov edx, dword ptr [eax + 4]
// 004160ac  ffd2                 call edx
// 004160ae  eb05                 jmp 0x4160b5
// 004160b0  b814969200           mov eax, 0x929614
// 004160b5  68e8be9200           push 0x92bee8
// 004160ba  8bc8                 mov ecx, eax
// 004160bc  ff1578288000         call dword ptr [0x802878]
// 004160c2  84c0                 test al, al
// 004160c4  7407                 je 0x4160cd
// 004160c6  8b06                 mov eax, dword ptr [esi]
// 004160c8  83c008               add eax, 8
// 004160cb  7529                 jne 0x4160f6
// 004160cd  6834ba8000           push 0x80ba34
// 004160d2  8d4c2408             lea ecx, [esp + 8]
// 004160d6  ff1564288000         call dword ptr [0x802864]
// 004160dc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 004160e4  8d442404             lea eax, [esp + 4]
// 004160e8  50                   push eax
// 004160e9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004160f1  e8fa42ffff           call 0x40a3f0
// 004160f6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004160fa  dd00                 fld qword ptr [eax]
// 004160fc  5e                   pop esi
// 004160fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00416104  83c418               add esp, 0x18
// 00416107  c3                   ret 

class type_info {
public:
    bool operator==(const type_info&) const;
};

namespace std {
    class __declspec(novtable) bad_cast {
        char* message;
        int owns;
    public:
        bad_cast();
        virtual ~bad_cast();
        virtual const char* what() const;
    };
}

extern void (__thiscall *construct_bad_cast)(void*, const char*);
extern bool (__thiscall *compare_type_info)(
    const type_info*, const type_info&);
__declspec(noreturn) void __cdecl raise_bad_cast(const void*);

std::bad_cast::bad_cast()
{
    construct_bad_cast(this, "bad cast");
}

struct BadAnyCast : std::bad_cast {
    virtual const char* what() const;
};

const char* BadAnyCast::what() const
{
    return "boost::bad_any_cast: failed conversion using boost::any_cast";
}

struct Placeholder {
    virtual ~Placeholder();
    virtual const type_info& type() const = 0;
};

struct Any {
    Placeholder* content;
};

double __cdecl get_double(const Any* value)
{
    double* result = 0;
    if (value) {
        const type_info& type =
            value->content ? value->content->type() : typeid(void);
        if (compare_type_info(&type, typeid(double)))
            result = reinterpret_cast<double*>(
                reinterpret_cast<char*>(value->content) + 8);
    }
    if (!result) {
        BadAnyCast error;
        raise_bad_cast(&error);
    }
    return *result;
}
