// from server: 100% by king_originala
// roc 2008-06 005ee4a0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee4a0
//
// 005ee4a0  6aff                 push -1
// 005ee4a2  6868e37c00           push 0x7ce368
// 005ee4a7  64a100000000         mov eax, dword ptr fs:[0]
// 005ee4ad  50                   push eax
// 005ee4ae  64892500000000       mov dword ptr fs:[0], esp
// 005ee4b5  51                   push ecx
// 005ee4b6  56                   push esi
// 005ee4b7  57                   push edi
// 005ee4b8  8bf1                 mov esi, ecx
// 005ee4ba  681cb19700           push 0x97b11c
// 005ee4bf  6820d65e00           push 0x5ed620
// 005ee4c4  89742410             mov dword ptr [esp + 0x10], esi
// 005ee4c8  e8638ef6ff           call 0x557330
// 005ee4cd  83c408               add esp, 8
// 005ee4d0  e8ebf0ffff           call 0x5ed5c0
// 005ee4d5  8bf8                 mov edi, eax
// 005ee4d7  e814e3faff           call 0x59c7f0
// 005ee4dc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee4e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee4e4  51                   push ecx
// 005ee4e5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ee4e9  52                   push edx
// 005ee4ea  51                   push ecx
// 005ee4eb  57                   push edi
// 005ee4ec  50                   push eax
// 005ee4ed  8bce                 mov ecx, esi
// 005ee4ef  e85ce1f7ff           call 0x56c650
// 005ee4f4  897e18               mov dword ptr [esi + 0x18], edi
// 005ee4f7  6a0c                 push 0xc
// 005ee4f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ee501  c70604018400         mov dword ptr [esi], 0x840104
// 005ee507  e814240b00           call 0x6a0920
// 005ee50c  83c404               add esp, 4
// 005ee50f  85c0                 test eax, eax
// 005ee511  7416                 je 0x5ee529
// 005ee513  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ee517  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee51b  c700c8fd8300         mov dword ptr [eax], 0x83fdc8
// 005ee521  895004               mov dword ptr [eax + 4], edx
// 005ee524  894808               mov dword ptr [eax + 8], ecx
// 005ee527  eb02                 jmp 0x5ee52b
// 005ee529  33c0                 xor eax, eax
// 005ee52b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ee52f  89461c               mov dword ptr [esi + 0x1c], eax
// 005ee532  5f                   pop edi
// 005ee533  8bc6                 mov eax, esi
// 005ee535  5e                   pop esi
// 005ee536  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee53d  83c410               add esp, 0x10
// 005ee540  c21400               ret 0x14

typedef unsigned int size_t;

void* __cdecl operator new(size_t);

extern void __cdecl registerDescriptor(void (*)(), void*);
extern void __cdecl descriptorCallback();
extern void* __cdecl enumDescriptor();
extern void* __cdecl partDescriptor();

struct Base {
    unsigned int vtable;
    unsigned int data[5];

    Base(void*, void*, unsigned int, unsigned int, unsigned int);
    ~Base();
};

struct EnumBase : Base {
    void* descriptor;

    EnumBase(void*, void*, unsigned int, unsigned int, unsigned int);
};

inline EnumBase::EnumBase(void* owner, void* type,
                          unsigned int a, unsigned int b,
                          unsigned int flags)
    : Base(owner, type, a, b, flags), descriptor(type)
{
}

struct Binding {
    unsigned int vtable;
    unsigned int getter;
    unsigned int setter;

    Binding(unsigned int, unsigned int);
};

inline Binding::Binding(unsigned int g, unsigned int s)
    : vtable(0x83fd50), getter(g), setter(s)
{
}

struct S : EnumBase {
    Binding* binding;

    S(unsigned int, unsigned int, unsigned int,
      unsigned int, unsigned int);
};

S::S(unsigned int a, unsigned int b, unsigned int getter,
     unsigned int setter, unsigned int flags)
    : EnumBase(partDescriptor(),
               (registerDescriptor(descriptorCallback,
                                   reinterpret_cast<void*>(0x97b11c)),
                enumDescriptor()),
               a, b, flags)
{
    vtable = 0x83ff64;
    binding = new Binding(getter, setter);
}
