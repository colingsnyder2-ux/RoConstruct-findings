// from server: 100% by king_originala
// roc 2008-06 005ee8c0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee8c0
//
// 005ee8c0  6aff                 push -1
// 005ee8c2  6868e37c00           push 0x7ce368
// 005ee8c7  64a100000000         mov eax, dword ptr fs:[0]
// 005ee8cd  50                   push eax
// 005ee8ce  64892500000000       mov dword ptr fs:[0], esp
// 005ee8d5  51                   push ecx
// 005ee8d6  56                   push esi
// 005ee8d7  57                   push edi
// 005ee8d8  8bf1                 mov esi, ecx
// 005ee8da  6820b19700           push 0x97b120
// 005ee8df  6890d65e00           push 0x5ed690
// 005ee8e4  89742410             mov dword ptr [esp + 0x10], esi
// 005ee8e8  e8438af6ff           call 0x557330
// 005ee8ed  83c408               add esp, 8
// 005ee8f0  e83bedffff           call 0x5ed630
// 005ee8f5  8bf8                 mov edi, eax
// 005ee8f7  e8f4defaff           call 0x59c7f0
// 005ee8fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee900  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee904  51                   push ecx
// 005ee905  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ee909  52                   push edx
// 005ee90a  51                   push ecx
// 005ee90b  57                   push edi
// 005ee90c  50                   push eax
// 005ee90d  8bce                 mov ecx, esi
// 005ee90f  e83cddf7ff           call 0x56c650
// 005ee914  897e18               mov dword ptr [esi + 0x18], edi
// 005ee917  6a0c                 push 0xc
// 005ee919  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ee921  c70624028400         mov dword ptr [esi], 0x840224
// 005ee927  e8f41f0b00           call 0x6a0920
// 005ee92c  83c404               add esp, 4
// 005ee92f  85c0                 test eax, eax
// 005ee931  7416                 je 0x5ee949
// 005ee933  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ee937  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee93b  c70018fe8300         mov dword ptr [eax], 0x83fe18
// 005ee941  895004               mov dword ptr [eax + 4], edx
// 005ee944  894808               mov dword ptr [eax + 8], ecx
// 005ee947  eb02                 jmp 0x5ee94b
// 005ee949  33c0                 xor eax, eax
// 005ee94b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ee94f  89461c               mov dword ptr [esi + 0x1c], eax
// 005ee952  5f                   pop edi
// 005ee953  8bc6                 mov eax, esi
// 005ee955  5e                   pop esi
// 005ee956  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee95d  83c410               add esp, 0x10
// 005ee960  c21400               ret 0x14

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
