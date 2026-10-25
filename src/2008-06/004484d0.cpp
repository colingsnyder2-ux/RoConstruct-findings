// from server: 100% by king_originala
// roc 2008-06 004484d0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004484d0
//
// 004484d0  6aff                 push -1
// 004484d2  68a30f7c00           push 0x7c0fa3
// 004484d7  64a100000000         mov eax, dword ptr fs:[0]
// 004484dd  50                   push eax
// 004484de  64892500000000       mov dword ptr fs:[0], esp
// 004484e5  51                   push ecx
// 004484e6  56                   push esi
// 004484e7  57                   push edi
// 004484e8  8bf1                 mov esi, ecx
// 004484ea  689cdb9600           push 0x96db9c
// 004484ef  68e07e4400           push 0x447ee0
// 004484f4  89742410             mov dword ptr [esp + 0x10], esi
// 004484f8  e833ee1000           call 0x557330
// 004484fd  83c408               add esp, 8
// 00448500  e87bf9ffff           call 0x447e80
// 00448505  8bf8                 mov edi, eax
// 00448507  e874f4ffff           call 0x447980
// 0044850c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00448510  8b542420             mov edx, dword ptr [esp + 0x20]
// 00448514  51                   push ecx
// 00448515  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00448519  52                   push edx
// 0044851a  51                   push ecx
// 0044851b  57                   push edi
// 0044851c  50                   push eax
// 0044851d  8bce                 mov ecx, esi
// 0044851f  e82c411200           call 0x56c650
// 00448524  897e18               mov dword ptr [esi + 0x18], edi
// 00448527  8b542430             mov edx, dword ptr [esp + 0x30]
// 0044852b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0044852f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00448533  52                   push edx
// 00448534  8b542428             mov edx, dword ptr [esp + 0x28]
// 00448538  50                   push eax
// 00448539  51                   push ecx
// 0044853a  52                   push edx
// 0044853b  8d442444             lea eax, [esp + 0x44]
// 0044853f  50                   push eax
// 00448540  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00448548  c7064c618100         mov dword ptr [esi], 0x81614c
// 0044854e  e87dd1ffff           call 0x4456d0
// 00448553  8b08                 mov ecx, dword ptr [eax]
// 00448555  c70000000000         mov dword ptr [eax], 0
// 0044855b  83c414               add esp, 0x14
// 0044855e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00448561  8b442434             mov eax, dword ptr [esp + 0x34]
// 00448565  c644241401           mov byte ptr [esp + 0x14], 1
// 0044856a  85c0                 test eax, eax
// 0044856c  7409                 je 0x448577
// 0044856e  50                   push eax
// 0044856f  e806812500           call 0x6a067a
// 00448574  83c404               add esp, 4
// 00448577  689cdb9600           push 0x96db9c
// 0044857c  68e07e4400           push 0x447ee0
// 00448581  e8aaed1000           call 0x557330
// 00448586  83c408               add esp, 8
// 00448589  e8f2f8ffff           call 0x447e80
// 0044858e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00448592  894620               mov dword ptr [esi + 0x20], eax
// 00448595  5f                   pop edi
// 00448596  8bc6                 mov eax, esi
// 00448598  5e                   pop esi
// 00448599  64890d00000000       mov dword ptr fs:[0], ecx
// 004485a0  83c410               add esp, 0x10
// 004485a3  c21c00               ret 0x1c

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
