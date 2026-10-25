// from server: 100% by king_originala
// roc 2008-06 005ee120  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ee120
//
// 005ee120  6aff                 push -1
// 005ee122  6868e37c00           push 0x7ce368
// 005ee127  64a100000000         mov eax, dword ptr fs:[0]
// 005ee12d  50                   push eax
// 005ee12e  64892500000000       mov dword ptr fs:[0], esp
// 005ee135  51                   push ecx
// 005ee136  56                   push esi
// 005ee137  57                   push edi
// 005ee138  8bf1                 mov esi, ecx
// 005ee13a  681cb19700           push 0x97b11c
// 005ee13f  6820d65e00           push 0x5ed620
// 005ee144  89742410             mov dword ptr [esp + 0x10], esi
// 005ee148  e8e391f6ff           call 0x557330
// 005ee14d  83c408               add esp, 8
// 005ee150  e86bf4ffff           call 0x5ed5c0
// 005ee155  8bf8                 mov edi, eax
// 005ee157  e894e6faff           call 0x59c7f0
// 005ee15c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee160  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ee164  51                   push ecx
// 005ee165  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ee169  52                   push edx
// 005ee16a  51                   push ecx
// 005ee16b  57                   push edi
// 005ee16c  50                   push eax
// 005ee16d  8bce                 mov ecx, esi
// 005ee16f  e8dce4f7ff           call 0x56c650
// 005ee174  897e18               mov dword ptr [esi + 0x18], edi
// 005ee177  6a0c                 push 0xc
// 005ee179  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ee181  c70634008400         mov dword ptr [esi], 0x840034
// 005ee187  e894270b00           call 0x6a0920
// 005ee18c  83c404               add esp, 4
// 005ee18f  85c0                 test eax, eax
// 005ee191  7416                 je 0x5ee1a9
// 005ee193  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ee197  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee19b  c7008cfd8300         mov dword ptr [eax], 0x83fd8c
// 005ee1a1  895004               mov dword ptr [eax + 4], edx
// 005ee1a4  894808               mov dword ptr [eax + 8], ecx
// 005ee1a7  eb02                 jmp 0x5ee1ab
// 005ee1a9  33c0                 xor eax, eax
// 005ee1ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ee1af  89461c               mov dword ptr [esi + 0x1c], eax
// 005ee1b2  5f                   pop edi
// 005ee1b3  8bc6                 mov eax, esi
// 005ee1b5  5e                   pop esi
// 005ee1b6  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee1bd  83c410               add esp, 0x10
// 005ee1c0  c21400               ret 0x14

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
