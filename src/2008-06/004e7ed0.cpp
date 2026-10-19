// from server: 81% by colin
// from server: 80% by king_originala
// roc 2008-06 004e7ed0  unit: RBX::RenderBase::VAggregateChunk::?$WeakReferenceCountedPointer  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7ed0
//
// 004e7ed0  64a100000000         mov eax, dword ptr fs:[0]
// 004e7ed6  6aff                 push -1
// 004e7ed8  6858847c00           push 0x7c8458
// 004e7edd  50                   push eax
// 004e7ede  64892500000000       mov dword ptr fs:[0], esp
// 004e7ee5  83ec14               sub esp, 0x14
// 004e7ee8  53                   push ebx
// 004e7ee9  55                   push ebp
// 004e7eea  81c108010000         add ecx, 0x108
// 004e7ef0  833900               cmp dword ptr [ecx], 0
// 004e7ef3  56                   push esi
// 004e7ef4  57                   push edi
// 004e7ef5  0f84de000000         je 0x4e7fd9
// 004e7efb  8d442414             lea eax, [esp + 0x14]
// 004e7eff  50                   push eax
// 004e7f00  e8ab96faff           call 0x4915b0
// 004e7f05  8b742414             mov esi, dword ptr [esp + 0x14]
// 004e7f09  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 004e7f0c  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004e7f12  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004e7f1a  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004e7f1d  7602                 jbe 0x4e7f21
// 004e7f1f  ffd3                 call ebx
// 004e7f21  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004e7f24  8b0e                 mov ecx, dword ptr [esi]
// 004e7f26  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004e7f2a  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004e7f2d  7602                 jbe 0x4e7f31
// 004e7f2f  ffd3                 call ebx
// 004e7f31  8b36                 mov esi, dword ptr [esi]
// 004e7f33  85f6                 test esi, esi
// 004e7f35  7406                 je 0x4e7f3d
// 004e7f37  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 004e7f3b  7402                 je 0x4e7f3f
// 004e7f3d  ffd3                 call ebx
// 004e7f3f  3bfd                 cmp edi, ebp
// 004e7f41  745c                 je 0x4e7f9f
// 004e7f43  85f6                 test esi, esi
// 004e7f45  7550                 jne 0x4e7f97
// 004e7f47  ffd3                 call ebx
// 004e7f49  33c0                 xor eax, eax
// 004e7f4b  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004e7f4e  7202                 jb 0x4e7f52
// 004e7f50  ffd3                 call ebx
// 004e7f52  8b17                 mov edx, dword ptr [edi]
// 004e7f54  83ec08               sub esp, 8
// 004e7f57  8bcc                 mov ecx, esp
// 004e7f59  8911                 mov dword ptr [ecx], edx
// 004e7f5b  8b4704               mov eax, dword ptr [edi + 4]
// 004e7f5e  89642418             mov dword ptr [esp + 0x18], esp
// 004e7f62  894104               mov dword ptr [ecx + 4], eax
// 004e7f65  85c0                 test eax, eax
// 004e7f67  740c                 je 0x4e7f75
// 004e7f69  83c004               add eax, 4
// 004e7f6c  b901000000           mov ecx, 1
// 004e7f71  f00fc108             lock xadd dword ptr [eax], ecx
// 004e7f75  8b542440             mov edx, dword ptr [esp + 0x40]
// 004e7f79  52                   push edx
// 004e7f7a  8d4c2440             lea ecx, [esp + 0x40]
// 004e7f7e  e87de3ffff           call 0x4e6300
// 004e7f83  85f6                 test esi, esi
// 004e7f85  7514                 jne 0x4e7f9b
// 004e7f87  ffd3                 call ebx
// 004e7f89  33c0                 xor eax, eax
// 004e7f8b  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004e7f8e  7202                 jb 0x4e7f92
// 004e7f90  ffd3                 call ebx
// 004e7f92  83c708               add edi, 8
// 004e7f95  eb9c                 jmp 0x4e7f33
// 004e7f97  8b06                 mov eax, dword ptr [esi]
// 004e7f99  ebb0                 jmp 0x4e7f4b
// 004e7f9b  8b06                 mov eax, dword ptr [esi]
// 004e7f9d  ebec                 jmp 0x4e7f8b
// 004e7f9f  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e7fa3  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004e7fab  85f6                 test esi, esi
// 004e7fad  742a                 je 0x4e7fd9
// 004e7faf  8d4604               lea eax, [esi + 4]
// 004e7fb2  83c9ff               or ecx, 0xffffffff
// 004e7fb5  f00fc108             lock xadd dword ptr [eax], ecx
// 004e7fb9  751e                 jne 0x4e7fd9
// 004e7fbb  8b16                 mov edx, dword ptr [esi]
// 004e7fbd  8b4204               mov eax, dword ptr [edx + 4]
// 004e7fc0  8bce                 mov ecx, esi
// 004e7fc2  ffd0                 call eax
// 004e7fc4  8d4e08               lea ecx, [esi + 8]
// 004e7fc7  83caff               or edx, 0xffffffff
// 004e7fca  f00fc111             lock xadd dword ptr [ecx], edx
// 004e7fce  7509                 jne 0x4e7fd9
// 004e7fd0  8b06                 mov eax, dword ptr [esi]
// 004e7fd2  8b5008               mov edx, dword ptr [eax + 8]
// 004e7fd5  8bce                 mov ecx, esi
// 004e7fd7  ffd2                 call edx
// 004e7fd9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004e7fdd  5f                   pop edi
// 004e7fde  5e                   pop esi
// 004e7fdf  5d                   pop ebp
// 004e7fe0  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7fe7  5b                   pop ebx
// 004e7fe8  83c420               add esp, 0x20
// 004e7feb  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedIncrement(count);
    }
}

