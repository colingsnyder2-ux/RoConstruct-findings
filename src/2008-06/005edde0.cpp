// from server: 100% by king_originala
// roc 2008-06 005edde0  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005edde0
//
// 005edde0  6aff                 push -1
// 005edde2  6868e37c00           push 0x7ce368
// 005edde7  64a100000000         mov eax, dword ptr fs:[0]
// 005edded  50                   push eax
// 005eddee  64892500000000       mov dword ptr fs:[0], esp
// 005eddf5  51                   push ecx
// 005eddf6  56                   push esi
// 005eddf7  57                   push edi
// 005eddf8  8bf1                 mov esi, ecx
// 005eddfa  681cb19700           push 0x97b11c
// 005eddff  6820d65e00           push 0x5ed620
// 005ede04  89742410             mov dword ptr [esp + 0x10], esi
// 005ede08  e82395f6ff           call 0x557330
// 005ede0d  83c408               add esp, 8
// 005ede10  e8abf7ffff           call 0x5ed5c0
// 005ede15  8bf8                 mov edi, eax
// 005ede17  e8d4e9faff           call 0x59c7f0
// 005ede1c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ede20  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ede24  51                   push ecx
// 005ede25  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ede29  52                   push edx
// 005ede2a  51                   push ecx
// 005ede2b  57                   push edi
// 005ede2c  50                   push eax
// 005ede2d  8bce                 mov ecx, esi
// 005ede2f  e81ce8f7ff           call 0x56c650
// 005ede34  897e18               mov dword ptr [esi + 0x18], edi
// 005ede37  6a0c                 push 0xc
// 005ede39  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ede41  c70664ff8300         mov dword ptr [esi], 0x83ff64
// 005ede47  e8d42a0b00           call 0x6a0920
// 005ede4c  83c404               add esp, 4
// 005ede4f  85c0                 test eax, eax
// 005ede51  7416                 je 0x5ede69
// 005ede53  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ede57  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ede5b  c70050fd8300         mov dword ptr [eax], 0x83fd50
// 005ede61  895004               mov dword ptr [eax + 4], edx
// 005ede64  894808               mov dword ptr [eax + 8], ecx
// 005ede67  eb02                 jmp 0x5ede6b
// 005ede69  33c0                 xor eax, eax
// 005ede6b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ede6f  89461c               mov dword ptr [esi + 0x1c], eax
// 005ede72  5f                   pop edi
// 005ede73  8bc6                 mov eax, esi
// 005ede75  5e                   pop esi
// 005ede76  64890d00000000       mov dword ptr fs:[0], ecx
// 005ede7d  83c410               add esp, 0x10
// 005ede80  c21400               ret 0x14

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
