// from server: 100% by king_originala
// roc 2008-06 005d0d80  unit: RBX::BackpackItem  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0d80
//
// 005d0d80  6aff                 push -1
// 005d0d82  68a30f7c00           push 0x7c0fa3
// 005d0d87  64a100000000         mov eax, dword ptr fs:[0]
// 005d0d8d  50                   push eax
// 005d0d8e  64892500000000       mov dword ptr fs:[0], esp
// 005d0d95  51                   push ecx
// 005d0d96  56                   push esi
// 005d0d97  57                   push edi
// 005d0d98  8bf1                 mov esi, ecx
// 005d0d9a  68b49c9700           push 0x979cb4
// 005d0d9f  6860035d00           push 0x5d0360
// 005d0da4  89742410             mov dword ptr [esp + 0x10], esi
// 005d0da8  e88365f8ff           call 0x557330
// 005d0dad  83c408               add esp, 8
// 005d0db0  e84bf5ffff           call 0x5d0300
// 005d0db5  8bf8                 mov edi, eax
// 005d0db7  e864f6ffff           call 0x5d0420
// 005d0dbc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005d0dc0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005d0dc4  51                   push ecx
// 005d0dc5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d0dc9  52                   push edx
// 005d0dca  51                   push ecx
// 005d0dcb  57                   push edi
// 005d0dcc  50                   push eax
// 005d0dcd  8bce                 mov ecx, esi
// 005d0dcf  e87cb8f9ff           call 0x56c650
// 005d0dd4  897e18               mov dword ptr [esi + 0x18], edi
// 005d0dd7  8b542430             mov edx, dword ptr [esp + 0x30]
// 005d0ddb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d0ddf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d0de3  52                   push edx
// 005d0de4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005d0de8  50                   push eax
// 005d0de9  51                   push ecx
// 005d0dea  52                   push edx
// 005d0deb  8d442444             lea eax, [esp + 0x44]
// 005d0def  50                   push eax
// 005d0df0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005d0df8  c70684b38300         mov dword ptr [esi], 0x83b384
// 005d0dfe  e89decffff           call 0x5cfaa0
// 005d0e03  8b08                 mov ecx, dword ptr [eax]
// 005d0e05  c70000000000         mov dword ptr [eax], 0
// 005d0e0b  83c414               add esp, 0x14
// 005d0e0e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005d0e11  8b442434             mov eax, dword ptr [esp + 0x34]
// 005d0e15  c644241401           mov byte ptr [esp + 0x14], 1
// 005d0e1a  85c0                 test eax, eax
// 005d0e1c  7409                 je 0x5d0e27
// 005d0e1e  50                   push eax
// 005d0e1f  e856f80c00           call 0x6a067a
// 005d0e24  83c404               add esp, 4
// 005d0e27  68b49c9700           push 0x979cb4
// 005d0e2c  6860035d00           push 0x5d0360
// 005d0e31  e8fa64f8ff           call 0x557330
// 005d0e36  83c408               add esp, 8
// 005d0e39  e8c2f4ffff           call 0x5d0300
// 005d0e3e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d0e42  894620               mov dword ptr [esi + 0x20], eax
// 005d0e45  5f                   pop edi
// 005d0e46  8bc6                 mov eax, esi
// 005d0e48  5e                   pop esi
// 005d0e49  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0e50  83c410               add esp, 0x10
// 005d0e53  c21c00               ret 0x1c

extern void __cdecl registerType(void (__cdecl *)(), void *);
extern void __cdecl typeInitializer();
extern unsigned char typeStorage;
extern void * __cdecl enumDescriptor();
extern void * __cdecl propertyDescriptor();
extern void __cdecl releaseObject(void *);

struct Temporary {
    mutable void *p;
    ~Temporary();
};

inline Temporary::~Temporary() {
    if (p)
        releaseObject(p);
}

struct Owned {
    void *p;
    Owned(const Temporary &);
    ~Owned();
};

inline Owned::Owned(const Temporary &other) {
    void *value = other.p;
    other.p = 0;
    p = value;
}

inline Owned::~Owned() {
    if (p)
        releaseObject(p);
}

extern Temporary __cdecl makeObject(int, int, int, int);

inline void *registeredDescriptor() {
    registerType(typeInitializer, &typeStorage);
    return enumDescriptor();
}

struct Base {
    unsigned char data[20];
    Base(void *, void *, int, int, int);
    virtual ~Base();
};

struct EnumBase : Base {
    void *descriptor;
    EnumBase(int, int, int, void * = registeredDescriptor(), void * = 0);
    ~EnumBase();
};

inline EnumBase::EnumBase(int a, int b, int g, void *desc, void *prop)
    : Base(prop, desc, a, b, (prop = propertyDescriptor(), g)),
      descriptor(desc) {
}

struct S : EnumBase {
    Owned object;
    void *type;
    S(int, int, int, int, int, int, int);
    virtual ~S();
};

S::S(int a, int b, int c, int d, int e, int f, int g)
    : EnumBase(a, b, g), object(makeObject(c, d, e, f)) {
    type = registeredDescriptor();
}
