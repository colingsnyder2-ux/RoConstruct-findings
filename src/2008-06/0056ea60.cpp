// from server: 80% by colin
// roc 2008-06 0056ea60  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056ea60
//
// 0056ea60  83ec0c               sub esp, 0xc
// 0056ea63  53                   push ebx
// 0056ea64  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056ea6a  56                   push esi
// 0056ea6b  57                   push edi
// 0056ea6c  8bf9                 mov edi, ecx
// 0056ea6e  8b07                 mov eax, dword ptr [edi]
// 0056ea70  8b4008               mov eax, dword ptr [eax + 8]
// 0056ea73  50                   push eax
// 0056ea74  b9dcbe9200           mov ecx, 0x92bedc
// 0056ea79  ffd3                 call ebx
// 0056ea7b  84c0                 test al, al
// 0056ea7d  7458                 je 0x56ead7
// 0056ea7f  8d7704               lea esi, [edi + 4]
// 0056ea82  56                   push esi
// 0056ea83  e86875eaff           call 0x415ff0
// 0056ea88  d95c2414             fstp dword ptr [esp + 0x14]
// 0056ea8c  83c404               add esp, 4
// 0056ea8f  d9442410             fld dword ptr [esp + 0x10]
// 0056ea93  db5c240c             fistp dword ptr [esp + 0xc]
// 0056ea97  6a08                 push 8
// 0056ea99  e8821e1300           call 0x6a0920
// 0056ea9e  83c404               add esp, 4
// 0056eaa1  85c0                 test eax, eax
// 0056eaa3  740f                 je 0x56eab4
// 0056eaa5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056eaa9  c700cc068100         mov dword ptr [eax], 0x8106cc
// 0056eaaf  894804               mov dword ptr [eax + 4], ecx
// 0056eab2  eb02                 jmp 0x56eab6
// 0056eab4  33c0                 xor eax, eax
// 0056eab6  8d542410             lea edx, [esp + 0x10]
// 0056eaba  8bc8                 mov ecx, eax
// 0056eabc  3bd6                 cmp edx, esi
// 0056eabe  7404                 je 0x56eac4
// 0056eac0  8b0e                 mov ecx, dword ptr [esi]
// 0056eac2  8906                 mov dword ptr [esi], eax
// 0056eac4  85c9                 test ecx, ecx
// 0056eac6  7408                 je 0x56ead0
// 0056eac8  8b01                 mov eax, dword ptr [ecx]
// 0056eaca  8b10                 mov edx, dword ptr [eax]
// 0056eacc  6a01                 push 1
// 0056eace  ffd2                 call edx
// 0056ead0  e8ebe0ffff           call 0x56cbc0
// 0056ead5  8907                 mov dword ptr [edi], eax
// 0056ead7  8b07                 mov eax, dword ptr [edi]
// 0056ead9  8b4008               mov eax, dword ptr [eax + 8]
// 0056eadc  50                   push eax
// 0056eadd  b9e8be9200           mov ecx, 0x92bee8
// 0056eae2  ffd3                 call ebx
// 0056eae4  84c0                 test al, al
// 0056eae6  7458                 je 0x56eb40
// 0056eae8  8d7704               lea esi, [edi + 4]
// 0056eaeb  56                   push esi
// 0056eaec  e88f75eaff           call 0x416080
// 0056eaf1  dd5c2414             fstp qword ptr [esp + 0x14]
// 0056eaf5  83c404               add esp, 4
// 0056eaf8  dd442410             fld qword ptr [esp + 0x10]
// 0056eafc  db5c240c             fistp dword ptr [esp + 0xc]
// 0056eb00  6a08                 push 8
// 0056eb02  e8191e1300           call 0x6a0920
// 0056eb07  83c404               add esp, 4
// 0056eb0a  85c0                 test eax, eax
// 0056eb0c  740f                 je 0x56eb1d
// 0056eb0e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056eb12  c700cc068100         mov dword ptr [eax], 0x8106cc
// 0056eb18  894804               mov dword ptr [eax + 4], ecx
// 0056eb1b  eb02                 jmp 0x56eb1f
// 0056eb1d  33c0                 xor eax, eax
// 0056eb1f  8d542410             lea edx, [esp + 0x10]
// 0056eb23  8bc8                 mov ecx, eax
// 0056eb25  3bd6                 cmp edx, esi
// 0056eb27  7404                 je 0x56eb2d
// 0056eb29  8b0e                 mov ecx, dword ptr [esi]
// 0056eb2b  8906                 mov dword ptr [esi], eax
// 0056eb2d  85c9                 test ecx, ecx
// 0056eb2f  7408                 je 0x56eb39
// 0056eb31  8b01                 mov eax, dword ptr [ecx]
// 0056eb33  8b10                 mov edx, dword ptr [eax]
// 0056eb35  6a01                 push 1
// 0056eb37  ffd2                 call edx
// 0056eb39  e882e0ffff           call 0x56cbc0
// 0056eb3e  8907                 mov dword ptr [edi], eax
// 0056eb40  8b07                 mov eax, dword ptr [edi]
// 0056eb42  8b4008               mov eax, dword ptr [eax + 8]
// 0056eb45  50                   push eax
// 0056eb46  b944969200           mov ecx, 0x929644
// 0056eb4b  ffd3                 call ebx
// 0056eb4d  84c0                 test al, al
// 0056eb4f  744c                 je 0x56eb9d
// 0056eb51  8d7704               lea esi, [edi + 4]
// 0056eb54  56                   push esi
// 0056eb55  e80674eaff           call 0x415f60
// 0056eb5a  33db                 xor ebx, ebx
// 0056eb5c  84c0                 test al, al
// 0056eb5e  6a08                 push 8
// 0056eb60  0f95c3               setne bl
// 0056eb63  e8b81d1300           call 0x6a0920
// 0056eb68  83c408               add esp, 8
// 0056eb6b  85c0                 test eax, eax
// 0056eb6d  740b                 je 0x56eb7a
// 0056eb6f  c700cc068100         mov dword ptr [eax], 0x8106cc
// 0056eb75  895804               mov dword ptr [eax + 4], ebx
// 0056eb78  eb02                 jmp 0x56eb7c
// 0056eb7a  33c0                 xor eax, eax
// 0056eb7c  8d542410             lea edx, [esp + 0x10]
// 0056eb80  8bc8                 mov ecx, eax
// 0056eb82  3bd6                 cmp edx, esi
// 0056eb84  7404                 je 0x56eb8a
// 0056eb86  8b0e                 mov ecx, dword ptr [esi]
// 0056eb88  8906                 mov dword ptr [esi], eax
// 0056eb8a  85c9                 test ecx, ecx
// 0056eb8c  7408                 je 0x56eb96
// 0056eb8e  8b01                 mov eax, dword ptr [ecx]
// 0056eb90  8b10                 mov edx, dword ptr [eax]
// 0056eb92  6a01                 push 1
// 0056eb94  ffd2                 call edx
// 0056eb96  e825e0ffff           call 0x56cbc0
// 0056eb9b  8907                 mov dword ptr [edi], eax
// 0056eb9d  8bcf                 mov ecx, edi
// 0056eb9f  5f                   pop edi
// 0056eba0  5e                   pop esi
// 0056eba1  5b                   pop ebx
// 0056eba2  83c40c               add esp, 0xc
// 0056eba5  e966e8ffff           jmp 0x56d410

