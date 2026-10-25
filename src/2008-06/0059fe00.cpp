// from server: 100% by king_originala
// roc 2008-06 0059fe00  unit: RBX::SpecialShape  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059fe00
//
// 0059fe00  6aff                 push -1
// 0059fe02  68a30f7c00           push 0x7c0fa3
// 0059fe07  64a100000000         mov eax, dword ptr fs:[0]
// 0059fe0d  50                   push eax
// 0059fe0e  64892500000000       mov dword ptr fs:[0], esp
// 0059fe15  51                   push ecx
// 0059fe16  56                   push esi
// 0059fe17  57                   push edi
// 0059fe18  8bf1                 mov esi, ecx
// 0059fe1a  68fc679700           push 0x9767fc
// 0059fe1f  68c0fa5900           push 0x59fac0
// 0059fe24  89742410             mov dword ptr [esp + 0x10], esi
// 0059fe28  e80375fbff           call 0x557330
// 0059fe2d  83c408               add esp, 8
// 0059fe30  e82bfcffff           call 0x59fa60
// 0059fe35  8bf8                 mov edi, eax
// 0059fe37  e8a4f9ffff           call 0x59f7e0
// 0059fe3c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059fe40  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059fe44  51                   push ecx
// 0059fe45  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059fe49  52                   push edx
// 0059fe4a  51                   push ecx
// 0059fe4b  57                   push edi
// 0059fe4c  50                   push eax
// 0059fe4d  8bce                 mov ecx, esi
// 0059fe4f  e8fcc7fcff           call 0x56c650
// 0059fe54  897e18               mov dword ptr [esi + 0x18], edi
// 0059fe57  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059fe5b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059fe5f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059fe63  52                   push edx
// 0059fe64  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059fe68  50                   push eax
// 0059fe69  51                   push ecx
// 0059fe6a  52                   push edx
// 0059fe6b  8d442444             lea eax, [esp + 0x44]
// 0059fe6f  50                   push eax
// 0059fe70  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0059fe78  c706cc358300         mov dword ptr [esi], 0x8335cc
// 0059fe7e  e8cdf1ffff           call 0x59f050
// 0059fe83  8b08                 mov ecx, dword ptr [eax]
// 0059fe85  c70000000000         mov dword ptr [eax], 0
// 0059fe8b  83c414               add esp, 0x14
// 0059fe8e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0059fe91  8b442434             mov eax, dword ptr [esp + 0x34]
// 0059fe95  c644241401           mov byte ptr [esp + 0x14], 1
// 0059fe9a  85c0                 test eax, eax
// 0059fe9c  7409                 je 0x59fea7
// 0059fe9e  50                   push eax
// 0059fe9f  e8d6071000           call 0x6a067a
// 0059fea4  83c404               add esp, 4
// 0059fea7  68fc679700           push 0x9767fc
// 0059feac  68c0fa5900           push 0x59fac0
// 0059feb1  e87a74fbff           call 0x557330
// 0059feb6  83c408               add esp, 8
// 0059feb9  e8a2fbffff           call 0x59fa60
// 0059febe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059fec2  894620               mov dword ptr [esi + 0x20], eax
// 0059fec5  5f                   pop edi
// 0059fec6  8bc6                 mov eax, esi
// 0059fec8  5e                   pop esi
// 0059fec9  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fed0  83c410               add esp, 0x10
// 0059fed3  c21c00               ret 0x1c

extern "C" void __cdecl registerName(void (__cdecl *)(), const char *);
extern "C" void __cdecl nameCallback();
extern const char nameText[];
extern void * __cdecl getName();
extern void * __cdecl getEnum();

struct Accessor {
    unsigned long words[4];
};

struct Owner {
    int *pointer;
    explicit Owner(int *);
    ~Owner();
    int *release();
};

inline Owner::Owner(int *p) : pointer(p)
{
}

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

inline int *Owner::release()
{
    int *p = pointer;
    pointer = 0;
    return p;
}

extern Owner __cdecl makeOwner(unsigned long, unsigned long,
                              unsigned long, unsigned long);

struct Base {
    unsigned char padding[20];
    Base(void *, void *, const char *, const char *, int);
    virtual ~Base();
};

struct NamedBase : Base {
    void *name;
    NamedBase(void *, void *, const char *, const char *, int);
};

inline NamedBase::NamedBase(void *e, void *n,
                           const char *a, const char *b, int flags)
    : Base(e, n, a, b, flags), name(n)
{
}

struct S : NamedBase {
    Owner owner;
    void *descriptor;
    S(const char *, const char *, Accessor, int);
    virtual ~S();
};

S::S(const char *a, const char *b, Accessor accessor, int flags)
    : NamedBase(getEnum(),
                (registerName(nameCallback, nameText), getName()),
                a, b, flags),
      owner(makeOwner(accessor.words[0], accessor.words[1],
                      accessor.words[2], accessor.words[3]).release())
{
    registerName(nameCallback, nameText);
    descriptor = getName();
}
