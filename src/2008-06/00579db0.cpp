// from server: 89% by colin
// from server: 88% by king_originala
// roc 2008-06 00579db0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 433 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00579db0
//
// 00579db0  6aff                 push -1
// 00579db2  68d0097d00           push 0x7d09d0
// 00579db7  64a100000000         mov eax, dword ptr fs:[0]
// 00579dbd  50                   push eax
// 00579dbe  64892500000000       mov dword ptr fs:[0], esp
// 00579dc5  83ec2c               sub esp, 0x2c
// 00579dc8  55                   push ebp
// 00579dc9  56                   push esi
// 00579dca  57                   push edi
// 00579dcb  8bf1                 mov esi, ecx
// 00579dcd  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00579dd5  e8f6e5f8ff           call 0x5083d0
// 00579dda  dd5c2428             fstp qword ptr [esp + 0x28]
// 00579dde  83ec20               sub esp, 0x20
// 00579de1  8bfc                 mov edi, esp
// 00579de3  8d442468             lea eax, [esp + 0x68]
// 00579de7  89642430             mov dword ptr [esp + 0x30], esp
// 00579deb  50                   push eax
// 00579dec  8bcf                 mov ecx, edi
// 00579dee  ff155c248000         call dword ptr [0x80245c]
// 00579df4  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00579dfb  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00579dfe  c644246001           mov byte ptr [esp + 0x60], 1
// 00579e03  85f6                 test esi, esi
// 00579e05  7409                 je 0x579e10
// 00579e07  8bce                 mov ecx, esi
// 00579e09  e89250eaff           call 0x41eea0
// 00579e0e  eb02                 jmp 0x579e12
// 00579e10  33c0                 xor eax, eax
// 00579e12  8d54242c             lea edx, [esp + 0x2c]
// 00579e16  52                   push edx
// 00579e17  8bc8                 mov ecx, eax
// 00579e19  c644246400           mov byte ptr [esp + 0x64], 0
// 00579e1e  e8fd80feff           call 0x561f20
// 00579e23  8b38                 mov edi, dword ptr [eax]
// 00579e25  c70000000000         mov dword ptr [eax], 0
// 00579e2b  897c2410             mov dword ptr [esp + 0x10], edi
// 00579e2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00579e33  c644244002           mov byte ptr [esp + 0x40], 2
// 00579e38  85c0                 test eax, eax
// 00579e3a  7410                 je 0x579e4c
// 00579e3c  8b08                 mov ecx, dword ptr [eax]
// 00579e3e  8b5104               mov edx, dword ptr [ecx + 4]
// 00579e41  8d0c02               lea ecx, [edx + eax]
// 00579e44  8b01                 mov eax, dword ptr [ecx]
// 00579e46  8b10                 mov edx, dword ptr [eax]
// 00579e48  6a01                 push 1
// 00579e4a  ffd2                 call edx
// 00579e4c  e87fe5f8ff           call 0x5083d0
// 00579e51  dd5c2420             fstp qword ptr [esp + 0x20]
// 00579e55  8d442418             lea eax, [esp + 0x18]
// 00579e59  50                   push eax
// 00579e5a  e8c1f7feff           call 0x569620
// 00579e5f  83c404               add esp, 4
// 00579e62  837c246010           cmp dword ptr [esp + 0x60], 0x10
// 00579e67  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00579e6b  c644244003           mov byte ptr [esp + 0x40], 3
// 00579e70  7304                 jae 0x579e76
// 00579e72  8d4c244c             lea ecx, [esp + 0x4c]
// 00579e76  8b00                 mov eax, dword ptr [eax]
// 00579e78  51                   push ecx
// 00579e79  68b8008300           push 0x8300b8
// 00579e7e  6a01                 push 1
// 00579e80  50                   push eax
// 00579e81  e81af5feff           call 0x5693a0
// 00579e86  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00579e8a  83c410               add esp, 0x10
// 00579e8d  c644244002           mov byte ptr [esp + 0x40], 2
// 00579e92  85c0                 test eax, eax
// 00579e94  742e                 je 0x579ec4
// 00579e96  8be8                 mov ebp, eax
// 00579e98  83c004               add eax, 4
// 00579e9b  83c9ff               or ecx, 0xffffffff
// 00579e9e  f00fc108             lock xadd dword ptr [eax], ecx
// 00579ea2  7520                 jne 0x579ec4
// 00579ea4  8b5500               mov edx, dword ptr [ebp]
// 00579ea7  8b4204               mov eax, dword ptr [edx + 4]
// 00579eaa  8bcd                 mov ecx, ebp
// 00579eac  ffd0                 call eax
// 00579eae  8d4d08               lea ecx, [ebp + 8]
// 00579eb1  83caff               or edx, 0xffffffff
// 00579eb4  f00fc111             lock xadd dword ptr [ecx], edx
// 00579eb8  750a                 jne 0x579ec4
// 00579eba  8b4500               mov eax, dword ptr [ebp]
// 00579ebd  8b5008               mov edx, dword ptr [eax + 8]
// 00579ec0  8bcd                 mov ecx, ebp
// 00579ec2  ffd2                 call edx
// 00579ec4  56                   push esi
// 00579ec5  57                   push edi
// 00579ec6  8d4c241c             lea ecx, [esp + 0x1c]
// 00579eca  e861980100           call 0x593730
// 00579ecf  e8fce4f8ff           call 0x5083d0
// 00579ed4  dd5c2430             fstp qword ptr [esp + 0x30]
// 00579ed8  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 00579ede  e8fd6e0200           call 0x5a0de0
// 00579ee3  e8e8e4f8ff           call 0x5083d0
// 00579ee8  dd442420             fld qword ptr [esp + 0x20]
// 00579eec  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 00579ef2  dd442428             fld qword ptr [esp + 0x28]
// 00579ef6  d8e9                 fsubr st(1)
// 00579ef8  c644244000           mov byte ptr [esp + 0x40], 0
// 00579efd  dd9810040000         fstp qword ptr [eax + 0x410]
// 00579f03  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 00579f09  dd442430             fld qword ptr [esp + 0x30]
// 00579f0d  d9c0                 fld st(0)
// 00579f0f  dee2                 fsubrp st(2)
// 00579f11  d9c9                 fxch st(1)
// 00579f13  dd9818040000         fstp qword ptr [eax + 0x418]
// 00579f19  8bb604020000         mov esi, dword ptr [esi + 0x204]
// 00579f1f  dee9                 fsubp st(1)
// 00579f21  dd9e20040000         fstp qword ptr [esi + 0x420]
// 00579f27  85ff                 test edi, edi
// 00579f29  7410                 je 0x579f3b
// 00579f2b  8b07                 mov eax, dword ptr [edi]
// 00579f2d  8b4804               mov ecx, dword ptr [eax + 4]
// 00579f30  8b1439               mov edx, dword ptr [ecx + edi]
// 00579f33  8b02                 mov eax, dword ptr [edx]
// 00579f35  03cf                 add ecx, edi
// 00579f37  6a01                 push 1
// 00579f39  ffd0                 call eax
// 00579f3b  8d4c2448             lea ecx, [esp + 0x48]
// 00579f3f  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 00579f47  ff1568248000         call dword ptr [0x802468]
// 00579f4d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00579f51  5f                   pop edi
// 00579f52  5e                   pop esi
// 00579f53  64890d00000000       mov dword ptr fs:[0], ecx
// 00579f5a  5d                   pop ebp
// 00579f5b  83c438               add esp, 0x38
// 00579f5e  c22000               ret 0x20

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
extern void (__thiscall* string_copy_ctor)(String*, const String&);
extern void (__thiscall* string_dtor)(String*);

