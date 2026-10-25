// from server: 100% by king_originala
// roc 2008-06 005ee650  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee650
//
// 005ee650  6aff                 push -1
// 005ee652  6868e37c00           push 0x7ce368
// 005ee657  64a100000000         mov eax, dword ptr fs:[0]
// 005ee65d  50                   push eax
// 005ee65e  64892500000000       mov dword ptr fs:[0], esp
// 005ee665  51                   push ecx
// 005ee666  56                   push esi
// 005ee667  57                   push edi
// 005ee668  8bf1                 mov esi, ecx
// 005ee66a  6820b19700           push 0x97b120
// 005ee66f  6890d65e00           push 0x5ed690
// 005ee674  89742410             mov dword ptr [esp + 0x10], esi
// 005ee678  e8b38cf6ff           call 0x557330
// 005ee67d  83c408               add esp, 8
// 005ee680  e8abefffff           call 0x5ed630
// 005ee685  8bf8                 mov edi, eax
// 005ee687  e864e1faff           call 0x59c7f0
// 005ee68c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee690  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee694  51                   push ecx
// 005ee695  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ee699  52                   push edx
// 005ee69a  51                   push ecx
// 005ee69b  57                   push edi
// 005ee69c  50                   push eax
// 005ee69d  8bce                 mov ecx, esi
// 005ee69f  e8acdff7ff           call 0x56c650
// 005ee6a4  897e18               mov dword ptr [esi + 0x18], edi
// 005ee6a7  6a0c                 push 0xc
// 005ee6a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ee6b1  c70654018400         mov dword ptr [esi], 0x840154
// 005ee6b7  e864220b00           call 0x6a0920
// 005ee6bc  83c404               add esp, 4
// 005ee6bf  85c0                 test eax, eax
// 005ee6c1  7416                 je 0x5ee6d9
// 005ee6c3  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ee6c7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee6cb  c700dcfd8300         mov dword ptr [eax], 0x83fddc
// 005ee6d1  895004               mov dword ptr [eax + 4], edx
// 005ee6d4  894808               mov dword ptr [eax + 8], ecx
// 005ee6d7  eb02                 jmp 0x5ee6db
// 005ee6d9  33c0                 xor eax, eax
// 005ee6db  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ee6df  89461c               mov dword ptr [esi + 0x1c], eax
// 005ee6e2  5f                   pop edi
// 005ee6e3  8bc6                 mov eax, esi
// 005ee6e5  5e                   pop esi
// 005ee6e6  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee6ed  83c410               add esp, 0x10
// 005ee6f0  c21400               ret 0x14

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
