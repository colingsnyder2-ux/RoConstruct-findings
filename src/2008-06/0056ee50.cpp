// from server: 100% by colin
// roc 2008-06 0056ee50  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ee50
//
// 0056ee50  83ec08               sub esp, 8
// 0056ee53  53                   push ebx
// 0056ee54  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056ee5a  56                   push esi
// 0056ee5b  57                   push edi
// 0056ee5c  8bf9                 mov edi, ecx
// 0056ee5e  8b07                 mov eax, dword ptr [edi]
// 0056ee60  8b4008               mov eax, dword ptr [eax + 8]
// 0056ee63  50                   push eax
// 0056ee64  b9d0be9200           mov ecx, 0x92bed0
// 0056ee69  ffd3                 call ebx
// 0056ee6b  84c0                 test al, al
// 0056ee6d  7455                 je 0x56eec4
// 0056ee6f  8d7704               lea esi, [edi + 4]
// 0056ee72  56                   push esi
// 0056ee73  e85870eaff           call 0x415ed0
// 0056ee78  89442410             mov dword ptr [esp + 0x10], eax
// 0056ee7c  db442410             fild dword ptr [esp + 0x10]
// 0056ee80  6a10                 push 0x10
// 0056ee82  dd5c2414             fstp qword ptr [esp + 0x14]
// 0056ee86  e8951a1300           call 0x6a0920
// 0056ee8b  83c408               add esp, 8
// 0056ee8e  85c0                 test eax, eax
// 0056ee90  740f                 je 0x56eea1
// 0056ee92  dd44240c             fld qword ptr [esp + 0xc]
// 0056ee96  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 0056ee9c  dd5808               fstp qword ptr [eax + 8]
// 0056ee9f  eb02                 jmp 0x56eea3
// 0056eea1  33c0                 xor eax, eax
// 0056eea3  8d54240c             lea edx, [esp + 0xc]
// 0056eea7  8bc8                 mov ecx, eax
// 0056eea9  3bd6                 cmp edx, esi
// 0056eeab  7404                 je 0x56eeb1
// 0056eead  8b0e                 mov ecx, dword ptr [esi]
// 0056eeaf  8906                 mov dword ptr [esi], eax
// 0056eeb1  85c9                 test ecx, ecx
// 0056eeb3  7408                 je 0x56eebd
// 0056eeb5  8b01                 mov eax, dword ptr [ecx]
// 0056eeb7  8b10                 mov edx, dword ptr [eax]
// 0056eeb9  6a01                 push 1
// 0056eebb  ffd2                 call edx
// 0056eebd  e84edeffff           call 0x56cd10
// 0056eec2  8907                 mov dword ptr [edi], eax
// 0056eec4  8b07                 mov eax, dword ptr [edi]
// 0056eec6  8b4008               mov eax, dword ptr [eax + 8]
// 0056eec9  50                   push eax
// 0056eeca  b944969200           mov ecx, 0x929644
// 0056eecf  ffd3                 call ebx
// 0056eed1  84c0                 test al, al
// 0056eed3  745c                 je 0x56ef31
// 0056eed5  8d7704               lea esi, [edi + 4]
// 0056eed8  56                   push esi
// 0056eed9  e88270eaff           call 0x415f60
// 0056eede  33c9                 xor ecx, ecx
// 0056eee0  84c0                 test al, al
// 0056eee2  0f95c1               setne cl
// 0056eee5  6a10                 push 0x10
// 0056eee7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056eeeb  db442414             fild dword ptr [esp + 0x14]
// 0056eeef  dd5c2414             fstp qword ptr [esp + 0x14]
// 0056eef3  e8281a1300           call 0x6a0920
// 0056eef8  83c408               add esp, 8
// 0056eefb  85c0                 test eax, eax
// 0056eefd  740f                 je 0x56ef0e
// 0056eeff  dd44240c             fld qword ptr [esp + 0xc]
// 0056ef03  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 0056ef09  dd5808               fstp qword ptr [eax + 8]
// 0056ef0c  eb02                 jmp 0x56ef10
// 0056ef0e  33c0                 xor eax, eax
// 0056ef10  8d54240c             lea edx, [esp + 0xc]
// 0056ef14  8bc8                 mov ecx, eax
// 0056ef16  3bd6                 cmp edx, esi
// 0056ef18  7404                 je 0x56ef1e
// 0056ef1a  8b0e                 mov ecx, dword ptr [esi]
// 0056ef1c  8906                 mov dword ptr [esi], eax
// 0056ef1e  85c9                 test ecx, ecx
// 0056ef20  7408                 je 0x56ef2a
// 0056ef22  8b01                 mov eax, dword ptr [ecx]
// 0056ef24  8b10                 mov edx, dword ptr [eax]
// 0056ef26  6a01                 push 1
// 0056ef28  ffd2                 call edx
// 0056ef2a  e8e1ddffff           call 0x56cd10
// 0056ef2f  8907                 mov dword ptr [edi], eax
// 0056ef31  8b07                 mov eax, dword ptr [edi]
// 0056ef33  8b4008               mov eax, dword ptr [eax + 8]
// 0056ef36  50                   push eax
// 0056ef37  b9dcbe9200           mov ecx, 0x92bedc
// 0056ef3c  ffd3                 call ebx
// 0056ef3e  84c0                 test al, al
// 0056ef40  744d                 je 0x56ef8f
// 0056ef42  8d7704               lea esi, [edi + 4]
// 0056ef45  56                   push esi
// 0056ef46  e8a570eaff           call 0x415ff0
// 0056ef4b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0056ef4f  6a10                 push 0x10
// 0056ef51  e8ca191300           call 0x6a0920
// 0056ef56  83c408               add esp, 8
// 0056ef59  85c0                 test eax, eax
// 0056ef5b  740f                 je 0x56ef6c
// 0056ef5d  dd44240c             fld qword ptr [esp + 0xc]
// 0056ef61  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 0056ef67  dd5808               fstp qword ptr [eax + 8]
// 0056ef6a  eb02                 jmp 0x56ef6e
// 0056ef6c  33c0                 xor eax, eax
// 0056ef6e  8d54240c             lea edx, [esp + 0xc]
// 0056ef72  8bc8                 mov ecx, eax
// 0056ef74  3bd6                 cmp edx, esi
// 0056ef76  7404                 je 0x56ef7c
// 0056ef78  8b0e                 mov ecx, dword ptr [esi]
// 0056ef7a  8906                 mov dword ptr [esi], eax
// 0056ef7c  85c9                 test ecx, ecx
// 0056ef7e  7408                 je 0x56ef88
// 0056ef80  8b01                 mov eax, dword ptr [ecx]
// 0056ef82  8b10                 mov edx, dword ptr [eax]
// 0056ef84  6a01                 push 1
// 0056ef86  ffd2                 call edx
// 0056ef88  e883ddffff           call 0x56cd10
// 0056ef8d  8907                 mov dword ptr [edi], eax
// 0056ef8f  8bcf                 mov ecx, edi
// 0056ef91  5f                   pop edi
// 0056ef92  5e                   pop esi
// 0056ef93  5b                   pop ebx
// 0056ef94  83c408               add esp, 8
// 0056ef97  e9d4e7ffff           jmp 0x56d770

