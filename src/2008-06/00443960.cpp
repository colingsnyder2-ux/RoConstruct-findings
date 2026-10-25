// from server: 100% by king_originala
// roc 2008-06 00443960  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443960
//
// 00443960  64a100000000         mov eax, dword ptr fs:[0]
// 00443966  6aff                 push -1
// 00443968  68a8257d00           push 0x7d25a8
// 0044396d  50                   push eax
// 0044396e  64892500000000       mov dword ptr fs:[0], esp
// 00443975  83ec08               sub esp, 8
// 00443978  56                   push esi
// 00443979  8bf1                 mov esi, ecx
// 0044397b  8b06                 mov eax, dword ptr [esi]
// 0044397d  8b4008               mov eax, dword ptr [eax + 8]
// 00443980  50                   push eax
// 00443981  b9d0be9200           mov ecx, 0x92bed0
// 00443986  ff1578288000         call dword ptr [0x802878]
// 0044398c  84c0                 test al, al
// 0044398e  741e                 je 0x4439ae
// 00443990  83c604               add esi, 4
// 00443993  56                   push esi
// 00443994  e8d7f9ffff           call 0x443370
// 00443999  8b00                 mov eax, dword ptr [eax]
// 0044399b  83c404               add esp, 4
// 0044399e  5e                   pop esi
// 0044399f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004439a3  64890d00000000       mov dword ptr fs:[0], ecx
// 004439aa  83c414               add esp, 0x14
// 004439ad  c3                   ret 
// 004439ae  8b0e                 mov ecx, dword ptr [esi]
// 004439b0  894c2404             mov dword ptr [esp + 4], ecx
// 004439b4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004439b7  85c9                 test ecx, ecx
// 004439b9  7409                 je 0x4439c4
// 004439bb  8b11                 mov edx, dword ptr [ecx]
// 004439bd  8b4208               mov eax, dword ptr [edx + 8]
// 004439c0  ffd0                 call eax
// 004439c2  eb02                 jmp 0x4439c6
// 004439c4  33c0                 xor eax, eax
// 004439c6  89442408             mov dword ptr [esp + 8], eax
// 004439ca  8d4c2404             lea ecx, [esp + 4]
// 004439ce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004439d6  e885b01200           call 0x56ea60
// 004439db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004439df  8b30                 mov esi, dword ptr [eax]
// 004439e1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004439e9  85c9                 test ecx, ecx
// 004439eb  7408                 je 0x4439f5
// 004439ed  8b11                 mov edx, dword ptr [ecx]
// 004439ef  8b02                 mov eax, dword ptr [edx]
// 004439f1  6a01                 push 1
// 004439f3  ffd0                 call eax
// 004439f5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004439f9  8bc6                 mov eax, esi
// 004439fb  5e                   pop esi
// 004439fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00443a03  83c414               add esp, 0x14
// 00443a06  c3                   ret 

struct TypeInfo {};
extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo &);
extern TypeInfo string_type;

struct Metadata {
    unsigned char padding[8];
    const TypeInfo* type;
};

struct Value {
    virtual ~Value();
    virtual void reserved();
    virtual Value* clone();
};

extern int* __cdecl access_value(Value**);

struct S {
    Metadata* metadata;
    Value* value;

    S(const S&);
    ~S();
    int* convert();
    int f();
};

inline S::S(const S& other)
{
    *reinterpret_cast<Metadata* volatile*>(&metadata) = other.metadata;

    Value* p = other.value;
    Value* copy;
    if (p)
        copy = p->clone();
    else
        copy = 0;
    value = copy;
}

inline S::~S()
{
    delete value;
}

int S::f()
{
    const TypeInfo* type =
        *reinterpret_cast<const TypeInfo* volatile*>(&metadata->type);
    if (type_equal(&string_type, *type))
        return *access_value(&value);

    S temporary(*this);
    return *temporary.convert();
}
