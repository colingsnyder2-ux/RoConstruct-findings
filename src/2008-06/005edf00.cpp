// from server: 100% by king_originala
// roc 2008-06 005edf00  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005edf00
//
// 005edf00  6aff                 push -1
// 005edf02  6868e37c00           push 0x7ce368
// 005edf07  64a100000000         mov eax, dword ptr fs:[0]
// 005edf0d  50                   push eax
// 005edf0e  64892500000000       mov dword ptr fs:[0], esp
// 005edf15  51                   push ecx
// 005edf16  56                   push esi
// 005edf17  57                   push edi
// 005edf18  8bf1                 mov esi, ecx
// 005edf1a  6820b19700           push 0x97b120
// 005edf1f  6890d65e00           push 0x5ed690
// 005edf24  89742410             mov dword ptr [esp + 0x10], esi
// 005edf28  e80394f6ff           call 0x557330
// 005edf2d  83c408               add esp, 8
// 005edf30  e8fbf6ffff           call 0x5ed630
// 005edf35  8bf8                 mov edi, eax
// 005edf37  e8b4e8faff           call 0x59c7f0
// 005edf3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005edf40  8b542420             mov edx, dword ptr [esp + 0x20]
// 005edf44  51                   push ecx
// 005edf45  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005edf49  52                   push edx
// 005edf4a  51                   push ecx
// 005edf4b  57                   push edi
// 005edf4c  50                   push eax
// 005edf4d  8bce                 mov ecx, esi
// 005edf4f  e8fce6f7ff           call 0x56c650
// 005edf54  897e18               mov dword ptr [esi + 0x18], edi
// 005edf57  6a0c                 push 0xc
// 005edf59  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005edf61  c706b4ff8300         mov dword ptr [esi], 0x83ffb4
// 005edf67  e8b4290b00           call 0x6a0920
// 005edf6c  83c404               add esp, 4
// 005edf6f  85c0                 test eax, eax
// 005edf71  7416                 je 0x5edf89
// 005edf73  8b542424             mov edx, dword ptr [esp + 0x24]
// 005edf77  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005edf7b  c70064fd8300         mov dword ptr [eax], 0x83fd64
// 005edf81  895004               mov dword ptr [eax + 4], edx
// 005edf84  894808               mov dword ptr [eax + 8], ecx
// 005edf87  eb02                 jmp 0x5edf8b
// 005edf89  33c0                 xor eax, eax
// 005edf8b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005edf8f  89461c               mov dword ptr [esi + 0x1c], eax
// 005edf92  5f                   pop edi
// 005edf93  8bc6                 mov eax, esi
// 005edf95  5e                   pop esi
// 005edf96  64890d00000000       mov dword ptr fs:[0], ecx
// 005edf9d  83c410               add esp, 0x10
// 005edfa0  c21400               ret 0x14

extern unsigned char registrationState;
extern void __cdecl initialize();
extern void __cdecl registerInitializer(void (__cdecl*)(), void*);
extern void* __cdecl getEnumTable();
extern void* __cdecl getClassDescriptor();

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Base {
    unsigned char storage[20];

    Base(void*, void*, const char*, unsigned int, unsigned int);
    virtual ~Base();
};

struct EnumBase : Base {
    void* enumeration;

    EnumBase(void*, void*, const char*, unsigned int, unsigned int);
};

inline EnumBase::EnumBase(void* owner, void* table, const char* name,
                         unsigned int flags, unsigned int category)
    : Base(owner, table, name, flags, category), enumeration(table)
{
}

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();

    unsigned int getter;
    unsigned int setter;

    Setter(unsigned int, unsigned int);
};

inline Setter::Setter(unsigned int get, unsigned int set)
    : getter(get), setter(set)
{
}

struct Descriptor : EnumBase {
    Setter* access;

    virtual ~Descriptor();
    Descriptor(const char*, unsigned int, unsigned int,
               unsigned int, unsigned int);
};

Descriptor::Descriptor(const char* name, unsigned int flags,
                       unsigned int getter, unsigned int setter,
                       unsigned int category)
    : EnumBase(getClassDescriptor(),
               (registerInitializer(initialize, &registrationState),
                getEnumTable()),
               name, flags, category)
{
    access = new Setter(getter, setter);
}
