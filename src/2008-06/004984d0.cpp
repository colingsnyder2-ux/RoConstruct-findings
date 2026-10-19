// from server: 74% by colin
// from server: 73% by king_originala
// roc 2008-06 004984d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004984d0
//
// 004984d0  6aff                 push -1
// 004984d2  68a06d7c00           push 0x7c6da0
// 004984d7  64a100000000         mov eax, dword ptr fs:[0]
// 004984dd  50                   push eax
// 004984de  64892500000000       mov dword ptr fs:[0], esp
// 004984e5  83ec14               sub esp, 0x14
// 004984e8  53                   push ebx
// 004984e9  55                   push ebp
// 004984ea  56                   push esi
// 004984eb  57                   push edi
// 004984ec  81c108010000         add ecx, 0x108
// 004984f2  833900               cmp dword ptr [ecx], 0
// 004984f5  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004984fd  0f84dd000000         je 0x4985e0
// 00498503  8d442414             lea eax, [esp + 0x14]
// 00498507  50                   push eax
// 00498508  e8a390ffff           call 0x4915b0
// 0049850d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00498511  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00498514  8b2d90288000         mov ebp, dword ptr [0x802890]
// 0049851a  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0049851f  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00498522  7602                 jbe 0x498526
// 00498524  ffd5                 call ebp
// 00498526  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00498529  8b0e                 mov ecx, dword ptr [esi]
// 0049852b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0049852f  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 00498532  7602                 jbe 0x498536
// 00498534  ffd5                 call ebp
// 00498536  8b36                 mov esi, dword ptr [esi]
// 00498538  85f6                 test esi, esi
// 0049853a  7406                 je 0x498542
// 0049853c  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 00498540  7402                 je 0x498544
// 00498542  ffd5                 call ebp
// 00498544  3bfb                 cmp edi, ebx
// 00498546  7461                 je 0x4985a9
// 00498548  85f6                 test esi, esi
// 0049854a  7555                 jne 0x4985a1
// 0049854c  ffd5                 call ebp
// 0049854e  33c0                 xor eax, eax
// 00498550  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00498553  7202                 jb 0x498557
// 00498555  ffd5                 call ebp
// 00498557  8b07                 mov eax, dword ptr [edi]
// 00498559  8d542440             lea edx, [esp + 0x40]
// 0049855d  52                   push edx
// 0049855e  83ec08               sub esp, 8
// 00498561  8bcc                 mov ecx, esp
// 00498563  8901                 mov dword ptr [ecx], eax
// 00498565  8b4704               mov eax, dword ptr [edi + 4]
// 00498568  8964241c             mov dword ptr [esp + 0x1c], esp
// 0049856c  894104               mov dword ptr [ecx + 4], eax
// 0049856f  85c0                 test eax, eax
// 00498571  740c                 je 0x49857f
// 00498573  83c004               add eax, 4
// 00498576  b901000000           mov ecx, 1
// 0049857b  f00fc108             lock xadd dword ptr [eax], ecx
// 0049857f  8b542448             mov edx, dword ptr [esp + 0x48]
// 00498583  52                   push edx
// 00498584  8d4c2444             lea ecx, [esp + 0x44]
// 00498588  e883e3ffff           call 0x496910
// 0049858d  85f6                 test esi, esi
// 0049858f  7514                 jne 0x4985a5
// 00498591  ffd5                 call ebp
// 00498593  33c0                 xor eax, eax
// 00498595  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00498598  7202                 jb 0x49859c
// 0049859a  ffd5                 call ebp
// 0049859c  83c708               add edi, 8
// 0049859f  eb97                 jmp 0x498538
// 004985a1  8b06                 mov eax, dword ptr [esi]
// 004985a3  ebab                 jmp 0x498550
// 004985a5  8b06                 mov eax, dword ptr [esi]
// 004985a7  ebec                 jmp 0x498595
// 004985a9  8b742418             mov esi, dword ptr [esp + 0x18]
// 004985ad  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004985b2  85f6                 test esi, esi
// 004985b4  742a                 je 0x4985e0
// 004985b6  8d4604               lea eax, [esi + 4]
// 004985b9  83c9ff               or ecx, 0xffffffff
// 004985bc  f00fc108             lock xadd dword ptr [eax], ecx
// 004985c0  751e                 jne 0x4985e0
// 004985c2  8b16                 mov edx, dword ptr [esi]
// 004985c4  8b4204               mov eax, dword ptr [edx + 4]
// 004985c7  8bce                 mov ecx, esi
// 004985c9  ffd0                 call eax
// 004985cb  8d4e08               lea ecx, [esi + 8]
// 004985ce  83caff               or edx, 0xffffffff
// 004985d1  f00fc111             lock xadd dword ptr [ecx], edx
// 004985d5  7509                 jne 0x4985e0
// 004985d7  8b06                 mov eax, dword ptr [esi]
// 004985d9  8b5008               mov edx, dword ptr [eax + 8]
// 004985dc  8bce                 mov ecx, esi
// 004985de  ffd2                 call edx
// 004985e0  8b442440             mov eax, dword ptr [esp + 0x40]
// 004985e4  50                   push eax
// 004985e5  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004985ed  e82ef70600           call 0x507d20
// 004985f2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004985f6  83c404               add esp, 4
// 004985f9  5f                   pop edi
// 004985fa  5e                   pop esi
// 004985fb  5d                   pop ebp
// 004985fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00498603  5b                   pop ebx
// 00498604  83c420               add esp, 0x20
// 00498607  c22000               ret 0x20

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* invalid_parameter_noinfo)();
extern "C" void __cdecl alignedFree(void*);

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Holder {
    void* object;
    Control* control;
    Shared get();
};

struct Vector;

struct Proxy {
    Vector* container;
};

struct Vector {
    Proxy* proxy;
    unsigned long reserved[2];
    Shared* first;
    Shared* last;
};

struct Buffer {
    void* data;
    unsigned long reserved[4];
    ~Buffer();
};

inline Buffer::~Buffer()
{
    alignedFree(data);
}

struct Operation {
    unsigned long storage[2];
    void apply(unsigned long, Shared, Buffer*);
};

struct S {
    unsigned char reserved[0x108];
    Holder children;
    void f(Operation, unsigned long, Buffer);
};

void S::f(Operation operation, unsigned long argument, Buffer buffer)
{
    if (children.object) {
        Shared snapshot = children.get();
        Vector* vector = static_cast<Vector*>(snapshot.object);
        Shared* end = vector->last;
        void (__cdecl* fail)() = invalid_parameter_noinfo;

        if (vector->first > end)
            fail();

        Shared* current = vector->first;
        Proxy* endProxy = vector->proxy;
        if (current > vector->last)
            fail();
        Proxy* proxy = vector->proxy;

        for (;;) {
            if (!proxy || proxy != endProxy)
                fail();
            if (current == end)
                break;

            if (!proxy)
                fail();
            Vector* owner = proxy ? proxy->container : 0;
            if (current >= owner->last)
                fail();

            operation.apply(argument, *current, &buffer);

            if (!proxy)
                fail();
            owner = proxy ? proxy->container : 0;
            if (current >= owner->last)
                fail();
            ++current;
        }
    }
}
