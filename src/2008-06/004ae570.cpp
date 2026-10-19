// from server: 77% by colin
// from server: 73% by king_originala
// roc 2008-06 004ae570  unit: RBX::Network::VClient::?$FactoryProduct  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae570
//
// 004ae570  64a100000000         mov eax, dword ptr fs:[0]
// 004ae576  6aff                 push -1
// 004ae578  6858847c00           push 0x7c8458
// 004ae57d  50                   push eax
// 004ae57e  64892500000000       mov dword ptr fs:[0], esp
// 004ae585  83ec14               sub esp, 0x14
// 004ae588  53                   push ebx
// 004ae589  55                   push ebp
// 004ae58a  81c108010000         add ecx, 0x108
// 004ae590  833900               cmp dword ptr [ecx], 0
// 004ae593  56                   push esi
// 004ae594  57                   push edi
// 004ae595  0f84de000000         je 0x4ae679
// 004ae59b  8d442414             lea eax, [esp + 0x14]
// 004ae59f  50                   push eax
// 004ae5a0  e80b30feff           call 0x4915b0
// 004ae5a5  8b742414             mov esi, dword ptr [esp + 0x14]
// 004ae5a9  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 004ae5ac  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004ae5b2  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004ae5ba  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004ae5bd  7602                 jbe 0x4ae5c1
// 004ae5bf  ffd3                 call ebx
// 004ae5c1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004ae5c4  8b0e                 mov ecx, dword ptr [esi]
// 004ae5c6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004ae5ca  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004ae5cd  7602                 jbe 0x4ae5d1
// 004ae5cf  ffd3                 call ebx
// 004ae5d1  8b36                 mov esi, dword ptr [esi]
// 004ae5d3  85f6                 test esi, esi
// 004ae5d5  7406                 je 0x4ae5dd
// 004ae5d7  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 004ae5db  7402                 je 0x4ae5df
// 004ae5dd  ffd3                 call ebx
// 004ae5df  3bfd                 cmp edi, ebp
// 004ae5e1  745c                 je 0x4ae63f
// 004ae5e3  85f6                 test esi, esi
// 004ae5e5  7550                 jne 0x4ae637
// 004ae5e7  ffd3                 call ebx
// 004ae5e9  33c0                 xor eax, eax
// 004ae5eb  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004ae5ee  7202                 jb 0x4ae5f2
// 004ae5f0  ffd3                 call ebx
// 004ae5f2  8b17                 mov edx, dword ptr [edi]
// 004ae5f4  83ec08               sub esp, 8
// 004ae5f7  8bcc                 mov ecx, esp
// 004ae5f9  8911                 mov dword ptr [ecx], edx
// 004ae5fb  8b4704               mov eax, dword ptr [edi + 4]
// 004ae5fe  89642418             mov dword ptr [esp + 0x18], esp
// 004ae602  894104               mov dword ptr [ecx + 4], eax
// 004ae605  85c0                 test eax, eax
// 004ae607  740c                 je 0x4ae615
// 004ae609  83c004               add eax, 4
// 004ae60c  b901000000           mov ecx, 1
// 004ae611  f00fc108             lock xadd dword ptr [eax], ecx
// 004ae615  8b542444             mov edx, dword ptr [esp + 0x44]
// 004ae619  52                   push edx
// 004ae61a  8d4c2440             lea ecx, [esp + 0x40]
// 004ae61e  e8fd8d0d00           call 0x587420
// 004ae623  85f6                 test esi, esi
// 004ae625  7514                 jne 0x4ae63b
// 004ae627  ffd3                 call ebx
// 004ae629  33c0                 xor eax, eax
// 004ae62b  3b7810               cmp edi, dword ptr [eax + 0x10]
// 004ae62e  7202                 jb 0x4ae632
// 004ae630  ffd3                 call ebx
// 004ae632  83c708               add edi, 8
// 004ae635  eb9c                 jmp 0x4ae5d3
// 004ae637  8b06                 mov eax, dword ptr [esi]
// 004ae639  ebb0                 jmp 0x4ae5eb
// 004ae63b  8b06                 mov eax, dword ptr [esi]
// 004ae63d  ebec                 jmp 0x4ae62b
// 004ae63f  8b742418             mov esi, dword ptr [esp + 0x18]
// 004ae643  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004ae64b  85f6                 test esi, esi
// 004ae64d  742a                 je 0x4ae679
// 004ae64f  8d4604               lea eax, [esi + 4]
// 004ae652  83c9ff               or ecx, 0xffffffff
// 004ae655  f00fc108             lock xadd dword ptr [eax], ecx
// 004ae659  751e                 jne 0x4ae679
// 004ae65b  8b16                 mov edx, dword ptr [esi]
// 004ae65d  8b4204               mov eax, dword ptr [edx + 4]
// 004ae660  8bce                 mov ecx, esi
// 004ae662  ffd0                 call eax
// 004ae664  8d4e08               lea ecx, [esi + 8]
// 004ae667  83caff               or edx, 0xffffffff
// 004ae66a  f00fc111             lock xadd dword ptr [ecx], edx
// 004ae66e  7509                 jne 0x4ae679
// 004ae670  8b06                 mov eax, dword ptr [esi]
// 004ae672  8b5008               mov edx, dword ptr [eax + 8]
// 004ae675  8bce                 mov ecx, esi
// 004ae677  ffd2                 call edx
// 004ae679  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004ae67d  5f                   pop edi
// 004ae67e  5e                   pop esi
// 004ae67f  5d                   pop ebp
// 004ae680  64890d00000000       mov dword ptr fs:[0], ecx
// 004ae687  5b                   pop ebx
// 004ae688  83c420               add esp, 0x20
// 004ae68b  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" {
    extern void (__cdecl *invalid_parameter_noinfo)();
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Value {
    void* object;
    Control* control;
    Value(const Value&);
    ~Value();
};

inline Value::Value(const Value& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedIncrement(count);
    }
}

inline Value::~Value() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Vector;

struct Proxy {
    Vector* vector;
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Value* first;
    Value* last;
};

struct VectorPtr {
    Vector* object;
    Control* control;
    VectorPtr get() const;
    ~VectorPtr();
};

inline VectorPtr::~VectorPtr() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Output {
    void* first;
    void* second;
    void apply(void*, Value);
};

struct S {
    unsigned char padding[0x108];
    VectorPtr values;
    void f(Output, void*, unsigned long);
};

void S::f(Output output, void* argument, unsigned long) {
    VectorPtr* source = &values;
    if (!source->object)
        return;

    VectorPtr snapshot = source->get();
    Vector* vector = snapshot.object;
    Value* end = vector->last;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;

    if (vector->first > end)
        invalid();

    Value* current = vector->first;
    Proxy* endOwner = vector->proxy;

    if (current > vector->last)
        invalid();

    Proxy* owner = vector->proxy;

    for (;;) {
        if (!owner || owner != endOwner)
            invalid();

        if (current == end)
            break;

        if (!owner)
            invalid();

        Vector* container = owner ? owner->vector : 0;
        if (current >= container->last)
            invalid();

        output.apply(argument, *current);

        if (!owner)
            invalid();

        container = owner ? owner->vector : 0;
        if (current >= container->last)
            invalid();

        ++current;
    }
}
