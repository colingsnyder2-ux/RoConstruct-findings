// from server: 100% by king_originala
// roc 2008-06 00585240  unit: RBX::ModelInstance  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585240
//
// 00585240  6aff                 push -1
// 00585242  6868e37c00           push 0x7ce368
// 00585247  64a100000000         mov eax, dword ptr fs:[0]
// 0058524d  50                   push eax
// 0058524e  64892500000000       mov dword ptr fs:[0], esp
// 00585255  51                   push ecx
// 00585256  56                   push esi
// 00585257  8bf1                 mov esi, ecx
// 00585259  57                   push edi
// 0058525a  89742408             mov dword ptr [esp + 8], esi
// 0058525e  e8ddecffff           call 0x583f40
// 00585263  8bf8                 mov edi, eax
// 00585265  e896feffff           call 0x585100
// 0058526a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0058526e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00585272  51                   push ecx
// 00585273  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00585277  52                   push edx
// 00585278  51                   push ecx
// 00585279  57                   push edi
// 0058527a  50                   push eax
// 0058527b  8bce                 mov ecx, esi
// 0058527d  e8ce73feff           call 0x56c650
// 00585282  8b542430             mov edx, dword ptr [esp + 0x30]
// 00585286  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0058528a  83ec0c               sub esp, 0xc
// 0058528d  8bc4                 mov eax, esp
// 0058528f  8910                 mov dword ptr [eax], edx
// 00585291  8b542444             mov edx, dword ptr [esp + 0x44]
// 00585295  894804               mov dword ptr [eax + 4], ecx
// 00585298  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0058529c  895008               mov dword ptr [eax + 8], edx
// 0058529f  8b542434             mov edx, dword ptr [esp + 0x34]
// 005852a3  83ec0c               sub esp, 0xc
// 005852a6  8bc4                 mov eax, esp
// 005852a8  8908                 mov dword ptr [eax], ecx
// 005852aa  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005852ae  895004               mov dword ptr [eax + 4], edx
// 005852b1  8d542454             lea edx, [esp + 0x54]
// 005852b5  52                   push edx
// 005852b6  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005852be  c7066c0e8300         mov dword ptr [esi], 0x830e6c
// 005852c4  c74618640e8300       mov dword ptr [esi + 0x18], 0x830e64
// 005852cb  894808               mov dword ptr [eax + 8], ecx
// 005852ce  e85df2ffff           call 0x584530
// 005852d3  8b08                 mov ecx, dword ptr [eax]
// 005852d5  c70000000000         mov dword ptr [eax], 0
// 005852db  8b442458             mov eax, dword ptr [esp + 0x58]
// 005852df  83c41c               add esp, 0x1c
// 005852e2  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005852e5  85c0                 test eax, eax
// 005852e7  7409                 je 0x5852f2
// 005852e9  50                   push eax
// 005852ea  e88bb31100           call 0x6a067a
// 005852ef  83c404               add esp, 4
// 005852f2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005852f6  5f                   pop edi
// 005852f7  8bc6                 mov eax, esi
// 005852f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00585300  5e                   pop esi
// 00585301  83c410               add esp, 0x10
// 00585304  c22400               ret 0x24

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