struct TypeInfo
{
    void* field0;
    void* field4;
    const TypeInfo* field8;
};

struct Placeholder
{
    virtual ~Placeholder();
    virtual const TypeInfo& type() const;
};

struct Any
{
    Placeholder* content;
};

struct IntHolder
{
    void* vtable;
    int value;
};

extern bool (__thiscall *g_802878)(const TypeInfo*, const TypeInfo*);
extern TypeInfo g_92bedc;
extern TypeInfo g_92bee8;
extern TypeInfo g_929644;
extern char g_8106cc;

extern TypeInfo* __cdecl func_0056cbc0();
extern void* __cdecl func_006a0920(unsigned int);
extern float __cdecl func_00415ff0(Any*);
extern double __cdecl func_00416080(Any*);
extern bool __cdecl func_00415f60(Any*);

struct PropDesc
{
    TypeInfo* descriptor;
    Any value;

    void setValue();
    void finish();
};

void PropDesc::setValue()
{
    bool (__thiscall *typeCheck)(const TypeInfo*, const TypeInfo*) = g_802878;

    const TypeInfo *typeInfo = descriptor->field8;
    if (typeCheck(&g_92bedc, typeInfo))
    {
        volatile float f = func_00415ff0(&value);
        volatile int iv = (int)f;
        IntHolder* p = (IntHolder*)func_006a0920(8);
        if (p)
        {
            p->vtable = &g_8106cc;
            p->value = iv;
        }
        else
            p = 0;

        Any temporary;
        temporary.content = (Placeholder*)p;
        Placeholder* old = temporary.content;
        if (&temporary != &value)
        {
            old = value.content;
            value.content = temporary.content;
        }
        if (old)
            delete old;
        descriptor = func_0056cbc0();
    }

    typeInfo = descriptor->field8;
    if (typeCheck(&g_92bee8, typeInfo))
    {
        volatile double d = func_00416080(&value);
        volatile int iv = (int)d;
        IntHolder* p = (IntHolder*)func_006a0920(8);
        if (p)
        {
            p->vtable = &g_8106cc;
            p->value = iv;
        }
        else
            p = 0;

        Any temporary;
        temporary.content = (Placeholder*)p;
        Placeholder* old = temporary.content;
        if (&temporary != &value)
        {
            old = value.content;
            value.content = temporary.content;
        }
        if (old)
            delete old;
        descriptor = func_0056cbc0();
    }

    typeInfo = descriptor->field8;
    if (typeCheck(&g_929644, typeInfo))
    {
        int iv = func_00415f60(&value) ? 1 : 0;
        IntHolder* p = (IntHolder*)func_006a0920(8);
        if (p)
        {
            p->vtable = &g_8106cc;
            p->value = iv;
        }
        else
            p = 0;

        Any temporary;
        temporary.content = (Placeholder*)p;
        Placeholder* old = temporary.content;
        if (&temporary != &value)
        {
            old = value.content;
            value.content = temporary.content;
        }
        if (old)
            delete old;
        descriptor = func_0056cbc0();
    }

    finish();
}
