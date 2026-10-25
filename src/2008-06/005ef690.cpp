// from server: 100% by king_originala
// roc 2008-06 005ef690  unit: RBX::FaceInstance  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef690
//
// 005ef690  6aff                 push -1
// 005ef692  68a30f7c00           push 0x7c0fa3
// 005ef697  64a100000000         mov eax, dword ptr fs:[0]
// 005ef69d  50                   push eax
// 005ef69e  64892500000000       mov dword ptr fs:[0], esp
// 005ef6a5  51                   push ecx
// 005ef6a6  56                   push esi
// 005ef6a7  57                   push edi
// 005ef6a8  8bf1                 mov esi, ecx
// 005ef6aa  6874b59700           push 0x97b574
// 005ef6af  6820f55e00           push 0x5ef520
// 005ef6b4  89742410             mov dword ptr [esp + 0x10], esi
// 005ef6b8  e8737cf6ff           call 0x557330
// 005ef6bd  83c408               add esp, 8
// 005ef6c0  e8fbfdffff           call 0x5ef4c0
// 005ef6c5  8bf8                 mov edi, eax
// 005ef6c7  e8e488faff           call 0x597fb0
// 005ef6cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005ef6d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ef6d4  51                   push ecx
// 005ef6d5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ef6d9  52                   push edx
// 005ef6da  51                   push ecx
// 005ef6db  57                   push edi
// 005ef6dc  50                   push eax
// 005ef6dd  8bce                 mov ecx, esi
// 005ef6df  e86ccff7ff           call 0x56c650
// 005ef6e4  897e18               mov dword ptr [esi + 0x18], edi
// 005ef6e7  8b542430             mov edx, dword ptr [esp + 0x30]
// 005ef6eb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ef6ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ef6f3  52                   push edx
// 005ef6f4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ef6f8  50                   push eax
// 005ef6f9  51                   push ecx
// 005ef6fa  52                   push edx
// 005ef6fb  8d442444             lea eax, [esp + 0x44]
// 005ef6ff  50                   push eax
// 005ef700  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005ef708  c70674078400         mov dword ptr [esi], 0x840774
// 005ef70e  e85dfdffff           call 0x5ef470
// 005ef713  8b08                 mov ecx, dword ptr [eax]
// 005ef715  c70000000000         mov dword ptr [eax], 0
// 005ef71b  83c414               add esp, 0x14
// 005ef71e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005ef721  8b442434             mov eax, dword ptr [esp + 0x34]
// 005ef725  c644241401           mov byte ptr [esp + 0x14], 1
// 005ef72a  85c0                 test eax, eax
// 005ef72c  7409                 je 0x5ef737
// 005ef72e  50                   push eax
// 005ef72f  e8460f0b00           call 0x6a067a
// 005ef734  83c404               add esp, 4
// 005ef737  6874b59700           push 0x97b574
// 005ef73c  6820f55e00           push 0x5ef520
// 005ef741  e8ea7bf6ff           call 0x557330
// 005ef746  83c408               add esp, 8
// 005ef749  e872fdffff           call 0x5ef4c0
// 005ef74e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef752  894620               mov dword ptr [esi + 0x20], eax
// 005ef755  5f                   pop edi
// 005ef756  8bc6                 mov eax, esi
// 005ef758  5e                   pop esi
// 005ef759  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef760  83c410               add esp, 0x10
// 005ef763  c21c00               ret 0x1c

extern "C" void __cdecl registerName(void (__cdecl *)(), const char *);
extern "C" void __cdecl nameCallback();
extern "C" void * __cdecl getDescriptor();
extern "C" void * __cdecl getType();
extern const char faceName[];
void __cdecl operator delete(void *);

struct Owner {
    void *value;
    explicit Owner(void *p) : value(p) {}
    ~Owner() {
        if (value)
            operator delete(value);
    }
    void *release() {
        void *p = value;
        value = 0;
        return p;
    }
};

extern Owner __cdecl makeOwner(int, int, int, int);

struct __declspec(novtable) Base {
    virtual ~Base();
    void initialize(void *, void *, int, int, int);

    int storage[5];
    void *descriptor;

    Base(int a, int b, int g) {
        registerName(nameCallback, faceName);
        void *p = getDescriptor();
        void *t = getType();
        initialize(t, p, a, b, g);
        descriptor = p;
    }
};

struct S : Base {
    Owner owner;
    void *descriptor2;

    S(int, int, int, int, int, int, int);
    virtual ~S();
};

S::S(int a, int b, int c, int d, int e, int f, int g)
    : Base(a, b, g), owner(makeOwner(c, d, e, f).release())
{
    registerName(nameCallback, faceName);
    descriptor2 = getDescriptor();
}
