// from server: 100% by colin
// roc 2008-06 005ef2f0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef2f0
//
// 005ef2f0  64a100000000         mov eax, dword ptr fs:[0]
// 005ef2f6  6aff                 push -1
// 005ef2f8  68a8257d00           push 0x7d25a8
// 005ef2fd  50                   push eax
// 005ef2fe  64892500000000       mov dword ptr fs:[0], esp
// 005ef305  83ec08               sub esp, 8
// 005ef308  56                   push esi
// 005ef309  8bf1                 mov esi, ecx
// 005ef30b  8b06                 mov eax, dword ptr [esi]
// 005ef30d  8b4008               mov eax, dword ptr [eax + 8]
// 005ef310  50                   push eax
// 005ef311  b9205e9500           mov ecx, 0x955e20
// 005ef316  ff1578288000         call dword ptr [0x802878]
// 005ef31c  84c0                 test al, al
// 005ef31e  741e                 je 0x5ef33e
// 005ef320  83c604               add esi, 4
// 005ef323  56                   push esi
// 005ef324  e8c7e7ffff           call 0x5edaf0
// 005ef329  8b00                 mov eax, dword ptr [eax]
// 005ef32b  83c404               add esp, 4
// 005ef32e  5e                   pop esi
// 005ef32f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef333  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef33a  83c414               add esp, 0x14
// 005ef33d  c3                   ret 
// 005ef33e  8b0e                 mov ecx, dword ptr [esi]
// 005ef340  894c2404             mov dword ptr [esp + 4], ecx
// 005ef344  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ef347  85c9                 test ecx, ecx
// 005ef349  7409                 je 0x5ef354
// 005ef34b  8b11                 mov edx, dword ptr [ecx]
// 005ef34d  8b4208               mov eax, dword ptr [edx + 8]
// 005ef350  ffd0                 call eax
// 005ef352  eb02                 jmp 0x5ef356
// 005ef354  33c0                 xor eax, eax
// 005ef356  89442408             mov dword ptr [esp + 8], eax
// 005ef35a  8d4c2404             lea ecx, [esp + 4]
// 005ef35e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ef366  e8b5fcffff           call 0x5ef020
// 005ef36b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef36f  8b30                 mov esi, dword ptr [eax]
// 005ef371  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005ef379  85c9                 test ecx, ecx
// 005ef37b  7408                 je 0x5ef385
// 005ef37d  8b11                 mov edx, dword ptr [ecx]
// 005ef37f  8b02                 mov eax, dword ptr [edx]
// 005ef381  6a01                 push 1
// 005ef383  ffd0                 call eax
// 005ef385  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef389  8bc6                 mov eax, esi
// 005ef38b  5e                   pop esi
// 005ef38c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef393  83c414               add esp, 0x14
// 005ef396  c3                   ret 

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
