// from server: 100% by colin
// roc 2008-06 00448a30  unit: VCRenderSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448a30
//
// 00448a30  6aff                 push -1
// 00448a32  68a30f7c00           push 0x7c0fa3
// 00448a37  64a100000000         mov eax, dword ptr fs:[0]
// 00448a3d  50                   push eax
// 00448a3e  64892500000000       mov dword ptr fs:[0], esp
// 00448a45  51                   push ecx
// 00448a46  56                   push esi
// 00448a47  57                   push edi
// 00448a48  8bf1                 mov esi, ecx
// 00448a4a  68a0db9600           push 0x96dba0
// 00448a4f  68507f4400           push 0x447f50
// 00448a54  89742410             mov dword ptr [esp + 0x10], esi
// 00448a58  e8d3e81000           call 0x557330
// 00448a5d  83c408               add esp, 8
// 00448a60  e88bf4ffff           call 0x447ef0
// 00448a65  8bf8                 mov edi, eax
// 00448a67  e814efffff           call 0x447980
// 00448a6c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00448a70  8b542420             mov edx, dword ptr [esp + 0x20]
// 00448a74  51                   push ecx
// 00448a75  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00448a79  52                   push edx
// 00448a7a  51                   push ecx
// 00448a7b  57                   push edi
// 00448a7c  50                   push eax
// 00448a7d  8bce                 mov ecx, esi
// 00448a7f  e8cc3b1200           call 0x56c650
// 00448a84  897e18               mov dword ptr [esi + 0x18], edi
// 00448a87  8b542430             mov edx, dword ptr [esp + 0x30]
// 00448a8b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00448a8f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00448a93  52                   push edx
// 00448a94  8b542428             mov edx, dword ptr [esp + 0x28]
// 00448a98  50                   push eax
// 00448a99  51                   push ecx
// 00448a9a  52                   push edx
// 00448a9b  8d442444             lea eax, [esp + 0x44]
// 00448a9f  50                   push eax
// 00448aa0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00448aa8  c7063c628100         mov dword ptr [esi], 0x81623c
// 00448aae  e80dcdffff           call 0x4457c0
// 00448ab3  8b08                 mov ecx, dword ptr [eax]
// 00448ab5  c70000000000         mov dword ptr [eax], 0
// 00448abb  83c414               add esp, 0x14
// 00448abe  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00448ac1  8b442434             mov eax, dword ptr [esp + 0x34]
// 00448ac5  c644241401           mov byte ptr [esp + 0x14], 1
// 00448aca  85c0                 test eax, eax
// 00448acc  7409                 je 0x448ad7
// 00448ace  50                   push eax
// 00448acf  e8a67b2500           call 0x6a067a
// 00448ad4  83c404               add esp, 4
// 00448ad7  68a0db9600           push 0x96dba0
// 00448adc  68507f4400           push 0x447f50
// 00448ae1  e84ae81000           call 0x557330
// 00448ae6  83c408               add esp, 8
// 00448ae9  e802f4ffff           call 0x447ef0
// 00448aee  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00448af2  894620               mov dword ptr [esi + 0x20], eax
// 00448af5  5f                   pop edi
// 00448af6  8bc6                 mov eax, esi
// 00448af8  5e                   pop esi
// 00448af9  64890d00000000       mov dword ptr fs:[0], ecx
// 00448b00  83c410               add esp, 0x10
// 00448b03  c21c00               ret 0x1c

extern void __cdecl initialize(void (__cdecl*)(), void*);
extern void __cdecl initializeType();
extern unsigned char typeStorage;
extern void* __cdecl getType();
extern void* __cdecl getEnum();
extern void __cdecl destroyObject(void*);

struct Owner {
    void* pointer;

    Owner(void*);
    ~Owner();
    void* release();
};

__forceinline Owner::Owner(void* p) : pointer(p)
{
}

__forceinline Owner::~Owner()
{
    if (pointer)
        destroyObject(pointer);
}

__forceinline void* Owner::release()
{
    void* result = pointer;
    pointer = 0;
    return result;
}

extern Owner __cdecl makeAccessor(unsigned, unsigned, unsigned, unsigned);

struct Base {
    virtual ~Base();
    unsigned data[5];

    Base(void*, void*, unsigned, unsigned, unsigned);
};

struct EnumBase : Base {
    void* type;

    EnumBase(void*, unsigned, unsigned, unsigned, void* = 0);
};

__forceinline EnumBase::EnumBase(void* t, unsigned a, unsigned b,
                                unsigned flags, void* enumValue)
    : Base(enumValue, t, a, b, (enumValue = getEnum(), flags)),
      type(t)
{
}

struct Descriptor : EnumBase {
    Owner accessor;
    void* enumMap;

    virtual ~Descriptor();
    Descriptor(unsigned, unsigned, unsigned, unsigned,
               unsigned, unsigned, unsigned);
};

Descriptor::Descriptor(unsigned a, unsigned b, unsigned c, unsigned d,
                       unsigned e, unsigned f, unsigned flags)
    : EnumBase(
          (initialize(initializeType, &typeStorage), getType()),
          a, b, flags),
      accessor(makeAccessor(c, d, e, f).release())
{
    initialize(initializeType, &typeStorage);
    enumMap = getType();
}
