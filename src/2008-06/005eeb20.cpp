// from server: 100% by king_originala
// roc 2008-06 005eeb20  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eeb20
//
// 005eeb20  6aff                 push -1
// 005eeb22  6868e37c00           push 0x7ce368
// 005eeb27  64a100000000         mov eax, dword ptr fs:[0]
// 005eeb2d  50                   push eax
// 005eeb2e  64892500000000       mov dword ptr fs:[0], esp
// 005eeb35  51                   push ecx
// 005eeb36  56                   push esi
// 005eeb37  57                   push edi
// 005eeb38  8bf1                 mov esi, ecx
// 005eeb3a  6820b19700           push 0x97b120
// 005eeb3f  6890d65e00           push 0x5ed690
// 005eeb44  89742410             mov dword ptr [esp + 0x10], esi
// 005eeb48  e8e387f6ff           call 0x557330
// 005eeb4d  83c408               add esp, 8
// 005eeb50  e8dbeaffff           call 0x5ed630
// 005eeb55  8bf8                 mov edi, eax
// 005eeb57  e894dcfaff           call 0x59c7f0
// 005eeb5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eeb60  8b542420             mov edx, dword ptr [esp + 0x20]
// 005eeb64  51                   push ecx
// 005eeb65  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005eeb69  52                   push edx
// 005eeb6a  51                   push ecx
// 005eeb6b  57                   push edi
// 005eeb6c  50                   push eax
// 005eeb6d  8bce                 mov ecx, esi
// 005eeb6f  e8dcdaf7ff           call 0x56c650
// 005eeb74  897e18               mov dword ptr [esi + 0x18], edi
// 005eeb77  6a0c                 push 0xc
// 005eeb79  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005eeb81  c706f4028400         mov dword ptr [esi], 0x8402f4
// 005eeb87  e8941d0b00           call 0x6a0920
// 005eeb8c  83c404               add esp, 4
// 005eeb8f  85c0                 test eax, eax
// 005eeb91  7416                 je 0x5eeba9
// 005eeb93  8b542424             mov edx, dword ptr [esp + 0x24]
// 005eeb97  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005eeb9b  c70054fe8300         mov dword ptr [eax], 0x83fe54
// 005eeba1  895004               mov dword ptr [eax + 4], edx
// 005eeba4  894808               mov dword ptr [eax + 8], ecx
// 005eeba7  eb02                 jmp 0x5eebab
// 005eeba9  33c0                 xor eax, eax
// 005eebab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005eebaf  89461c               mov dword ptr [esi + 0x1c], eax
// 005eebb2  5f                   pop edi
// 005eebb3  8bc6                 mov eax, esi
// 005eebb5  5e                   pop esi
// 005eebb6  64890d00000000       mov dword ptr fs:[0], ecx
// 005eebbd  83c410               add esp, 0x10
// 005eebc0  c21400               ret 0x14

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