struct String {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const String& other) {
        string_copy_ctor(this, other);
    }

    ~String() {
        string_dtor(this);
    }

    const char* c_str() const {
        const char* p = pointer;
        if (capacity < 16)
            p = buffer;
        return p;
    }
};

struct Input {
    String text;
    int value;
};

struct Destroyable {
    virtual ~Destroyable();
};

struct Resource : virtual Destroyable {
};

struct TemporaryPtr {
    mutable Resource* pointer;

    ~TemporaryPtr() {
        if (pointer)
            delete pointer;
    }
};

struct ResourcePtr {
    Resource* pointer;

    ResourcePtr(const TemporaryPtr& other) {
        Resource* p = other.pointer;
        other.pointer = 0;
        pointer = p;
    }

    ~ResourcePtr() {
        if (pointer)
            delete pointer;
    }
};

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct LogPtr {
    void* pointer;
    RefCount* count;

    void* get() const {
        return pointer;
    }

    ~LogPtr() {
        if (count) {
            RefCount* p = count;
            if (_InterlockedDecrement(&p->strong) == 0) {
                p->dispose();
                if (_InterlockedDecrement(&p->weak) == 0)
                    p->destroy();
            }
        }
    }
};

struct Factory {
    TemporaryPtr create(Input input);
};

struct Metrics {
    char padding[0x410];
    double preparation;
    double loading;
    double completion;

    void finish();
};

struct S;

struct Loader {
    unsigned int state;
    void run(Resource*, S*);
};

extern double __cdecl clock_seconds();
extern LogPtr __cdecl get_log();
extern void __cdecl write_log(void*, int, const char*, const char*);

struct S {
    char padding[0x204];
    Metrics* metrics;

    Factory* factory();
    Factory* get_factory() {
        return this ? factory() : 0;
    }
    void load(Input input);
};

void S::load(Input input) {
    double start = clock_seconds();
    ResourcePtr resource(get_factory()->create(input));
    double prepared = clock_seconds();

    write_log(get_log().get(), 1, "DataModel Loading %s", input.text.c_str());

    Loader loader;
    loader.run(resource.pointer, this);

    double loaded = clock_seconds();
    metrics->finish();
    double finished = clock_seconds();

    metrics->preparation = prepared - start;
    metrics->loading = loaded - prepared;
    metrics->completion = finished - loaded;
}
