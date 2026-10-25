// from server: 94% by king_originala
// roc 2008-06 00562c30  unit: std::D::DU?$char_traits::?$basic_ifstream  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00562c30
//
// 00562c30  6aff                 push -1
// 00562c32  6880f17c00           push 0x7cf180
// 00562c37  64a100000000         mov eax, dword ptr fs:[0]
// 00562c3d  50                   push eax
// 00562c3e  64892500000000       mov dword ptr fs:[0], esp
// 00562c45  83ec30               sub esp, 0x30
// 00562c48  53                   push ebx
// 00562c49  56                   push esi
// 00562c4a  8bf1                 mov esi, ecx
// 00562c4c  33db                 xor ebx, ebx
// 00562c4e  57                   push edi
// 00562c4f  89742414             mov dword ptr [esp + 0x14], esi
// 00562c53  895c2410             mov dword ptr [esp + 0x10], ebx
// 00562c57  e894e7ffff           call 0x5613f0
// 00562c5c  8d8e30010000         lea ecx, [esi + 0x130]
// 00562c62  895c2444             mov dword ptr [esp + 0x44], ebx
// 00562c66  c7066cdf8200         mov dword ptr [esi], 0x82df6c
// 00562c6c  c746105cdf8200       mov dword ptr [esi + 0x10], 0x82df5c
// 00562c73  c7461454df8200       mov dword ptr [esi + 0x14], 0x82df54
// 00562c7a  c746204cdf8200       mov dword ptr [esi + 0x20], 0x82df4c
// 00562c81  c746243cdf8200       mov dword ptr [esi + 0x24], 0x82df3c
// 00562c88  c746442cdf8200       mov dword ptr [esi + 0x44], 0x82df2c
// 00562c8f  c746641cdf8200       mov dword ptr [esi + 0x64], 0x82df1c
// 00562c96  c786840000000cdf8200 mov dword ptr [esi + 0x84], 0x82df0c
// 00562ca0  c786a4000000fcde8200 mov dword ptr [esi + 0xa4], 0x82defc
// 00562caa  c786c4000000ecde8200 mov dword ptr [esi + 0xc4], 0x82deec
// 00562cb4  e8d71f0300           call 0x594c90
// 00562cb9  8d8e38010000         lea ecx, [esi + 0x138]
// 00562cbf  c644244401           mov byte ptr [esp + 0x44], 1
// 00562cc4  e867b8ffff           call 0x55e530
// 00562cc9  8d8e54010000         lea ecx, [esi + 0x154]
// 00562ccf  c644244402           mov byte ptr [esp + 0x44], 2
// 00562cd4  e8b7b8ffff           call 0x55e590
// 00562cd9  8d8e70010000         lea ecx, [esi + 0x170]
// 00562cdf  c644244403           mov byte ptr [esp + 0x44], 3
// 00562ce4  e8a71f0300           call 0x594c90
// 00562ce9  8d44240f             lea eax, [esp + 0xf]
// 00562ced  50                   push eax
// 00562cee  8d542413             lea edx, [esp + 0x13]
// 00562cf2  8d8e78010000         lea ecx, [esi + 0x178]
// 00562cf8  52                   push edx
// 00562cf9  c644244c04           mov byte ptr [esp + 0x4c], 4
// 00562cfe  e88ddef4ff           call 0x4b0b90
// 00562d03  899e98010000         mov dword ptr [esi + 0x198], ebx
// 00562d09  6a14                 push 0x14
// 00562d0b  c644244806           mov byte ptr [esp + 0x48], 6
// 00562d10  e80bdc1300           call 0x6a0920
// 00562d15  8bf8                 mov edi, eax
// 00562d17  83c404               add esp, 4
// 00562d1a  897c2418             mov dword ptr [esp + 0x18], edi
// 00562d1e  85ff                 test edi, edi
// 00562d20  7448                 je 0x562d6a
// 00562d22  33c9                 xor ecx, ecx
// 00562d24  51                   push ecx
// 00562d25  b8f0205600           mov eax, 0x5620f0
// 00562d2a  8bd0                 mov edx, eax
// 00562d2c  83ec10               sub esp, 0x10
// 00562d2f  8bc4                 mov eax, esp
// 00562d31  8910                 mov dword ptr [eax], edx
// 00562d33  894804               mov dword ptr [eax + 4], ecx
// 00562d36  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00562d3a  897008               mov dword ptr [eax + 8], esi
// 00562d3d  89480c               mov dword ptr [eax + 0xc], ecx
// 00562d40  8d4c2430             lea ecx, [esp + 0x30]
// 00562d44  e807c6ffff           call 0x55f350
// 00562d49  68dcde8200           push 0x82dedc
// 00562d4e  8d542420             lea edx, [esp + 0x20]
// 00562d52  bb01000000           mov ebx, 1
// 00562d57  52                   push edx
// 00562d58  8bcf                 mov ecx, edi
// 00562d5a  c644244c08           mov byte ptr [esp + 0x4c], 8
// 00562d5f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00562d63  e868440300           call 0x5971d0
// 00562d68  eb02                 jmp 0x562d6c
// 00562d6a  33c0                 xor eax, eax
// 00562d6c  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00562d72  c744244409000000     mov dword ptr [esp + 0x44], 9
// 00562d7a  898698010000         mov dword ptr [esi + 0x198], eax
// 00562d80  85ff                 test edi, edi
// 00562d82  7410                 je 0x562d94
// 00562d84  8bcf                 mov ecx, edi
// 00562d86  e8252f0300           call 0x595cb0
// 00562d8b  57                   push edi
// 00562d8c  e8e9d81300           call 0x6a067a
// 00562d91  83c404               add esp, 4
// 00562d94  c744244406000000     mov dword ptr [esp + 0x44], 6
// 00562d9c  f6c301               test bl, 1
// 00562d9f  741d                 je 0x562dbe
// 00562da1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00562da5  85c0                 test eax, eax
// 00562da7  7415                 je 0x562dbe
// 00562da9  8b00                 mov eax, dword ptr [eax]
// 00562dab  85c0                 test eax, eax
// 00562dad  740f                 je 0x562dbe
// 00562daf  8d4c2424             lea ecx, [esp + 0x24]
// 00562db3  6a01                 push 1
// 00562db5  51                   push ecx
// 00562db6  8bd1                 mov edx, ecx
// 00562db8  52                   push edx
// 00562db9  ffd0                 call eax
// 00562dbb  83c40c               add esp, 0xc
// 00562dbe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00562dc2  5f                   pop edi
// 00562dc3  8bc6                 mov eax, esi
// 00562dc5  5e                   pop esi
// 00562dc6  64890d00000000       mov dword ptr fs:[0], ecx
// 00562dcd  5b                   pop ebx
// 00562dce  83c43c               add esp, 0x3c
// 00562dd1  c3                   ret 

typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern const unsigned long table0[], table10[], table14[], table20[];
extern const unsigned long table24[], table44[], table64[], table84[];
extern const unsigned long tableA4[], tableC4[];
extern const char contentName[];

struct Base {
    unsigned long words[76];
    Base();
    ~Base();
};

struct Small {
    char data[8];
    Small();
    Small(int);
    void initialize();
    ~Small();
};

inline Small::Small(int)
{
    initialize();
}

struct First {
    char data[28];
    First();
    ~First();
};

struct Second {
    char data[28];
    Second();
    ~Second();
};

struct Tag {
    Tag();
};

inline Tag::Tag() {}

struct Container {
    char data[32];
    Container(const Tag&, const Tag&);
    ~Container();
};

struct S;
typedef void (__cdecl *Callback)();
extern void __cdecl callback();

struct Binding {
    Callback function;
    unsigned long zero;
    S* object;
    unsigned long extra;
    Binding(S*);
};

inline Binding::Binding(S* p)
{
    function = callback;
    zero = 0;
    object = p;
}

struct Function {
    typedef void (__cdecl *Manager)(void*, void*, int);
    Manager* manager;
    unsigned long reserved;
    char storage[16];
    unsigned long padding[2];

    Function(Binding, int);
    ~Function();
};

inline Function::~Function()
{
    if (manager) {
        Manager m = *manager;
        if (m)
            m(storage, storage, 1);
    }
}

struct Resource {
    char data[20];
    Resource(const Function&, const char*);
    ~Resource();
};

struct Owner {
    Resource* pointer;
    Owner();
    ~Owner();
    void reset(Resource*);
};

inline Owner::Owner() : pointer(0) {}

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

inline void Owner::reset(Resource* p)
{
    Resource* old = pointer;
    pointer = p;
    if (old)
        delete old;
}

struct S : Base {
    Small first;
    First second;
    Second third;
    Small fourth;
    Container fifth;
    Owner resource;
    S();
};

S::S()
    : Base(),
      first((
          words[0] = reinterpret_cast<unsigned long>(table0),
          words[4] = reinterpret_cast<unsigned long>(table10),
          words[5] = reinterpret_cast<unsigned long>(table14),
          words[8] = reinterpret_cast<unsigned long>(table20),
          words[9] = reinterpret_cast<unsigned long>(table24),
          words[17] = reinterpret_cast<unsigned long>(table44),
          words[25] = reinterpret_cast<unsigned long>(table64),
          words[33] = reinterpret_cast<unsigned long>(table84),
          words[41] = reinterpret_cast<unsigned long>(tableA4),
          words[49] = reinterpret_cast<unsigned long>(tableC4),
          0)),
      second(), third(), fourth(),
      fifth(Tag(), Tag()), resource()
{
    resource.reset(new Resource(Function(Binding(this), 0), contentName));
}
