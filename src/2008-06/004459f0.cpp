// from server: 100% by king_originala
// roc 2008-06 004459f0  unit: G3D::VVector2int16::?$holder  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004459f0
//
// 004459f0  64a100000000         mov eax, dword ptr fs:[0]
// 004459f6  6aff                 push -1
// 004459f8  6888617c00           push 0x7c6188
// 004459fd  50                   push eax
// 004459fe  64892500000000       mov dword ptr fs:[0], esp
// 00445a05  83ec0c               sub esp, 0xc
// 00445a08  56                   push esi
// 00445a09  8b742420             mov esi, dword ptr [esp + 0x20]
// 00445a0d  85f6                 test esi, esi
// 00445a0f  742c                 je 0x445a3d
// 00445a11  8b0e                 mov ecx, dword ptr [esi]
// 00445a13  85c9                 test ecx, ecx
// 00445a15  7409                 je 0x445a20
// 00445a17  8b01                 mov eax, dword ptr [ecx]
// 00445a19  8b5004               mov edx, dword ptr [eax + 4]
// 00445a1c  ffd2                 call edx
// 00445a1e  eb05                 jmp 0x445a25
// 00445a20  b814969200           mov eax, 0x929614
// 00445a25  6834109300           push 0x931034
// 00445a2a  8bc8                 mov ecx, eax
// 00445a2c  ff1578288000         call dword ptr [0x802878]
// 00445a32  84c0                 test al, al
// 00445a34  7407                 je 0x445a3d
// 00445a36  8b06                 mov eax, dword ptr [esi]
// 00445a38  83c004               add eax, 4
// 00445a3b  7529                 jne 0x445a66
// 00445a3d  6834ba8000           push 0x80ba34
// 00445a42  8d4c2408             lea ecx, [esp + 8]
// 00445a46  ff1564288000         call dword ptr [0x802864]
// 00445a4c  c74424042cba8000     mov dword ptr [esp + 4], 0x80ba2c
// 00445a54  8d442404             lea eax, [esp + 4]
// 00445a58  50                   push eax
// 00445a59  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00445a61  e88a49fcff           call 0x40a3f0
// 00445a66  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00445a6a  5e                   pop esi
// 00445a6b  64890d00000000       mov dword ptr fs:[0], ecx
// 00445a72  83c418               add esp, 0x18
// 00445a75  c3                   ret 

struct TypeInfo {};
extern const TypeInfo placeholder_type;
extern const TypeInfo vector_type;
extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo *);

struct Placeholder {
    virtual void destroy() = 0;
    virtual const TypeInfo &type() const = 0;
};

struct Any {
    Placeholder *content;
};

extern void (__thiscall *construct_bad_cast)(void *, const char *);
__declspec(noreturn) void __cdecl raise_bad_cast(const void *);

struct BadCast {
    unsigned long data[3];
    BadCast();
    ~BadCast();
};

inline BadCast::BadCast()
{
    construct_bad_cast(this, "bad cast");
    data[0] = 0x0080BA2CUL;
}

short *__cdecl cast_vector(Any *value)
{
    if (value) {
        const TypeInfo &type = value->content
            ? value->content->type()
            : placeholder_type;

        if (type_equal(&type, &vector_type)) {
            short *result = reinterpret_cast<short *>(
                reinterpret_cast<char *>(value->content) + 4);
            if (result)
                return result;
        }
    }

    BadCast error;
    raise_bad_cast(&error);
}
