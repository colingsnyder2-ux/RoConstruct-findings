// from server: 100% by king_originala
// roc 2008-06 0060bd80  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060bd80
//
// 0060bd80  6aff                 push -1
// 0060bd82  68a30f7c00           push 0x7c0fa3
// 0060bd87  64a100000000         mov eax, dword ptr fs:[0]
// 0060bd8d  50                   push eax
// 0060bd8e  64892500000000       mov dword ptr fs:[0], esp
// 0060bd95  51                   push ecx
// 0060bd96  56                   push esi
// 0060bd97  57                   push edi
// 0060bd98  8bf1                 mov esi, ecx
// 0060bd9a  6874b59700           push 0x97b574
// 0060bd9f  6820f55e00           push 0x5ef520
// 0060bda4  89742410             mov dword ptr [esp + 0x10], esi
// 0060bda8  e883b5f4ff           call 0x557330
// 0060bdad  83c408               add esp, 8
// 0060bdb0  e80b37feff           call 0x5ef4c0
// 0060bdb5  8bf8                 mov edi, eax
// 0060bdb7  e8844bfbff           call 0x5c0940
// 0060bdbc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0060bdc0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060bdc4  51                   push ecx
// 0060bdc5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060bdc9  52                   push edx
// 0060bdca  51                   push ecx
// 0060bdcb  57                   push edi
// 0060bdcc  50                   push eax
// 0060bdcd  8bce                 mov ecx, esi
// 0060bdcf  e87c08f6ff           call 0x56c650
// 0060bdd4  897e18               mov dword ptr [esi + 0x18], edi
// 0060bdd7  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060bddb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060bddf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060bde3  52                   push edx
// 0060bde4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0060bde8  50                   push eax
// 0060bde9  51                   push ecx
// 0060bdea  52                   push edx
// 0060bdeb  8d442444             lea eax, [esp + 0x44]
// 0060bdef  50                   push eax
// 0060bdf0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060bdf8  c706dc318400         mov dword ptr [esi], 0x8431dc
// 0060bdfe  e87debffff           call 0x60a980
// 0060be03  8b08                 mov ecx, dword ptr [eax]
// 0060be05  c70000000000         mov dword ptr [eax], 0
// 0060be0b  83c414               add esp, 0x14
// 0060be0e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0060be11  8b442434             mov eax, dword ptr [esp + 0x34]
// 0060be15  c644241401           mov byte ptr [esp + 0x14], 1
// 0060be1a  85c0                 test eax, eax
// 0060be1c  7409                 je 0x60be27
// 0060be1e  50                   push eax
// 0060be1f  e856480900           call 0x6a067a
// 0060be24  83c404               add esp, 4
// 0060be27  6874b59700           push 0x97b574
// 0060be2c  6820f55e00           push 0x5ef520
// 0060be31  e8fab4f4ff           call 0x557330
// 0060be36  83c408               add esp, 8
// 0060be39  e88236feff           call 0x5ef4c0
// 0060be3e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060be42  894620               mov dword ptr [esi + 0x20], eax
// 0060be45  5f                   pop edi
// 0060be46  8bc6                 mov eax, esi
// 0060be48  5e                   pop esi
// 0060be49  64890d00000000       mov dword ptr fs:[0], ecx
// 0060be50  83c410               add esp, 0x10
// 0060be53  c21c00               ret 0x1c

extern void __cdecl registerType(void (__cdecl *)(), void *);
extern void __cdecl initializeType();
extern unsigned char typeStorage[];
extern const unsigned long motorTable[];
extern void *__cdecl getType();
extern void *__cdecl getSettings();
extern void __cdecl operator delete(void *);

struct Owned {
    void *pointer;

    Owned(Owned &);
    ~Owned();
};

__forceinline Owned::Owned(Owned &other)
{
    void *p = other.pointer;
    other.pointer = 0;
    pointer = p;
}

__forceinline Owned::~Owned()
{
    if (pointer)
        operator delete(pointer);
}

extern Owned __cdecl createMotor(int, int, int, int);

struct Base {
    unsigned char storage[0x18];
    void *type;

    Base(int, int, int);
    ~Base();
    void construct(void *, void *, int, int, int);
};

__forceinline Base::Base(int a, int b, int g)
{
    registerType(initializeType, typeStorage);
    void *t = getType();
    void *settings = getSettings();
    construct(settings, t, a, b, g);
    type = t;
}

struct S : Base {
    Owned motor;
    void *registeredType;

    S(int, int, int, int, int, int, int);
};

S::S(int a, int b, int c, int d, int e, int f, int g)
    : Base(a, b, g),
      motor((*(const unsigned long **)storage = motorTable,
             createMotor(c, d, e, f)))
{
    registerType(initializeType, typeStorage);
    registeredType = getType();
}
