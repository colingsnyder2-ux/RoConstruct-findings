// from server: 100% by colin
// roc 2008-06 0060c260  unit: RBX::VNetworkSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c260
//
// 0060c260  6aff                 push -1
// 0060c262  68a30f7c00           push 0x7c0fa3
// 0060c267  64a100000000         mov eax, dword ptr fs:[0]
// 0060c26d  50                   push eax
// 0060c26e  64892500000000       mov dword ptr fs:[0], esp
// 0060c275  51                   push ecx
// 0060c276  56                   push esi
// 0060c277  57                   push edi
// 0060c278  8bf1                 mov esi, ecx
// 0060c27a  68acbd9700           push 0x97bdac
// 0060c27f  68b0b86000           push 0x60b8b0
// 0060c284  89742410             mov dword ptr [esp + 0x10], esi
// 0060c288  e8a3b0f4ff           call 0x557330
// 0060c28d  83c408               add esp, 8
// 0060c290  e8bbf5ffff           call 0x60b850
// 0060c295  8bf8                 mov edi, eax
// 0060c297  e8a446fbff           call 0x5c0940
// 0060c29c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0060c2a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060c2a4  51                   push ecx
// 0060c2a5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060c2a9  52                   push edx
// 0060c2aa  51                   push ecx
// 0060c2ab  57                   push edi
// 0060c2ac  50                   push eax
// 0060c2ad  8bce                 mov ecx, esi
// 0060c2af  e89c03f6ff           call 0x56c650
// 0060c2b4  897e18               mov dword ptr [esi + 0x18], edi
// 0060c2b7  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060c2bb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060c2bf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060c2c3  52                   push edx
// 0060c2c4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0060c2c8  50                   push eax
// 0060c2c9  51                   push ecx
// 0060c2ca  52                   push edx
// 0060c2cb  8d442444             lea eax, [esp + 0x44]
// 0060c2cf  50                   push eax
// 0060c2d0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060c2d8  c706cc328400         mov dword ptr [esi], 0x8432cc
// 0060c2de  e88de7ffff           call 0x60aa70
// 0060c2e3  8b08                 mov ecx, dword ptr [eax]
// 0060c2e5  c70000000000         mov dword ptr [eax], 0
// 0060c2eb  83c414               add esp, 0x14
// 0060c2ee  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0060c2f1  8b442434             mov eax, dword ptr [esp + 0x34]
// 0060c2f5  c644241401           mov byte ptr [esp + 0x14], 1
// 0060c2fa  85c0                 test eax, eax
// 0060c2fc  7409                 je 0x60c307
// 0060c2fe  50                   push eax
// 0060c2ff  e876430900           call 0x6a067a
// 0060c304  83c404               add esp, 4
// 0060c307  68acbd9700           push 0x97bdac
// 0060c30c  68b0b86000           push 0x60b8b0
// 0060c311  e81ab0f4ff           call 0x557330
// 0060c316  83c408               add esp, 8
// 0060c319  e832f5ffff           call 0x60b850
// 0060c31e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060c322  894620               mov dword ptr [esi + 0x20], eax
// 0060c325  5f                   pop edi
// 0060c326  8bc6                 mov eax, esi
// 0060c328  5e                   pop esi
// 0060c329  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c330  83c410               add esp, 0x10
// 0060c333  c21c00               ret 0x1c

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