struct TypeInfo
{
    unsigned int data[3];
};

extern TypeInfo intType;
extern TypeInfo boolType;
extern TypeInfo floatType;
typedef bool (__thiscall *TypeEqual)(const TypeInfo *, const TypeInfo *);
extern TypeEqual typeEqual;

struct Descriptor
{
    unsigned int data[2];
    const TypeInfo *type;
};

struct Holder;
typedef void (__thiscall *DestroyHolder)(Holder *, unsigned int);

struct Holder
{
    DestroyHolder *vtable;
    unsigned int padding;
    double value;

    Holder(double);
};

extern DestroyHolder doubleHolderVtable[];
extern void * __cdecl operator new(unsigned int);
extern int __cdecl getInt(Holder **);
extern bool __cdecl getBool(Holder **);
extern double __cdecl getFloat(Holder **);
extern Descriptor * __cdecl getDoubleDescriptor();

inline Holder::Holder(double v)
{
    vtable = doubleHolderVtable;
    value = v;
}

struct Owner
{
    Holder *pointer;

    void swap(Owner &);
    ~Owner();
};

inline void Owner::swap(Owner &other)
{
    if (this != &other)
    {
        Holder *old = pointer;
        pointer = other.pointer;
        other.pointer = old;
    }
}

inline Owner::~Owner()
{
    if (pointer)
        pointer->vtable[0](pointer, 1);
}

struct S
{
    Descriptor *descriptor;
    Owner holder;

    double f();
    double finish();
};

double S::f()
{
    TypeEqual equal = typeEqual;

    {
        const TypeInfo *currentType = descriptor->type;
        if (equal(&intType, currentType))
        {
            double value = getInt(&holder.pointer);
            {
                Owner temporary = { new Holder(value) };
                temporary.swap(holder);
            }
            descriptor = getDoubleDescriptor();
        }
    }

    {
        const TypeInfo *currentType = descriptor->type;
        if (equal(&boolType, currentType))
        {
            double value = getBool(&holder.pointer) ? 1 : 0;
            {
                Owner temporary = { new Holder(value) };
                temporary.swap(holder);
            }
            descriptor = getDoubleDescriptor();
        }
    }

    {
        const TypeInfo *currentType = descriptor->type;
        if (equal(&floatType, currentType))
        {
            double value = getFloat(&holder.pointer);
            {
                Owner temporary = { new Holder(value) };
                temporary.swap(holder);
            }
            descriptor = getDoubleDescriptor();
        }
    }

    return finish();
}
