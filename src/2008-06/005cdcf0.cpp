// from server: 100% by colin
// roc 2008-06 005cdcf0  unit: RBX::Camera  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cdcf0
//
// 005cdcf0  6aff                 push -1
// 005cdcf2  68a30f7c00           push 0x7c0fa3
// 005cdcf7  64a100000000         mov eax, dword ptr fs:[0]
// 005cdcfd  50                   push eax
// 005cdcfe  64892500000000       mov dword ptr fs:[0], esp
// 005cdd05  51                   push ecx
// 005cdd06  56                   push esi
// 005cdd07  57                   push edi
// 005cdd08  8bf1                 mov esi, ecx
// 005cdd0a  686c9a9700           push 0x979a6c
// 005cdd0f  68b0d85c00           push 0x5cd8b0
// 005cdd14  89742410             mov dword ptr [esp + 0x10], esi
// 005cdd18  e81396f8ff           call 0x557330
// 005cdd1d  83c408               add esp, 8
// 005cdd20  e82bfbffff           call 0x5cd850
// 005cdd25  8bf8                 mov edi, eax
// 005cdd27  e864f8ffff           call 0x5cd590
// 005cdd2c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005cdd30  8b542420             mov edx, dword ptr [esp + 0x20]
// 005cdd34  51                   push ecx
// 005cdd35  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cdd39  52                   push edx
// 005cdd3a  51                   push ecx
// 005cdd3b  57                   push edi
// 005cdd3c  50                   push eax
// 005cdd3d  8bce                 mov ecx, esi
// 005cdd3f  e80ce9f9ff           call 0x56c650
// 005cdd44  897e18               mov dword ptr [esi + 0x18], edi
// 005cdd47  8b542430             mov edx, dword ptr [esp + 0x30]
// 005cdd4b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005cdd4f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cdd53  52                   push edx
// 005cdd54  8b542428             mov edx, dword ptr [esp + 0x28]
// 005cdd58  50                   push eax
// 005cdd59  51                   push ecx
// 005cdd5a  52                   push edx
// 005cdd5b  8d442444             lea eax, [esp + 0x44]
// 005cdd5f  50                   push eax
// 005cdd60  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005cdd68  c7069ca68300         mov dword ptr [esi], 0x83a69c
// 005cdd6e  e81df2ffff           call 0x5ccf90
// 005cdd73  8b08                 mov ecx, dword ptr [eax]
// 005cdd75  c70000000000         mov dword ptr [eax], 0
// 005cdd7b  83c414               add esp, 0x14
// 005cdd7e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005cdd81  8b442434             mov eax, dword ptr [esp + 0x34]
// 005cdd85  c644241401           mov byte ptr [esp + 0x14], 1
// 005cdd8a  85c0                 test eax, eax
// 005cdd8c  7409                 je 0x5cdd97
// 005cdd8e  50                   push eax
// 005cdd8f  e8e6280d00           call 0x6a067a
// 005cdd94  83c404               add esp, 4
// 005cdd97  686c9a9700           push 0x979a6c
// 005cdd9c  68b0d85c00           push 0x5cd8b0
// 005cdda1  e88a95f8ff           call 0x557330
// 005cdda6  83c408               add esp, 8
// 005cdda9  e8a2faffff           call 0x5cd850
// 005cddae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cddb2  894620               mov dword ptr [esi + 0x20], eax
// 005cddb5  5f                   pop edi
// 005cddb6  8bc6                 mov eax, esi
// 005cddb8  5e                   pop esi
// 005cddb9  64890d00000000       mov dword ptr fs:[0], ecx
// 005cddc0  83c410               add esp, 0x10
// 005cddc3  c21c00               ret 0x1c

extern void __cdecl registerEnum(void (__cdecl*)(), void*);
extern void __cdecl initializeEnum();
extern unsigned char enumStorage;
extern void* __cdecl getEnumDescriptor();
extern void* __cdecl getClassDescriptor();
extern void __cdecl destroyProperty(void*);

struct Owner {
    void* pointer;

    explicit Owner(void*);
    ~Owner();
    void* release();
};

inline Owner::Owner(void* value) : pointer(value)
{
}

inline Owner::~Owner()
{
    if (pointer)
        destroyProperty(pointer);
}

inline void* Owner::release()
{
    void* result = pointer;
    pointer = 0;
    return result;
}

extern Owner __cdecl makeProperty(unsigned, unsigned, unsigned, unsigned);

struct __declspec(novtable) Base {
    virtual ~Base();
    unsigned char padding[20];
    void* enumDescriptor;

    Base(unsigned, unsigned, unsigned);
    void initialize(void*, void*, unsigned, unsigned, unsigned);
};

inline Base::Base(unsigned name, unsigned attributes, unsigned security)
{
    registerEnum(initializeEnum, &enumStorage);
    void* descriptor = getEnumDescriptor();
    void* classDescriptor = getClassDescriptor();
    initialize(classDescriptor, descriptor, name, attributes, security);
    enumDescriptor = descriptor;
}

struct Descriptor : Base {
    Owner property;
    void* enumType;

    Descriptor(unsigned, unsigned, unsigned, unsigned,
               unsigned, unsigned, unsigned);
    virtual ~Descriptor();
};

Descriptor::Descriptor(unsigned name, unsigned attributes,
                       unsigned getter0, unsigned getter1,
                       unsigned setter0, unsigned setter1,
                       unsigned security)
    : Base(name, attributes, security),
      property(makeProperty(getter0, getter1, setter0, setter1).release())
{
    registerEnum(initializeEnum, &enumStorage);
    enumType = getEnumDescriptor();
}
