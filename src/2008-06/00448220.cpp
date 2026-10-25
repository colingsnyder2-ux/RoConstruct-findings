// from server: 100% by colin
// roc 2008-06 00448220  unit: VCRenderSettings::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448220
//
// 00448220  6aff                 push -1
// 00448222  68a30f7c00           push 0x7c0fa3
// 00448227  64a100000000         mov eax, dword ptr fs:[0]
// 0044822d  50                   push eax
// 0044822e  64892500000000       mov dword ptr fs:[0], esp
// 00448235  51                   push ecx
// 00448236  56                   push esi
// 00448237  57                   push edi
// 00448238  8bf1                 mov esi, ecx
// 0044823a  6898db9600           push 0x96db98
// 0044823f  68707e4400           push 0x447e70
// 00448244  89742410             mov dword ptr [esp + 0x10], esi
// 00448248  e8e3f01000           call 0x557330
// 0044824d  83c408               add esp, 8
// 00448250  e8bbfbffff           call 0x447e10
// 00448255  8bf8                 mov edi, eax
// 00448257  e824f7ffff           call 0x447980
// 0044825c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00448260  8b542420             mov edx, dword ptr [esp + 0x20]
// 00448264  51                   push ecx
// 00448265  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00448269  52                   push edx
// 0044826a  51                   push ecx
// 0044826b  57                   push edi
// 0044826c  50                   push eax
// 0044826d  8bce                 mov ecx, esi
// 0044826f  e8dc431200           call 0x56c650
// 00448274  897e18               mov dword ptr [esi + 0x18], edi
// 00448277  8b542430             mov edx, dword ptr [esp + 0x30]
// 0044827b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0044827f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00448283  52                   push edx
// 00448284  8b542428             mov edx, dword ptr [esp + 0x28]
// 00448288  50                   push eax
// 00448289  51                   push ecx
// 0044828a  52                   push edx
// 0044828b  8d442444             lea eax, [esp + 0x44]
// 0044828f  50                   push eax
// 00448290  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00448298  c706fc608100         mov dword ptr [esi], 0x8160fc
// 0044829e  e8ddd3ffff           call 0x445680
// 004482a3  8b08                 mov ecx, dword ptr [eax]
// 004482a5  c70000000000         mov dword ptr [eax], 0
// 004482ab  83c414               add esp, 0x14
// 004482ae  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004482b1  8b442434             mov eax, dword ptr [esp + 0x34]
// 004482b5  c644241401           mov byte ptr [esp + 0x14], 1
// 004482ba  85c0                 test eax, eax
// 004482bc  7409                 je 0x4482c7
// 004482be  50                   push eax
// 004482bf  e8b6832500           call 0x6a067a
// 004482c4  83c404               add esp, 4
// 004482c7  6898db9600           push 0x96db98
// 004482cc  68707e4400           push 0x447e70
// 004482d1  e85af01000           call 0x557330
// 004482d6  83c408               add esp, 8
// 004482d9  e832fbffff           call 0x447e10
// 004482de  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004482e2  894620               mov dword ptr [esi + 0x20], eax
// 004482e5  5f                   pop edi
// 004482e6  8bc6                 mov eax, esi
// 004482e8  5e                   pop esi
// 004482e9  64890d00000000       mov dword ptr fs:[0], ecx
// 004482f0  83c410               add esp, 0x10
// 004482f3  c21c00               ret 0x1c

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
