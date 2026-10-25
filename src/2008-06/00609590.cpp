// from server: 100% by king_originala
// roc 2008-06 00609590  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609590
//
// 00609590  6aff                 push -1
// 00609592  68a30f7c00           push 0x7c0fa3
// 00609597  64a100000000         mov eax, dword ptr fs:[0]
// 0060959d  50                   push eax
// 0060959e  64892500000000       mov dword ptr fs:[0], esp
// 006095a5  51                   push ecx
// 006095a6  56                   push esi
// 006095a7  57                   push edi
// 006095a8  8bf1                 mov esi, ecx
// 006095aa  688cb99700           push 0x97b98c
// 006095af  6800946000           push 0x609400
// 006095b4  89742410             mov dword ptr [esp + 0x10], esi
// 006095b8  e873ddf4ff           call 0x557330
// 006095bd  83c408               add esp, 8
// 006095c0  e8dbfdffff           call 0x6093a0
// 006095c5  8bf8                 mov edi, eax
// 006095c7  e8c4baf7ff           call 0x585090
// 006095cc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006095d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 006095d4  51                   push ecx
// 006095d5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006095d9  52                   push edx
// 006095da  51                   push ecx
// 006095db  57                   push edi
// 006095dc  50                   push eax
// 006095dd  8bce                 mov ecx, esi
// 006095df  e86c30f6ff           call 0x56c650
// 006095e4  897e18               mov dword ptr [esi + 0x18], edi
// 006095e7  8b542430             mov edx, dword ptr [esp + 0x30]
// 006095eb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006095ef  83ec0c               sub esp, 0xc
// 006095f2  8bc4                 mov eax, esp
// 006095f4  8910                 mov dword ptr [eax], edx
// 006095f6  8b542444             mov edx, dword ptr [esp + 0x44]
// 006095fa  894804               mov dword ptr [eax + 4], ecx
// 006095fd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00609601  895008               mov dword ptr [eax + 8], edx
// 00609604  8b542434             mov edx, dword ptr [esp + 0x34]
// 00609608  83ec0c               sub esp, 0xc
// 0060960b  8bc4                 mov eax, esp
// 0060960d  8908                 mov dword ptr [eax], ecx
// 0060960f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00609613  895004               mov dword ptr [eax + 4], edx
// 00609616  8d542454             lea edx, [esp + 0x54]
// 0060961a  52                   push edx
// 0060961b  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00609623  c70624298400         mov dword ptr [esi], 0x842924
// 00609629  894808               mov dword ptr [eax + 8], ecx
// 0060962c  e80ff9ffff           call 0x608f40
// 00609631  8b08                 mov ecx, dword ptr [eax]
// 00609633  c70000000000         mov dword ptr [eax], 0
// 00609639  83c41c               add esp, 0x1c
// 0060963c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0060963f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00609643  c644241401           mov byte ptr [esp + 0x14], 1
// 00609648  85c0                 test eax, eax
// 0060964a  7409                 je 0x609655
// 0060964c  50                   push eax
// 0060964d  e828700900           call 0x6a067a
// 00609652  83c404               add esp, 4
// 00609655  688cb99700           push 0x97b98c
// 0060965a  6800946000           push 0x609400
// 0060965f  e8ccdcf4ff           call 0x557330
// 00609664  83c408               add esp, 8
// 00609667  e834fdffff           call 0x6093a0
// 0060966c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00609670  894620               mov dword ptr [esi + 0x20], eax
// 00609673  5f                   pop edi
// 00609674  8bc6                 mov eax, esi
// 00609676  64890d00000000       mov dword ptr fs:[0], ecx
// 0060967d  5e                   pop esi
// 0060967e  83c410               add esp, 0x10
// 00609681  c22400               ret 0x24

extern "C" void __cdecl registerDescriptor(void (__cdecl *)(), void *);
extern "C" void __cdecl initializeDescriptor();
extern "C" void *__cdecl getDescriptor();
extern "C" void *__cdecl getModelDescriptor();
extern unsigned char descriptorStorage;

void __cdecl operator delete(void *);

struct Triple {
    unsigned int a, b, c;
};

struct Owned {
    void *p;
    explicit Owned(void *value) : p(value) {}
    ~Owned() {
        if (p)
            operator delete(p);
    }
    void *release() {
        void *value = p;
        p = 0;
        return value;
    }
};

extern Owned __cdecl makeProduct(Triple, Triple);

struct Base {
    unsigned int data[5];
    Base(void *, void *, const char *, const char *, int);
    virtual ~Base();
};

struct TypedBase : Base {
    void *type;
    TypedBase(void *, void *, const char *, const char *, int);
};

__forceinline TypedBase::TypedBase(
    void *model, void *descriptor, const char *name,
    const char *category, int flags)
    : Base(model, descriptor, name, category, flags),
      type(descriptor)
{
}

__forceinline void *descriptor()
{
    registerDescriptor(initializeDescriptor, &descriptorStorage);
    return getDescriptor();
}

struct S : TypedBase {
    Owned product;
    void *extra;

    S(const char *, const char *, Triple, Triple, int);
    virtual ~S();
};

S::S(const char *name, const char *category,
     Triple getter, Triple setter, int flags)
    : TypedBase(getModelDescriptor(), descriptor(), name, category, flags),
      product(makeProduct(getter, setter).release())
{
    extra = descriptor();
}
