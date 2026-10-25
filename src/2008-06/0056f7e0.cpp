// from server: 100% by king_originala
// roc 2008-06 0056f7e0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056f7e0
//
// 0056f7e0  64a100000000         mov eax, dword ptr fs:[0]
// 0056f7e6  6aff                 push -1
// 0056f7e8  68c17d7d00           push 0x7d7dc1
// 0056f7ed  50                   push eax
// 0056f7ee  64892500000000       mov dword ptr fs:[0], esp
// 0056f7f5  83ec20               sub esp, 0x20
// 0056f7f8  56                   push esi
// 0056f7f9  57                   push edi
// 0056f7fa  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0056f7fe  8bf1                 mov esi, ecx
// 0056f800  8bcf                 mov ecx, edi
// 0056f802  e809d00000           call 0x57c810
// 0056f807  84c0                 test al, al
// 0056f809  755a                 jne 0x56f865
// 0056f80b  8d4c2408             lea ecx, [esp + 8]
// 0056f80f  ff1560248000         call dword ptr [0x802460]
// 0056f815  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0056f81d  e84e4afeff           call 0x554270
// 0056f822  89442424             mov dword ptr [esp + 0x24], eax
// 0056f826  8d442408             lea eax, [esp + 8]
// 0056f82a  50                   push eax
// 0056f82b  8d4f10               lea ecx, [edi + 0x10]
// 0056f82e  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0056f836  e895cb0000           call 0x57c3d0
// 0056f83b  84c0                 test al, al
// 0056f83d  7414                 je 0x56f853
// 0056f83f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056f842  8b11                 mov edx, dword ptr [ecx]
// 0056f844  8b520c               mov edx, dword ptr [edx + 0xc]
// 0056f847  8d442408             lea eax, [esp + 8]
// 0056f84b  50                   push eax
// 0056f84c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0056f850  50                   push eax
// 0056f851  ffd2                 call edx
// 0056f853  8d4c2408             lea ecx, [esp + 8]
// 0056f857  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0056f85f  ff1568248000         call dword ptr [0x802468]
// 0056f865  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056f869  5f                   pop edi
// 0056f86a  5e                   pop esi
// 0056f86b  64890d00000000       mov dword ptr fs:[0], ecx
// 0056f872  83c42c               add esp, 0x2c
// 0056f875  c20c00               ret 0xc

struct String;

extern "C" {
    extern void (__thiscall *stringConstruct)(String *);
    extern void (__thiscall *stringDestroy)(String *);
}

struct String {
    unsigned char data[28];
    String();
    ~String();
};

__forceinline String::String() {
    stringConstruct(this);
}

__forceinline String::~String() {
    stringDestroy(this);
}

struct Name;
extern const Name &__cdecl getLocalScope();

struct Guid {
    String text;
    const Name *scope;
    Guid();
    ~Guid();
};

__forceinline Guid::Guid() : scope(&getLocalScope()) {
}

__forceinline Guid::~Guid() {
}

struct GuidReader {
    bool read(Guid &value);
};

struct Object {
    unsigned char padding[16];
    GuidReader reader;
    bool isLocal();
};

struct Setter {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(void *instance, const Guid &value) = 0;
};

struct S {
    unsigned char padding[24];
    Setter *setter;
    void f(void *instance, Object *object, void *unused);
};

void S::f(void *instance, Object *object, void *unused) {
    if (!object->isLocal()) {
        Guid value;
        if (object->reader.read(value))
            setter->set(instance, value);
    }
}