inline Shared::~Shared() {
    Control* c = control;
    if (c && _InterlockedDecrement(&c->strong) == 0) {
        c->dispose();
        if (_InterlockedDecrement(&c->weak) == 0)
            c->destroy();
    }
}

struct Vector;

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Shared* position;
    Iterator(Shared*, Vector*);
    Shared& get(void (__cdecl*)()) const;
    void advance(void (__cdecl*)());
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Shared* first;
    Shared* last;
    Iterator begin(void (__cdecl*)());
    Iterator end(void (__cdecl*)());
};

inline Iterator::Iterator(Shared* p, Vector* v)
    : owner(v->proxy), position(p) {
}

inline Iterator Vector::end(void (__cdecl* report)()) {
    Shared* p = last;
    if (first > p)
        report();
    return Iterator(p, this);
}

inline Iterator Vector::begin(void (__cdecl* report)()) {
    Shared* p = first;
    if (p > last)
        report();
    return Iterator(p, this);
}

inline Shared& Iterator::get(void (__cdecl* report)()) const {
    if (!owner)
        report();
    Vector* v = owner ? owner->container : 0;
    if (position >= v->last)
        report();
    return *position;
}

inline void Iterator::advance(void (__cdecl* report)()) {
    if (!owner)
        report();
    Vector* v = owner ? owner->container : 0;
    if (position >= v->last)
        report();
    ++position;
}

struct VectorPtr {
    Vector* pointer;
    Control* control;
    VectorPtr acquire();
    ~VectorPtr();
};

inline VectorPtr::~VectorPtr() {
    Control* c = control;
    if (c && _InterlockedDecrement(&c->strong) == 0) {
        c->dispose();
        if (_InterlockedDecrement(&c->weak) == 0)
            c->destroy();
    }
}

struct Visitor {
    void* context;
    void apply(void*, Shared);
};

struct S {
    unsigned char reserved[0x108];
    VectorPtr values;
    void f(Visitor, void*);
};

void S::f(Visitor visitor, void* argument) {
    if (values.pointer) {
        VectorPtr held = values.acquire();
        Vector* vector = held.pointer;
        void (__cdecl* report)() = invalid_parameter_noinfo;
        Iterator finish = vector->end(report);
        Iterator current = vector->begin(report);

        for (;;) {
            if (!current.owner || current.owner != finish.owner)
                report();
            if (current.position == finish.position)
                break;
            visitor.apply(argument, current.get(report));
            current.advance(report);
        }
    }
}
