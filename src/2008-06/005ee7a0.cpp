// from server: 100% by king_originala
// roc 2008-06 005ee7a0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee7a0
//
// 005ee7a0  6aff                 push -1
// 005ee7a2  6868e37c00           push 0x7ce368
// 005ee7a7  64a100000000         mov eax, dword ptr fs:[0]
// 005ee7ad  50                   push eax
// 005ee7ae  64892500000000       mov dword ptr fs:[0], esp
// 005ee7b5  51                   push ecx
// 005ee7b6  56                   push esi
// 005ee7b7  57                   push edi
// 005ee7b8  8bf1                 mov esi, ecx
// 005ee7ba  681cb19700           push 0x97b11c
// 005ee7bf  6820d65e00           push 0x5ed620
// 005ee7c4  89742410             mov dword ptr [esp + 0x10], esi
// 005ee7c8  e8638bf6ff           call 0x557330
// 005ee7cd  83c408               add esp, 8
// 005ee7d0  e8ebedffff           call 0x5ed5c0
// 005ee7d5  8bf8                 mov edi, eax
// 005ee7d7  e814e0faff           call 0x59c7f0
// 005ee7dc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee7e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee7e4  51                   push ecx
// 005ee7e5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ee7e9  52                   push edx
// 005ee7ea  51                   push ecx
// 005ee7eb  57                   push edi
// 005ee7ec  50                   push eax
// 005ee7ed  8bce                 mov ecx, esi
// 005ee7ef  e85cdef7ff           call 0x56c650
// 005ee7f4  897e18               mov dword ptr [esi + 0x18], edi
// 005ee7f7  6a0c                 push 0xc
// 005ee7f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ee801  c706d4018400         mov dword ptr [esi], 0x8401d4
// 005ee807  e814210b00           call 0x6a0920
// 005ee80c  83c404               add esp, 4
// 005ee80f  85c0                 test eax, eax
// 005ee811  7416                 je 0x5ee829
// 005ee813  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ee817  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee81b  c70004fe8300         mov dword ptr [eax], 0x83fe04
// 005ee821  895004               mov dword ptr [eax + 4], edx
// 005ee824  894808               mov dword ptr [eax + 8], ecx
// 005ee827  eb02                 jmp 0x5ee82b
// 005ee829  33c0                 xor eax, eax
// 005ee82b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ee82f  89461c               mov dword ptr [esi + 0x1c], eax
// 005ee832  5f                   pop edi
// 005ee833  8bc6                 mov eax, esi
// 005ee835  5e                   pop esi
// 005ee836  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee83d  83c410               add esp, 0x10
// 005ee840  c21400               ret 0x14

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
