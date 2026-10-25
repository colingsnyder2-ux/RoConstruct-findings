// from server: 100% by king_originala
// roc 2008-06 00565870  unit: RBX::VDebugSettings::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565870
//
// 00565870  6aff                 push -1
// 00565872  68a30f7c00           push 0x7c0fa3
// 00565877  64a100000000         mov eax, dword ptr fs:[0]
// 0056587d  50                   push eax
// 0056587e  64892500000000       mov dword ptr fs:[0], esp
// 00565885  51                   push ecx
// 00565886  56                   push esi
// 00565887  57                   push edi
// 00565888  8bf1                 mov esi, ecx
// 0056588a  68ac449700           push 0x9744ac
// 0056588f  68c0535600           push 0x5653c0
// 00565894  89742410             mov dword ptr [esp + 0x10], esi
// 00565898  e8931affff           call 0x557330
// 0056589d  83c408               add esp, 8
// 005658a0  e8bbfaffff           call 0x565360
// 005658a5  8bf8                 mov edi, eax
// 005658a7  e834f6ffff           call 0x564ee0
// 005658ac  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005658b0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005658b4  51                   push ecx
// 005658b5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005658b9  52                   push edx
// 005658ba  51                   push ecx
// 005658bb  57                   push edi
// 005658bc  50                   push eax
// 005658bd  8bce                 mov ecx, esi
// 005658bf  e88c6d0000           call 0x56c650
// 005658c4  897e18               mov dword ptr [esi + 0x18], edi
// 005658c7  8b542430             mov edx, dword ptr [esp + 0x30]
// 005658cb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005658cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005658d3  52                   push edx
// 005658d4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005658d8  50                   push eax
// 005658d9  51                   push ecx
// 005658da  52                   push edx
// 005658db  8d442444             lea eax, [esp + 0x44]
// 005658df  50                   push eax
// 005658e0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005658e8  c7061ce68200         mov dword ptr [esi], 0x82e61c
// 005658ee  e8cde5ffff           call 0x563ec0
// 005658f3  8b08                 mov ecx, dword ptr [eax]
// 005658f5  c70000000000         mov dword ptr [eax], 0
// 005658fb  83c414               add esp, 0x14
// 005658fe  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00565901  8b442434             mov eax, dword ptr [esp + 0x34]
// 00565905  c644241401           mov byte ptr [esp + 0x14], 1
// 0056590a  85c0                 test eax, eax
// 0056590c  7409                 je 0x565917
// 0056590e  50                   push eax
// 0056590f  e866ad1300           call 0x6a067a
// 00565914  83c404               add esp, 4
// 00565917  68ac449700           push 0x9744ac
// 0056591c  68c0535600           push 0x5653c0
// 00565921  e80a1affff           call 0x557330
// 00565926  83c408               add esp, 8
// 00565929  e832faffff           call 0x565360
// 0056592e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00565932  894620               mov dword ptr [esi + 0x20], eax
// 00565935  5f                   pop edi
// 00565936  8bc6                 mov eax, esi
// 00565938  5e                   pop esi
// 00565939  64890d00000000       mov dword ptr fs:[0], ecx
// 00565940  83c410               add esp, 0x10
// 00565943  c21c00               ret 0x1c

void __cdecl operator delete(void *);

extern unsigned descriptorState;
extern void __cdecl registerDescriptor(void (__cdecl *)(), void *);
extern void __cdecl descriptorInitializer();
extern void *__cdecl primaryDescriptor();
extern void *__cdecl secondaryDescriptor();

struct Owner {
    void *pointer;
    Owner(void *);
    ~Owner();
    void *release();
};

__forceinline Owner::Owner(void *p) : pointer(p) {}

__forceinline Owner::~Owner()
{
    if (pointer)
        operator delete(pointer);
}

__forceinline void *Owner::release()
{
    void *result = pointer;
    pointer = 0;
    return result;
}

extern Owner __cdecl makeProduct(unsigned, unsigned, unsigned, unsigned);

struct Base {
    virtual ~Base();
    unsigned storage[5];
    Base(void *, void *, unsigned, unsigned, unsigned);
};

struct DescriptorBase : Base {
    void *descriptor;
    DescriptorBase(void *, unsigned, unsigned, unsigned, void * = 0);
};

__forceinline DescriptorBase::DescriptorBase(void *p, unsigned a,
                                             unsigned b, unsigned g, void *q)
    : Base(q, p, a, b, (q = secondaryDescriptor(), g)), descriptor(p)
{
}

struct Product : DescriptorBase {
    Owner product;
    void *secondary;

    Product(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);
    virtual ~Product();
};

static __forceinline void *registeredDescriptor()
{
    registerDescriptor(descriptorInitializer, &descriptorState);
    return primaryDescriptor();
}

Product::Product(unsigned a, unsigned b, unsigned c, unsigned d,
                 unsigned e, unsigned f, unsigned g)
    : DescriptorBase(registeredDescriptor(), a, b, g),
      product(makeProduct(c, d, e, f).release()),
      secondary(registeredDescriptor())
{
}
