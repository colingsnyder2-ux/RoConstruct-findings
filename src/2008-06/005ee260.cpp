// from server: 100% by king_originala
// roc 2008-06 005ee260  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee260
//
// 005ee260  6aff                 push -1
// 005ee262  6868e37c00           push 0x7ce368
// 005ee267  64a100000000         mov eax, dword ptr fs:[0]
// 005ee26d  50                   push eax
// 005ee26e  64892500000000       mov dword ptr fs:[0], esp
// 005ee275  51                   push ecx
// 005ee276  56                   push esi
// 005ee277  57                   push edi
// 005ee278  8bf1                 mov esi, ecx
// 005ee27a  6820b19700           push 0x97b120
// 005ee27f  6890d65e00           push 0x5ed690
// 005ee284  89742410             mov dword ptr [esp + 0x10], esi
// 005ee288  e8a390f6ff           call 0x557330
// 005ee28d  83c408               add esp, 8
// 005ee290  e89bf3ffff           call 0x5ed630
// 005ee295  8bf8                 mov edi, eax
// 005ee297  e854e5faff           call 0x59c7f0
// 005ee29c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee2a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee2a4  51                   push ecx
// 005ee2a5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ee2a9  52                   push edx
// 005ee2aa  51                   push ecx
// 005ee2ab  57                   push edi
// 005ee2ac  50                   push eax
// 005ee2ad  8bce                 mov ecx, esi
// 005ee2af  e89ce3f7ff           call 0x56c650
// 005ee2b4  897e18               mov dword ptr [esi + 0x18], edi
// 005ee2b7  6a0c                 push 0xc
// 005ee2b9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ee2c1  c70684008400         mov dword ptr [esi], 0x840084
// 005ee2c7  e854260b00           call 0x6a0920
// 005ee2cc  83c404               add esp, 4
// 005ee2cf  85c0                 test eax, eax
// 005ee2d1  7416                 je 0x5ee2e9
// 005ee2d3  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ee2d7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee2db  c700a0fd8300         mov dword ptr [eax], 0x83fda0
// 005ee2e1  895004               mov dword ptr [eax + 4], edx
// 005ee2e4  894808               mov dword ptr [eax + 8], ecx
// 005ee2e7  eb02                 jmp 0x5ee2eb
// 005ee2e9  33c0                 xor eax, eax
// 005ee2eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ee2ef  89461c               mov dword ptr [esi + 0x1c], eax
// 005ee2f2  5f                   pop edi
// 005ee2f3  8bc6                 mov eax, esi
// 005ee2f5  5e                   pop esi
// 005ee2f6  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee2fd  83c410               add esp, 0x10
// 005ee300  c21400               ret 0x14

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
