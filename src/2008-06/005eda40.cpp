// from server: 100% by king_originala
// roc 2008-06 005eda40  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eda40
//
// 005eda40  6aff                 push -1
// 005eda42  6868e37c00           push 0x7ce368
// 005eda47  64a100000000         mov eax, dword ptr fs:[0]
// 005eda4d  50                   push eax
// 005eda4e  64892500000000       mov dword ptr fs:[0], esp
// 005eda55  51                   push ecx
// 005eda56  56                   push esi
// 005eda57  57                   push edi
// 005eda58  8bf1                 mov esi, ecx
// 005eda5a  6820b19700           push 0x97b120
// 005eda5f  6890d65e00           push 0x5ed690
// 005eda64  89742410             mov dword ptr [esp + 0x10], esi
// 005eda68  e8c398f6ff           call 0x557330
// 005eda6d  83c408               add esp, 8
// 005eda70  e8bbfbffff           call 0x5ed630
// 005eda75  8bf8                 mov edi, eax
// 005eda77  e874edfaff           call 0x59c7f0
// 005eda7c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eda80  8b542420             mov edx, dword ptr [esp + 0x20]
// 005eda84  51                   push ecx
// 005eda85  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005eda89  52                   push edx
// 005eda8a  51                   push ecx
// 005eda8b  57                   push edi
// 005eda8c  50                   push eax
// 005eda8d  8bce                 mov ecx, esi
// 005eda8f  e8bcebf7ff           call 0x56c650
// 005eda94  897e18               mov dword ptr [esi + 0x18], edi
// 005eda97  6a0c                 push 0xc
// 005eda99  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005edaa1  c706e4fe8300         mov dword ptr [esi], 0x83fee4
// 005edaa7  e8742e0b00           call 0x6a0920
// 005edaac  83c404               add esp, 4
// 005edaaf  85c0                 test eax, eax
// 005edab1  7416                 je 0x5edac9
// 005edab3  8b542424             mov edx, dword ptr [esp + 0x24]
// 005edab7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005edabb  c70028fd8300         mov dword ptr [eax], 0x83fd28
// 005edac1  895004               mov dword ptr [eax + 4], edx
// 005edac4  894808               mov dword ptr [eax + 8], ecx
// 005edac7  eb02                 jmp 0x5edacb
// 005edac9  33c0                 xor eax, eax
// 005edacb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005edacf  89461c               mov dword ptr [esi + 0x1c], eax
// 005edad2  5f                   pop edi
// 005edad3  8bc6                 mov eax, esi
// 005edad5  5e                   pop esi
// 005edad6  64890d00000000       mov dword ptr fs:[0], ecx
// 005edadd  83c410               add esp, 0x10
// 005edae0  c21400               ret 0x14

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
