// from server: 97% by colin
// from server: 91% by king_originala
// roc 2008-06 0057f310  unit: RBX::VModelInstance::?$FilteredSelection  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057f310
//
// 0057f310  6aff                 push -1
// 0057f312  68f45d7d00           push 0x7d5df4
// 0057f317  64a100000000         mov eax, dword ptr fs:[0]
// 0057f31d  50                   push eax
// 0057f31e  64892500000000       mov dword ptr fs:[0], esp
// 0057f325  51                   push ecx
// 0057f326  53                   push ebx
// 0057f327  56                   push esi
// 0057f328  8bf1                 mov esi, ecx
// 0057f32a  8d8630010000         lea eax, [esi + 0x130]
// 0057f330  57                   push edi
// 0057f331  8974240c             mov dword ptr [esp + 0xc], esi
// 0057f335  c7060c0a8300         mov dword ptr [esi], 0x830a0c
// 0057f33b  c74610000a8300       mov dword ptr [esi + 0x10], 0x830a00
// 0057f342  c74614f8098300       mov dword ptr [esi + 0x14], 0x8309f8
// 0057f349  c74620f0098300       mov dword ptr [esi + 0x20], 0x8309f0
// 0057f350  c74624e0098300       mov dword ptr [esi + 0x24], 0x8309e0
// 0057f357  c74644d0098300       mov dword ptr [esi + 0x44], 0x8309d0
// 0057f35e  c74664c0098300       mov dword ptr [esi + 0x64], 0x8309c0
// 0057f365  c78684000000b0098300 mov dword ptr [esi + 0x84], 0x8309b0
// 0057f36f  c786a4000000a0098300 mov dword ptr [esi + 0xa4], 0x8309a0
// 0057f379  c786c400000090098300 mov dword ptr [esi + 0xc4], 0x830990
// 0057f383  c70088098300         mov dword ptr [eax], 0x830988
// 0057f389  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0057f38f  33db                 xor ebx, ebx
// 0057f391  c744241802000000     mov dword ptr [esp + 0x18], 2
// 0057f399  3bcb                 cmp ecx, ebx
// 0057f39b  7406                 je 0x57f3a3
// 0057f39d  50                   push eax
// 0057f39e  e84d7dfeff           call 0x5670f0
// 0057f3a3  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 0057f3a9  3bc3                 cmp eax, ebx
// 0057f3ab  7409                 je 0x57f3b6
// 0057f3ad  50                   push eax
// 0057f3ae  e8c7121200           call 0x6a067a
// 0057f3b3  83c404               add esp, 4
// 0057f3b6  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0057f3bc  50                   push eax
// 0057f3bd  899e48010000         mov dword ptr [esi + 0x148], ebx
// 0057f3c3  899e4c010000         mov dword ptr [esi + 0x14c], ebx
// 0057f3c9  899e50010000         mov dword ptr [esi + 0x150], ebx
// 0057f3cf  e8a6121200           call 0x6a067a
// 0057f3d4  8bbe38010000         mov edi, dword ptr [esi + 0x138]
// 0057f3da  83c404               add esp, 4
// 0057f3dd  885c2418             mov byte ptr [esp + 0x18], bl
// 0057f3e1  3bfb                 cmp edi, ebx
// 0057f3e3  742a                 je 0x57f40f
// 0057f3e5  8d4704               lea eax, [edi + 4]
// 0057f3e8  83c9ff               or ecx, 0xffffffff
// 0057f3eb  f00fc108             lock xadd dword ptr [eax], ecx
// 0057f3ef  751e                 jne 0x57f40f
// 0057f3f1  8b17                 mov edx, dword ptr [edi]
// 0057f3f3  8b4204               mov eax, dword ptr [edx + 4]
// 0057f3f6  8bcf                 mov ecx, edi
// 0057f3f8  ffd0                 call eax
// 0057f3fa  8d4f08               lea ecx, [edi + 8]
// 0057f3fd  83caff               or edx, 0xffffffff
// 0057f400  f00fc111             lock xadd dword ptr [ecx], edx
// 0057f404  7509                 jne 0x57f40f
// 0057f406  8b07                 mov eax, dword ptr [edi]
// 0057f408  8b5008               mov edx, dword ptr [eax + 8]
// 0057f40b  8bcf                 mov ecx, edi
// 0057f40d  ffd2                 call edx
// 0057f40f  8bce                 mov ecx, esi
// 0057f411  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0057f419  e822b1fdff           call 0x55a540
// 0057f41e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057f422  5f                   pop edi
// 0057f423  5e                   pop esi
// 0057f424  5b                   pop ebx
// 0057f425  64890d00000000       mov dword ptr fs:[0], ecx
// 0057f42c  83c410               add esp, 0x10
// 0057f42f  c3                   ret 
// 0057f430  56                   push esi
// 0057f431  8bf1                 mov esi, ecx
// 0057f433  e8d8feffff           call 0x57f310
// 0057f438  f644240801           test byte ptr [esp + 8], 1
// 0057f43d  740a                 je 0x57f449
// 0057f43f  56                   push esi
// 0057f440  ff15c0288000         call dword ptr [0x8028c0]
// 0057f446  83c404               add esp, 4
// 0057f449  8bc6                 mov eax, esi
// 0057f44b  5e                   pop esi
// 0057f44c  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl free(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct B0 {
    virtual ~B0();
    unsigned long padding[3];
};

struct B1 {
    virtual ~B1();
};

struct B2 {
    virtual ~B2();
    unsigned long padding[2];
};

struct B3 {
    virtual ~B3();
};

struct B4 {
    virtual ~B4();
    unsigned long padding[7];
};

struct B5 {
    virtual ~B5();
    unsigned long padding[7];
};

struct B6 {
    virtual ~B6();
    unsigned long padding[7];
};

struct B7 {
    virtual ~B7();
    unsigned long padding[7];
};

struct B8 {
    virtual ~B8();
    unsigned long padding[7];
};

struct B9 {
    virtual ~B9();
    unsigned long padding[26];
};

struct Base : B0, B1, B2, B3, B4, B5, B6, B7, B8, B9 {
    virtual ~Base();
};

struct Connection;

struct Holder {
    virtual void unused();
    Connection* connection;
};

struct Connection {
    void disconnect(Holder*);
};

struct ControlRef {
    Control* control;
    ~ControlRef();
};

struct Buffer {
    void* allocation;
    unsigned long reserved[2];
    void* first;
    void* last;
    void* limit;
    ~Buffer();
};

struct S : Base, Holder {
    ControlRef reference;
    Buffer buffer;
    virtual ~S();
};

__forceinline ControlRef::~ControlRef()
{
    Control* p = control;
    if (p) {
        volatile long& strong = p->strong;
        if (_InterlockedDecrement(&strong) == 0) {
            p->dispose();
            volatile long& weak = p->weak;
            if (_InterlockedDecrement(&weak) == 0)
                p->destroy();
        }
    }
}

__forceinline Buffer::~Buffer()
{
    if (first)
        free(first);
    first = 0;
    last = 0;
    limit = 0;
    free(allocation);
}

S::~S()
{
    if (connection)
        connection->disconnect(this);
}
