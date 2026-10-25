// from server: 100% by colin
// roc 2008-06 004aaae0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aaae0
//
// 004aaae0  6aff                 push -1
// 004aaae2  68a30f7c00           push 0x7c0fa3
// 004aaae7  64a100000000         mov eax, dword ptr fs:[0]
// 004aaaed  50                   push eax
// 004aaaee  64892500000000       mov dword ptr fs:[0], esp
// 004aaaf5  51                   push ecx
// 004aaaf6  56                   push esi
// 004aaaf7  57                   push edi
// 004aaaf8  8bf1                 mov esi, ecx
// 004aaafa  6808129700           push 0x971208
// 004aaaff  6870a74a00           push 0x4aa770
// 004aab04  89742410             mov dword ptr [esp + 0x10], esi
// 004aab08  e823c80a00           call 0x557330
// 004aab0d  83c408               add esp, 8
// 004aab10  e8fbfbffff           call 0x4aa710
// 004aab15  8bf8                 mov edi, eax
// 004aab17  e86441ffff           call 0x49ec80
// 004aab1c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004aab20  8b542420             mov edx, dword ptr [esp + 0x20]
// 004aab24  51                   push ecx
// 004aab25  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004aab29  52                   push edx
// 004aab2a  51                   push ecx
// 004aab2b  57                   push edi
// 004aab2c  50                   push eax
// 004aab2d  8bce                 mov ecx, esi
// 004aab2f  e81c1b0c00           call 0x56c650
// 004aab34  897e18               mov dword ptr [esi + 0x18], edi
// 004aab37  8b542430             mov edx, dword ptr [esp + 0x30]
// 004aab3b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004aab3f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004aab43  52                   push edx
// 004aab44  8b542428             mov edx, dword ptr [esp + 0x28]
// 004aab48  50                   push eax
// 004aab49  51                   push ecx
// 004aab4a  52                   push edx
// 004aab4b  8d442444             lea eax, [esp + 0x44]
// 004aab4f  50                   push eax
// 004aab50  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004aab58  c7067c428200         mov dword ptr [esi], 0x82427c
// 004aab5e  e83df1ffff           call 0x4a9ca0
// 004aab63  8b08                 mov ecx, dword ptr [eax]
// 004aab65  c70000000000         mov dword ptr [eax], 0
// 004aab6b  83c414               add esp, 0x14
// 004aab6e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004aab71  8b442434             mov eax, dword ptr [esp + 0x34]
// 004aab75  c644241401           mov byte ptr [esp + 0x14], 1
// 004aab7a  85c0                 test eax, eax
// 004aab7c  7409                 je 0x4aab87
// 004aab7e  50                   push eax
// 004aab7f  e8f65a1f00           call 0x6a067a
// 004aab84  83c404               add esp, 4
// 004aab87  6808129700           push 0x971208
// 004aab8c  6870a74a00           push 0x4aa770
// 004aab91  e89ac70a00           call 0x557330
// 004aab96  83c408               add esp, 8
// 004aab99  e872fbffff           call 0x4aa710
// 004aab9e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004aaba2  894620               mov dword ptr [esi + 0x20], eax
// 004aaba5  5f                   pop edi
// 004aaba6  8bc6                 mov eax, esi
// 004aaba8  5e                   pop esi
// 004aaba9  64890d00000000       mov dword ptr fs:[0], ecx
// 004aabb0  83c410               add esp, 0x10
// 004aabb3  c21c00               ret 0x1c

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
