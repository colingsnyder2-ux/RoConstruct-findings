// from server: 100% by king_originala
// roc 2008-06 005bcb60  unit: RBX::Stats::I::?$TypedStatsItem  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bcb60
//
// 005bcb60  6aff                 push -1
// 005bcb62  68a30f7c00           push 0x7c0fa3
// 005bcb67  64a100000000         mov eax, dword ptr fs:[0]
// 005bcb6d  50                   push eax
// 005bcb6e  64892500000000       mov dword ptr fs:[0], esp
// 005bcb75  51                   push ecx
// 005bcb76  56                   push esi
// 005bcb77  57                   push edi
// 005bcb78  8bf1                 mov esi, ecx
// 005bcb7a  6814769700           push 0x977614
// 005bcb7f  68a0be5b00           push 0x5bbea0
// 005bcb84  89742410             mov dword ptr [esp + 0x10], esi
// 005bcb88  e8a3a7f9ff           call 0x557330
// 005bcb8d  83c408               add esp, 8
// 005bcb90  e8abf2ffff           call 0x5bbe40
// 005bcb95  8bf8                 mov edi, eax
// 005bcb97  e854ecffff           call 0x5bb7f0
// 005bcb9c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005bcba0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005bcba4  51                   push ecx
// 005bcba5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bcba9  52                   push edx
// 005bcbaa  51                   push ecx
// 005bcbab  57                   push edi
// 005bcbac  50                   push eax
// 005bcbad  8bce                 mov ecx, esi
// 005bcbaf  e89cfafaff           call 0x56c650
// 005bcbb4  897e18               mov dword ptr [esi + 0x18], edi
// 005bcbb7  8b542430             mov edx, dword ptr [esp + 0x30]
// 005bcbbb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005bcbbf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bcbc3  52                   push edx
// 005bcbc4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bcbc8  50                   push eax
// 005bcbc9  51                   push ecx
// 005bcbca  52                   push edx
// 005bcbcb  8d442444             lea eax, [esp + 0x44]
// 005bcbcf  50                   push eax
// 005bcbd0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005bcbd8  c706647f8300         mov dword ptr [esi], 0x837f64
// 005bcbde  e8cdb1ffff           call 0x5b7db0
// 005bcbe3  8b08                 mov ecx, dword ptr [eax]
// 005bcbe5  c70000000000         mov dword ptr [eax], 0
// 005bcbeb  83c414               add esp, 0x14
// 005bcbee  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005bcbf1  8b442434             mov eax, dword ptr [esp + 0x34]
// 005bcbf5  c644241401           mov byte ptr [esp + 0x14], 1
// 005bcbfa  85c0                 test eax, eax
// 005bcbfc  7409                 je 0x5bcc07
// 005bcbfe  50                   push eax
// 005bcbff  e8763a0e00           call 0x6a067a
// 005bcc04  83c404               add esp, 4
// 005bcc07  6814769700           push 0x977614
// 005bcc0c  68a0be5b00           push 0x5bbea0
// 005bcc11  e81aa7f9ff           call 0x557330
// 005bcc16  83c408               add esp, 8
// 005bcc19  e822f2ffff           call 0x5bbe40
// 005bcc1e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bcc22  894620               mov dword ptr [esi + 0x20], eax
// 005bcc25  5f                   pop edi
// 005bcc26  8bc6                 mov eax, esi
// 005bcc28  5e                   pop esi
// 005bcc29  64890d00000000       mov dword ptr fs:[0], ecx
// 005bcc30  83c410               add esp, 0x10
// 005bcc33  c21c00               ret 0x1c

extern "C" void __cdecl registerType(void (__cdecl *)(), void*);
extern "C" void __cdecl typeCallback();
extern "C" void* __cdecl getType();
extern "C" void* __cdecl getRoot();
extern unsigned char typeData;

void __cdecl operator delete(void*);

struct TemporaryOwner {
    mutable int* pointer;

    int* release() const;
    ~TemporaryOwner();
};

inline int* TemporaryOwner::release() const
{
    int* p = pointer;
    pointer = 0;
    return p;
}

inline TemporaryOwner::~TemporaryOwner()
{
    if (pointer)
        operator delete(pointer);
}

struct Owner {
    int* pointer;

    Owner(const TemporaryOwner&);
    ~Owner();
};

inline Owner::Owner(const TemporaryOwner& other)
    : pointer(other.release())
{
}

inline Owner::~Owner()
{
    if (pointer)
        operator delete(pointer);
}

extern TemporaryOwner __cdecl makeOwner(unsigned int, unsigned int,
                                       unsigned int, unsigned int);

struct Base {
    unsigned char storage[0x14];

    Base(void*, void*, unsigned int, unsigned int, unsigned int);
    virtual ~Base();
};

struct TypedBase : Base {
    void* type;

    TypedBase(void*, void*, unsigned int, unsigned int, unsigned int);
};

inline TypedBase::TypedBase(void* root, void* descriptor,
                           unsigned int a, unsigned int b, unsigned int g)
    : Base(root, descriptor, a, b, g), type(descriptor)
{
}

struct S : TypedBase {
    Owner owner;
    void* finalType;

    S(unsigned int, unsigned int, unsigned int, unsigned int,
      unsigned int, unsigned int, unsigned int);
    virtual ~S();
};

S::S(unsigned int a, unsigned int b, unsigned int c, unsigned int d,
     unsigned int e, unsigned int f, unsigned int g)
    : TypedBase(getRoot(),
                (registerType(typeCallback, &typeData), getType()),
                a, b, g),
      owner(makeOwner(c, d, e, f))
{
    registerType(typeCallback, &typeData);
    finalType = getType();
}
