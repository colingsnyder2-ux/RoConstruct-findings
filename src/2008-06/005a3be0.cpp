// from server: 100% by colin
// roc 2008-06 005a3be0  unit: RBX::Workspace  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3be0
//
// 005a3be0  6aff                 push -1
// 005a3be2  6868e37c00           push 0x7ce368
// 005a3be7  64a100000000         mov eax, dword ptr fs:[0]
// 005a3bed  50                   push eax
// 005a3bee  64892500000000       mov dword ptr fs:[0], esp
// 005a3bf5  51                   push ecx
// 005a3bf6  56                   push esi
// 005a3bf7  8bf1                 mov esi, ecx
// 005a3bf9  57                   push edi
// 005a3bfa  89742408             mov dword ptr [esp + 8], esi
// 005a3bfe  e82dcdffff           call 0x5a0930
// 005a3c03  8bf8                 mov edi, eax
// 005a3c05  e866ffffff           call 0x5a3b70
// 005a3c0a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005a3c0e  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a3c12  51                   push ecx
// 005a3c13  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a3c17  52                   push edx
// 005a3c18  51                   push ecx
// 005a3c19  57                   push edi
// 005a3c1a  50                   push eax
// 005a3c1b  8bce                 mov ecx, esi
// 005a3c1d  e82e8afcff           call 0x56c650
// 005a3c22  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a3c26  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a3c2a  83ec0c               sub esp, 0xc
// 005a3c2d  8bc4                 mov eax, esp
// 005a3c2f  8910                 mov dword ptr [eax], edx
// 005a3c31  8b542444             mov edx, dword ptr [esp + 0x44]
// 005a3c35  894804               mov dword ptr [eax + 4], ecx
// 005a3c38  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a3c3c  895008               mov dword ptr [eax + 8], edx
// 005a3c3f  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a3c43  83ec0c               sub esp, 0xc
// 005a3c46  8bc4                 mov eax, esp
// 005a3c48  8908                 mov dword ptr [eax], ecx
// 005a3c4a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005a3c4e  895004               mov dword ptr [eax + 4], edx
// 005a3c51  8d542454             lea edx, [esp + 0x54]
// 005a3c55  52                   push edx
// 005a3c56  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005a3c5e  c706e43a8300         mov dword ptr [esi], 0x833ae4
// 005a3c64  c74618dc3a8300       mov dword ptr [esi + 0x18], 0x833adc
// 005a3c6b  894808               mov dword ptr [eax + 8], ecx
// 005a3c6e  e8bdd3ffff           call 0x5a1030
// 005a3c73  8b08                 mov ecx, dword ptr [eax]
// 005a3c75  c70000000000         mov dword ptr [eax], 0
// 005a3c7b  8b442458             mov eax, dword ptr [esp + 0x58]
// 005a3c7f  83c41c               add esp, 0x1c
// 005a3c82  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005a3c85  85c0                 test eax, eax
// 005a3c87  7409                 je 0x5a3c92
// 005a3c89  50                   push eax
// 005a3c8a  e8ebc90f00           call 0x6a067a
// 005a3c8f  83c404               add esp, 4
// 005a3c92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a3c96  5f                   pop edi
// 005a3c97  8bc6                 mov eax, esi
// 005a3c99  64890d00000000       mov dword ptr fs:[0], ecx
// 005a3ca0  5e                   pop esi
// 005a3ca1  83c410               add esp, 0x10
// 005a3ca4  c22400               ret 0x24

struct Vec {
    float x, y, z;
};

struct Impl {};

void __cdecl operator delete(void*);

struct Owner {
    Impl* p;
    ~Owner();
    Impl* release();
};

inline Owner::~Owner() {
    if (p)
        delete p;
}

inline Impl* Owner::release() {
    Impl* result = p;
    p = 0;
    return result;
}

extern void* __cdecl descriptor1();
extern void* __cdecl descriptor2();
extern Owner __cdecl createImpl(Vec, Vec);

struct __declspec(novtable) Primary {
    virtual void primary();
    unsigned char padding[20];
};

struct __declspec(novtable) Secondary {
    virtual void secondary();
};

struct __declspec(novtable) Base : Primary, Secondary {
    Base(int, int, int);
    void initialize(void*, void*, int, int, int);
    virtual ~Base();
};

__forceinline Base::Base(int a, int b, int c) {
    void* first = descriptor1();
    void* second = descriptor2();
    initialize(second, first, a, b, c);
}

struct S : Base {
    Impl* impl;
    S(int, int, Vec, Vec, int);
    virtual ~S();
};

S::S(int a, int b, Vec first, Vec second, int c)
    : Base(a, b, c)
{
    impl = createImpl(first, second).release();
}
