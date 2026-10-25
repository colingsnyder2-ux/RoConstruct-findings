// from server: 100% by king_originala
// roc 2008-06 00563f60  unit: boost::any::N::?$holder  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563f60
//
// 00563f60  64a100000000         mov eax, dword ptr fs:[0]
// 00563f66  6aff                 push -1
// 00563f68  6888617c00           push 0x7c6188
// 00563f6d  50                   push eax
// 00563f6e  64892500000000       mov dword ptr fs:[0], esp
// 00563f75  83ec0c               sub esp, 0xc
// 00563f78  56                   push esi
// 00563f79  8b742420             mov esi, dword ptr [esp + 0x20]
// 00563f7d  85f6                 test esi, esi
// 00563f7f  742c                 je 0x563fad
// 00563f81  8b0e                 mov ecx, dword ptr [esi]
// 00563f83  85c9                 test ecx, ecx
// 00563f85  7409                 je 0x563f90
// 00563f87  8b01                 mov eax, dword ptr [ecx]
// 00563f89  8b5004               mov edx, dword ptr [eax + 4]
// 00563f8c  ffd2                 call edx
// 00563f8e  eb05                 jmp 0x563f95
// 00563f90  b814969200           mov eax, 0x929614
// 00563f95  68e8be9200           push 0x92bee8
// 00563f9a  8bc8                 mov ecx, eax
// 00563f9c  ff1578288000         call dword ptr [0x802878]
// 00563fa2  84c0                 test al, al
// 00563fa4  7407                 je 0x563fad
// 00563fa6  8b06                 mov eax, dword ptr [esi]
// 00563fa8  83c008               add eax, 8
// 00563fab  7529                 jne 0x563fd6
// 00563fad  6834ba8000           push 0x80ba34
// 00563fb2  8d4c2408             lea ecx, [esp + 8]
// 00563fb6  ff1564288000         call dword ptr [0x802864]
// 00563fbc  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 00563fc4  8d442404             lea eax, [esp + 4]
// 00563fc8  50                   push eax
// 00563fc9  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00563fd1  e81a64eaff           call 0x40a3f0
// 00563fd6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00563fda  5e                   pop esi
// 00563fdb  64890d00000000       mov dword ptr fs:[0], ecx
// 00563fe2  83c418               add esp, 0x18
// 00563fe5  c3                   ret 

struct TypeInfo {};

extern TypeInfo empty_type;
extern TypeInfo string_type;
extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo &);

struct Holder
{
    virtual ~Holder();
    virtual const TypeInfo &type() const;
};

struct Any
{
    Holder *content;
};

extern void (__thiscall *construct_bad_cast)(void *, const char *);
extern void (__thiscall *destroy_bad_cast)(void *);
extern unsigned long bad_any_cast_vtable;
extern const char bad_cast_message[];
__declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct BadAnyCast
{
    unsigned long data[3];
    BadAnyCast();
    ~BadAnyCast();
};

inline BadAnyCast::BadAnyCast()
{
    construct_bad_cast(this, bad_cast_message);
    data[0] = reinterpret_cast<unsigned long>(&bad_any_cast_vtable);
}

inline BadAnyCast::~BadAnyCast()
{
    destroy_bad_cast(this);
}

void *__cdecl func_00563f60(Any *value)
{
    void *result;
    if (value &&
        type_equal(value->content ? &value->content->type() : &empty_type,
                   string_type) &&
        (result = reinterpret_cast<char *>(value->content) + 8) != 0)
        return result;

    BadAnyCast error;
    raise_bad_cast(&error);
}
