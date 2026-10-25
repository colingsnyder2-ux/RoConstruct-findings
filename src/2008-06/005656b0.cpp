// from server: 100% by king_originala
// roc 2008-06 005656b0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005656b0
//
// 005656b0  6aff                 push -1
// 005656b2  68a30f7c00           push 0x7c0fa3
// 005656b7  64a100000000         mov eax, dword ptr fs:[0]
// 005656bd  50                   push eax
// 005656be  64892500000000       mov dword ptr fs:[0], esp
// 005656c5  51                   push ecx
// 005656c6  56                   push esi
// 005656c7  57                   push edi
// 005656c8  8bf1                 mov esi, ecx
// 005656ca  68b0449700           push 0x9744b0
// 005656cf  6830545600           push 0x565430
// 005656d4  89742410             mov dword ptr [esp + 0x10], esi
// 005656d8  e8531cffff           call 0x557330
// 005656dd  83c408               add esp, 8
// 005656e0  e8ebfcffff           call 0x5653d0
// 005656e5  8bf8                 mov edi, eax
// 005656e7  e8f4f7ffff           call 0x564ee0
// 005656ec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005656f0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005656f4  51                   push ecx
// 005656f5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005656f9  52                   push edx
// 005656fa  51                   push ecx
// 005656fb  57                   push edi
// 005656fc  50                   push eax
// 005656fd  8bce                 mov ecx, esi
// 005656ff  e84c6f0000           call 0x56c650
// 00565704  897e18               mov dword ptr [esi + 0x18], edi
// 00565707  8b542430             mov edx, dword ptr [esp + 0x30]
// 0056570b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056570f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00565713  52                   push edx
// 00565714  8b542428             mov edx, dword ptr [esp + 0x28]
// 00565718  50                   push eax
// 00565719  51                   push ecx
// 0056571a  52                   push edx
// 0056571b  8d442444             lea eax, [esp + 0x44]
// 0056571f  50                   push eax
// 00565720  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00565728  c7067ce58200         mov dword ptr [esi], 0x82e57c
// 0056572e  e89de6ffff           call 0x563dd0
// 00565733  8b08                 mov ecx, dword ptr [eax]
// 00565735  c70000000000         mov dword ptr [eax], 0
// 0056573b  83c414               add esp, 0x14
// 0056573e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00565741  8b442434             mov eax, dword ptr [esp + 0x34]
// 00565745  c644241401           mov byte ptr [esp + 0x14], 1
// 0056574a  85c0                 test eax, eax
// 0056574c  7409                 je 0x565757
// 0056574e  50                   push eax
// 0056574f  e826af1300           call 0x6a067a
// 00565754  83c404               add esp, 4
// 00565757  68b0449700           push 0x9744b0
// 0056575c  6830545600           push 0x565430
// 00565761  e8ca1bffff           call 0x557330
// 00565766  83c408               add esp, 8
// 00565769  e862fcffff           call 0x5653d0
// 0056576e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00565772  894620               mov dword ptr [esi + 0x20], eax
// 00565775  5f                   pop edi
// 00565776  8bc6                 mov eax, esi
// 00565778  5e                   pop esi
// 00565779  64890d00000000       mov dword ptr fs:[0], ecx
// 00565780  83c410               add esp, 0x10
// 00565783  c21c00               ret 0x1c

extern "C" void __cdecl registerType(void (__cdecl *)(), void *);
extern "C" void *__cdecl getDescriptor();
extern "C" void *__cdecl getEnum();
void __cdecl operator delete(void *);

struct Temporary {
    void *p;
    void *release() const;
    ~Temporary();
};

inline void *Temporary::release() const {
    void *result = p;
    const_cast<Temporary *>(this)->p = 0;
    return result;
}

inline Temporary::~Temporary() {
    if (p)
        operator delete(p);
}

struct Owner {
    void *p;
    Owner(const Temporary &);
    ~Owner();
};

inline Owner::Owner(const Temporary &other) : p(other.release()) {
}

inline Owner::~Owner() {
    if (p)
        operator delete(p);
}

extern Temporary __cdecl createObject(int, int, int, int);

struct Root {
    unsigned char storage[20];
    Root(void *, void *, int, int, int);
    virtual ~Root();
};

struct Base : Root {
    void *descriptor;
    Base(int, int, int,
         void * = getEnum(),
         void * = (registerType((void (__cdecl *)())0x565430,
                               (void *)0x9744b0),
                   getDescriptor()));
};

__forceinline Base::Base(int a, int b, int g, void *en, void *desc)
    : Root(en, desc, a, b, g), descriptor(desc) {
}

struct S : Base {
    Owner object;
    void *factory;
    S(int, int, int, int, int, int, int);
    virtual ~S();
};

S::S(int a, int b, int c, int d, int e, int f, int g)
    : Base(a, b, g), object(createObject(c, d, e, f)) {
    registerType((void (__cdecl *)())0x565430, (void *)0x9744b0);
    factory = getDescriptor();
}
