// from server: 100% by king_originala
// roc 2008-06 005eea70  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eea70
//
// 005eea70  6aff                 push -1
// 005eea72  6868e37c00           push 0x7ce368
// 005eea77  64a100000000         mov eax, dword ptr fs:[0]
// 005eea7d  50                   push eax
// 005eea7e  64892500000000       mov dword ptr fs:[0], esp
// 005eea85  51                   push ecx
// 005eea86  56                   push esi
// 005eea87  57                   push edi
// 005eea88  8bf1                 mov esi, ecx
// 005eea8a  681cb19700           push 0x97b11c
// 005eea8f  6820d65e00           push 0x5ed620
// 005eea94  89742410             mov dword ptr [esp + 0x10], esi
// 005eea98  e89388f6ff           call 0x557330
// 005eea9d  83c408               add esp, 8
// 005eeaa0  e81bebffff           call 0x5ed5c0
// 005eeaa5  8bf8                 mov edi, eax
// 005eeaa7  e844ddfaff           call 0x59c7f0
// 005eeaac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eeab0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005eeab4  51                   push ecx
// 005eeab5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005eeab9  52                   push edx
// 005eeaba  51                   push ecx
// 005eeabb  57                   push edi
// 005eeabc  50                   push eax
// 005eeabd  8bce                 mov ecx, esi
// 005eeabf  e88cdbf7ff           call 0x56c650
// 005eeac4  897e18               mov dword ptr [esi + 0x18], edi
// 005eeac7  6a0c                 push 0xc
// 005eeac9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005eead1  c706a4028400         mov dword ptr [esi], 0x8402a4
// 005eead7  e8441e0b00           call 0x6a0920
// 005eeadc  83c404               add esp, 4
// 005eeadf  85c0                 test eax, eax
// 005eeae1  7416                 je 0x5eeaf9
// 005eeae3  8b542424             mov edx, dword ptr [esp + 0x24]
// 005eeae7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005eeaeb  c70040fe8300         mov dword ptr [eax], 0x83fe40
// 005eeaf1  895004               mov dword ptr [eax + 4], edx
// 005eeaf4  894808               mov dword ptr [eax + 8], ecx
// 005eeaf7  eb02                 jmp 0x5eeafb
// 005eeaf9  33c0                 xor eax, eax
// 005eeafb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005eeaff  89461c               mov dword ptr [esi + 0x1c], eax
// 005eeb02  5f                   pop edi
// 005eeb03  8bc6                 mov eax, esi
// 005eeb05  5e                   pop esi
// 005eeb06  64890d00000000       mov dword ptr fs:[0], ecx
// 005eeb0d  83c410               add esp, 0x10
// 005eeb10  c21400               ret 0x14

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
