// from server: 100% by king_originala
// roc 2008-06 004aa9a0  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aa9a0
//
// 004aa9a0  6aff                 push -1
// 004aa9a2  68a30f7c00           push 0x7c0fa3
// 004aa9a7  64a100000000         mov eax, dword ptr fs:[0]
// 004aa9ad  50                   push eax
// 004aa9ae  64892500000000       mov dword ptr fs:[0], esp
// 004aa9b5  51                   push ecx
// 004aa9b6  56                   push esi
// 004aa9b7  57                   push edi
// 004aa9b8  8bf1                 mov esi, ecx
// 004aa9ba  6804129700           push 0x971204
// 004aa9bf  6800a74a00           push 0x4aa700
// 004aa9c4  89742410             mov dword ptr [esp + 0x10], esi
// 004aa9c8  e863c90a00           call 0x557330
// 004aa9cd  83c408               add esp, 8
// 004aa9d0  e8cbfcffff           call 0x4aa6a0
// 004aa9d5  8bf8                 mov edi, eax
// 004aa9d7  e8a442ffff           call 0x49ec80
// 004aa9dc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004aa9e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 004aa9e4  51                   push ecx
// 004aa9e5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004aa9e9  52                   push edx
// 004aa9ea  51                   push ecx
// 004aa9eb  57                   push edi
// 004aa9ec  50                   push eax
// 004aa9ed  8bce                 mov ecx, esi
// 004aa9ef  e85c1c0c00           call 0x56c650
// 004aa9f4  897e18               mov dword ptr [esi + 0x18], edi
// 004aa9f7  8b542430             mov edx, dword ptr [esp + 0x30]
// 004aa9fb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004aa9ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004aaa03  52                   push edx
// 004aaa04  8b542428             mov edx, dword ptr [esp + 0x28]
// 004aaa08  50                   push eax
// 004aaa09  51                   push ecx
// 004aaa0a  52                   push edx
// 004aaa0b  8d442444             lea eax, [esp + 0x44]
// 004aaa0f  50                   push eax
// 004aaa10  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004aaa18  c7062c428200         mov dword ptr [esi], 0x82422c
// 004aaa1e  e82df2ffff           call 0x4a9c50
// 004aaa23  8b08                 mov ecx, dword ptr [eax]
// 004aaa25  c70000000000         mov dword ptr [eax], 0
// 004aaa2b  83c414               add esp, 0x14
// 004aaa2e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004aaa31  8b442434             mov eax, dword ptr [esp + 0x34]
// 004aaa35  c644241401           mov byte ptr [esp + 0x14], 1
// 004aaa3a  85c0                 test eax, eax
// 004aaa3c  7409                 je 0x4aaa47
// 004aaa3e  50                   push eax
// 004aaa3f  e8365c1f00           call 0x6a067a
// 004aaa44  83c404               add esp, 4
// 004aaa47  6804129700           push 0x971204
// 004aaa4c  6800a74a00           push 0x4aa700
// 004aaa51  e8dac80a00           call 0x557330
// 004aaa56  83c408               add esp, 8
// 004aaa59  e842fcffff           call 0x4aa6a0
// 004aaa5e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004aaa62  894620               mov dword ptr [esi + 0x20], eax
// 004aaa65  5f                   pop edi
// 004aaa66  8bc6                 mov eax, esi
// 004aaa68  5e                   pop esi
// 004aaa69  64890d00000000       mov dword ptr fs:[0], ecx
// 004aaa70  83c410               add esp, 0x10
// 004aaa73  c21c00               ret 0x1c

extern "C" void __cdecl registerType(void *, void *);
extern "C" void * __cdecl getDescriptor();
extern "C" void * __cdecl getCreator();

extern void *derivedTable[];

struct Owner {
    int *pointer;
    Owner(int *);
    Owner(const Owner &);
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

extern Owner __cdecl makeOwner(int, int, int, int);

struct Base {
    unsigned char data[24];
    void *descriptor;

    Base(int, int, int);
    ~Base();
    void initialize(void *, void *, int, int, int);
};

inline Base::Base(int a, int b, int g)
{
    registerType(reinterpret_cast<void *>(0x4aa700),
                 reinterpret_cast<void *>(0x971204));
    void *d = getDescriptor();
    void *creator = getCreator();
    initialize(creator, d, a, b, g);
    descriptor = d;
}

struct S : Base {
    Owner owned;
    void *secondary;

    S(int, int, int, int, int, int, int);
};

S::S(int a, int b, int c, int d, int e, int f, int g)
    : Base(a, b, g),
      owned((*reinterpret_cast<void ***>(this) = derivedTable,
             makeOwner(c, d, e, f).release()))
{
    registerType(reinterpret_cast<void *>(0x4aa700),
                 reinterpret_cast<void *>(0x971204));
    secondary = getDescriptor();
}
