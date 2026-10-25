// from server: 100% by king_originala
// roc 2008-06 00448b40  unit: VCRenderSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448b40
//
// 00448b40  6aff                 push -1
// 00448b42  68a30f7c00           push 0x7c0fa3
// 00448b47  64a100000000         mov eax, dword ptr fs:[0]
// 00448b4d  50                   push eax
// 00448b4e  64892500000000       mov dword ptr fs:[0], esp
// 00448b55  51                   push ecx
// 00448b56  56                   push esi
// 00448b57  57                   push edi
// 00448b58  8bf1                 mov esi, ecx
// 00448b5a  6894db9600           push 0x96db94
// 00448b5f  68007e4400           push 0x447e00
// 00448b64  89742410             mov dword ptr [esp + 0x10], esi
// 00448b68  e8c3e71000           call 0x557330
// 00448b6d  83c408               add esp, 8
// 00448b70  e82bf2ffff           call 0x447da0
// 00448b75  8bf8                 mov edi, eax
// 00448b77  e804eeffff           call 0x447980
// 00448b7c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00448b80  8b542420             mov edx, dword ptr [esp + 0x20]
// 00448b84  51                   push ecx
// 00448b85  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00448b89  52                   push edx
// 00448b8a  51                   push ecx
// 00448b8b  57                   push edi
// 00448b8c  50                   push eax
// 00448b8d  8bce                 mov ecx, esi
// 00448b8f  e8bc3a1200           call 0x56c650
// 00448b94  897e18               mov dword ptr [esi + 0x18], edi
// 00448b97  8b542430             mov edx, dword ptr [esp + 0x30]
// 00448b9b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00448b9f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00448ba3  52                   push edx
// 00448ba4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00448ba8  50                   push eax
// 00448ba9  51                   push ecx
// 00448baa  52                   push edx
// 00448bab  8d442444             lea eax, [esp + 0x44]
// 00448baf  50                   push eax
// 00448bb0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00448bb8  c7068c628100         mov dword ptr [esi], 0x81628c
// 00448bbe  e83dcdffff           call 0x445900
// 00448bc3  8b08                 mov ecx, dword ptr [eax]
// 00448bc5  c70000000000         mov dword ptr [eax], 0
// 00448bcb  83c414               add esp, 0x14
// 00448bce  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00448bd1  8b442434             mov eax, dword ptr [esp + 0x34]
// 00448bd5  c644241401           mov byte ptr [esp + 0x14], 1
// 00448bda  85c0                 test eax, eax
// 00448bdc  7409                 je 0x448be7
// 00448bde  50                   push eax
// 00448bdf  e8967a2500           call 0x6a067a
// 00448be4  83c404               add esp, 4
// 00448be7  6894db9600           push 0x96db94
// 00448bec  68007e4400           push 0x447e00
// 00448bf1  e83ae71000           call 0x557330
// 00448bf6  83c408               add esp, 8
// 00448bf9  e8a2f1ffff           call 0x447da0
// 00448bfe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00448c02  894620               mov dword ptr [esi + 0x20], eax
// 00448c05  5f                   pop edi
// 00448c06  8bc6                 mov eax, esi
// 00448c08  5e                   pop esi
// 00448c09  64890d00000000       mov dword ptr fs:[0], ecx
// 00448c10  83c410               add esp, 0x10
// 00448c13  c21c00               ret 0x1c

extern char registrationState;
extern void __cdecl registerEnum();
extern void __cdecl registerOnce(void (__cdecl*)(), void*);
extern void* __cdecl getEnum();
extern void* __cdecl getDescriptor();
extern void __cdecl releaseObject(void*);

struct Owner {
    void* pointer;

    Owner(void*);
    ~Owner();
    void* release();
};

inline Owner::Owner(void* value) : pointer(value)
{
}

inline Owner::~Owner()
{
    if (pointer)
        releaseObject(pointer);
}

inline void* Owner::release()
{
    void* result = pointer;
    pointer = 0;
    return result;
}

extern Owner __cdecl makeBinding(unsigned long, unsigned long,
                                unsigned long, unsigned long);

struct PropertyBase {
    virtual void slot();
    char padding[20];

    PropertyBase(void*, void*, const char*, const char*, unsigned long);
    ~PropertyBase();
};

struct EnumBase : PropertyBase {
    void* enumeration;

    EnumBase(const char*, const char*, unsigned long, void*, void*);
};

inline EnumBase::EnumBase(const char* name, const char* category,
                         unsigned long flags, void* descriptor, void* type)
    : PropertyBase(descriptor, type, name, category, flags),
      enumeration(type)
{
}

struct Descriptor : EnumBase {
    Owner binding;
    void* enumDescriptor;

    virtual void slot();
    Descriptor(const char*, const char*, unsigned long, unsigned long,
               unsigned long, unsigned long, unsigned long);
};

Descriptor::Descriptor(const char* name, const char* category,
                       unsigned long getter1, unsigned long getter2,
                       unsigned long setter1, unsigned long setter2,
                       unsigned long flags)
    : EnumBase(name, category, flags, getDescriptor(),
               (registerOnce(registerEnum, &registrationState), getEnum())),
      binding(makeBinding(getter1, getter2, setter1, setter2).release())
{
    registerOnce(registerEnum, &registrationState);
    enumDescriptor = getEnum();
}
