// from server: 100% by king_originala
// roc 2008-06 00448660  unit: VCRenderSettings::?$EnumPropDescriptor  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448660
//
// 00448660  6aff                 push -1
// 00448662  68a30f7c00           push 0x7c0fa3
// 00448667  64a100000000         mov eax, dword ptr fs:[0]
// 0044866d  50                   push eax
// 0044866e  64892500000000       mov dword ptr fs:[0], esp
// 00448675  51                   push ecx
// 00448676  56                   push esi
// 00448677  57                   push edi
// 00448678  8bf1                 mov esi, ecx
// 0044867a  68a4db9600           push 0x96dba4
// 0044867f  68c07f4400           push 0x447fc0
// 00448684  89742410             mov dword ptr [esp + 0x10], esi
// 00448688  e8a3ec1000           call 0x557330
// 0044868d  83c408               add esp, 8
// 00448690  e8cbf8ffff           call 0x447f60
// 00448695  8bf8                 mov edi, eax
// 00448697  e8e4f2ffff           call 0x447980
// 0044869c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004486a0  8b542420             mov edx, dword ptr [esp + 0x20]
// 004486a4  51                   push ecx
// 004486a5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004486a9  52                   push edx
// 004486aa  51                   push ecx
// 004486ab  57                   push edi
// 004486ac  50                   push eax
// 004486ad  8bce                 mov ecx, esi
// 004486af  e89c3f1200           call 0x56c650
// 004486b4  897e18               mov dword ptr [esi + 0x18], edi
// 004486b7  8b542430             mov edx, dword ptr [esp + 0x30]
// 004486bb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004486bf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004486c3  52                   push edx
// 004486c4  8b542428             mov edx, dword ptr [esp + 0x28]
// 004486c8  50                   push eax
// 004486c9  51                   push ecx
// 004486ca  52                   push edx
// 004486cb  8d442444             lea eax, [esp + 0x44]
// 004486cf  50                   push eax
// 004486d0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004486d8  c7069c618100         mov dword ptr [esi], 0x81619c
// 004486de  e83dd0ffff           call 0x445720
// 004486e3  8b08                 mov ecx, dword ptr [eax]
// 004486e5  c70000000000         mov dword ptr [eax], 0
// 004486eb  83c414               add esp, 0x14
// 004486ee  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004486f1  8b442434             mov eax, dword ptr [esp + 0x34]
// 004486f5  c644241401           mov byte ptr [esp + 0x14], 1
// 004486fa  85c0                 test eax, eax
// 004486fc  7409                 je 0x448707
// 004486fe  50                   push eax
// 004486ff  e8767f2500           call 0x6a067a
// 00448704  83c404               add esp, 4
// 00448707  68a4db9600           push 0x96dba4
// 0044870c  68c07f4400           push 0x447fc0
// 00448711  e81aec1000           call 0x557330
// 00448716  83c408               add esp, 8
// 00448719  e842f8ffff           call 0x447f60
// 0044871e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00448722  894620               mov dword ptr [esi + 0x20], eax
// 00448725  5f                   pop edi
// 00448726  8bc6                 mov eax, esi
// 00448728  5e                   pop esi
// 00448729  64890d00000000       mov dword ptr fs:[0], ecx
// 00448730  83c410               add esp, 0x10
// 00448733  c21c00               ret 0x1c

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
