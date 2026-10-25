// from server: 100% by king_originala
// roc 2008-06 0060c180  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c180
//
// 0060c180  6aff                 push -1
// 0060c182  68a30f7c00           push 0x7c0fa3
// 0060c187  64a100000000         mov eax, dword ptr fs:[0]
// 0060c18d  50                   push eax
// 0060c18e  64892500000000       mov dword ptr fs:[0], esp
// 0060c195  51                   push ecx
// 0060c196  56                   push esi
// 0060c197  57                   push edi
// 0060c198  8bf1                 mov esi, ecx
// 0060c19a  68a8bd9700           push 0x97bda8
// 0060c19f  6840b86000           push 0x60b840
// 0060c1a4  89742410             mov dword ptr [esp + 0x10], esi
// 0060c1a8  e883b1f4ff           call 0x557330
// 0060c1ad  83c408               add esp, 8
// 0060c1b0  e82bf6ffff           call 0x60b7e0
// 0060c1b5  8bf8                 mov edi, eax
// 0060c1b7  e88447fbff           call 0x5c0940
// 0060c1bc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0060c1c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060c1c4  51                   push ecx
// 0060c1c5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060c1c9  52                   push edx
// 0060c1ca  51                   push ecx
// 0060c1cb  57                   push edi
// 0060c1cc  50                   push eax
// 0060c1cd  8bce                 mov ecx, esi
// 0060c1cf  e87c04f6ff           call 0x56c650
// 0060c1d4  897e18               mov dword ptr [esi + 0x18], edi
// 0060c1d7  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060c1db  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060c1df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060c1e3  52                   push edx
// 0060c1e4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0060c1e8  50                   push eax
// 0060c1e9  51                   push ecx
// 0060c1ea  52                   push edx
// 0060c1eb  8d442444             lea eax, [esp + 0x44]
// 0060c1ef  50                   push eax
// 0060c1f0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060c1f8  c7067c328400         mov dword ptr [esi], 0x84327c
// 0060c1fe  e81de8ffff           call 0x60aa20
// 0060c203  8b08                 mov ecx, dword ptr [eax]
// 0060c205  c70000000000         mov dword ptr [eax], 0
// 0060c20b  83c414               add esp, 0x14
// 0060c20e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0060c211  8b442434             mov eax, dword ptr [esp + 0x34]
// 0060c215  c644241401           mov byte ptr [esp + 0x14], 1
// 0060c21a  85c0                 test eax, eax
// 0060c21c  7409                 je 0x60c227
// 0060c21e  50                   push eax
// 0060c21f  e856440900           call 0x6a067a
// 0060c224  83c404               add esp, 4
// 0060c227  68a8bd9700           push 0x97bda8
// 0060c22c  6840b86000           push 0x60b840
// 0060c231  e8fab0f4ff           call 0x557330
// 0060c236  83c408               add esp, 8
// 0060c239  e8a2f5ffff           call 0x60b7e0
// 0060c23e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060c242  894620               mov dword ptr [esi + 0x20], eax
// 0060c245  5f                   pop edi
// 0060c246  8bc6                 mov eax, esi
// 0060c248  5e                   pop esi
// 0060c249  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c250  83c410               add esp, 0x10
// 0060c253  c21c00               ret 0x1c

void __cdecl registerEnum(void (__cdecl *)(), void *);
void *__cdecl getEnum();
void *__cdecl getSettings();
extern "C" void __cdecl destroyObject(void *);

struct Owner {
    void *pointer;

    Owner(void *);
    ~Owner();
    void *release();
};

inline Owner::Owner(void *value) : pointer(value)
{
}

inline Owner::~Owner()
{
    if (pointer)
        destroyObject(pointer);
}

inline void *Owner::release()
{
    void *result = pointer;
    pointer = 0;
    return result;
}

Owner __cdecl makeAccessor(
    unsigned long, unsigned long, unsigned long, unsigned long);

struct Descriptor {
    virtual ~Descriptor();
    unsigned long data[5];

    Descriptor(void *, void *, const char *, const char *, unsigned long);
};

struct EnumDescriptor : Descriptor {
    void *enumType;

    EnumDescriptor(void *, void *, const char *, const char *, unsigned long);
    ~EnumDescriptor();
};

inline EnumDescriptor::EnumDescriptor(
    void *settings, void *type, const char *name,
    const char *category, unsigned long flags)
    : Descriptor(settings, type, name, category, flags),
      enumType(type)
{
}

struct S : EnumDescriptor {
    Owner accessor;
    void *cachedEnum;

    S(const char *, const char *,
      unsigned long, unsigned long, unsigned long, unsigned long,
      unsigned long);
    virtual ~S();
};

S::S(const char *name, const char *category,
     unsigned long a, unsigned long b,
     unsigned long c, unsigned long d, unsigned long flags)
    : EnumDescriptor(
          getSettings(),
          (registerEnum(
               reinterpret_cast<void (__cdecl *)()>(0x60b840),
               reinterpret_cast<void *>(0x97bda8)),
           getEnum()),
          name, category, flags),
      accessor(makeAccessor(a, b, c, d).release())
{
    registerEnum(
        reinterpret_cast<void (__cdecl *)()>(0x60b840),
        reinterpret_cast<void *>(0x97bda8));
    cachedEnum = getEnum();
}
