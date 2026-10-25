// from server: 100% by king_originala
// roc 2008-06 00457970  unit: RBX::VInstance::?$MarshaledListener  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457970
//
// 00457970  51                   push ecx
// 00457971  56                   push esi
// 00457972  57                   push edi
// 00457973  6a18                 push 0x18
// 00457975  8bf9                 mov edi, ecx
// 00457977  e8a48f2400           call 0x6a0920
// 0045797c  8bf0                 mov esi, eax
// 0045797e  83c404               add esp, 4
// 00457981  85f6                 test esi, esi
// 00457983  7424                 je 0x4579a9
// 00457985  83ec08               sub esp, 8
// 00457988  8d44241c             lea eax, [esp + 0x1c]
// 0045798c  8bcc                 mov ecx, esp
// 0045798e  89642410             mov dword ptr [esp + 0x10], esp
// 00457992  50                   push eax
// 00457993  e8589dfbff           call 0x4116f0
// 00457998  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0045799c  51                   push ecx
// 0045799d  57                   push edi
// 0045799e  8bce                 mov ecx, esi
// 004579a0  e84bfaffff           call 0x4573f0
// 004579a5  8bf0                 mov esi, eax
// 004579a7  eb02                 jmp 0x4579ab
// 004579a9  33f6                 xor esi, esi
// 004579ab  8d542410             lea edx, [esp + 0x10]
// 004579af  52                   push edx
// 004579b0  8d4f04               lea ecx, [edi + 4]
// 004579b3  89742414             mov dword ptr [esp + 0x14], esi
// 004579b7  e8e499fcff           call 0x4213a0
// 004579bc  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004579bf  56                   push esi
// 004579c0  e88baffdff           call 0x432950
// 004579c5  8b742418             mov esi, dword ptr [esp + 0x18]
// 004579c9  85f6                 test esi, esi
// 004579cb  742a                 je 0x4579f7
// 004579cd  8d4604               lea eax, [esi + 4]
// 004579d0  83c9ff               or ecx, 0xffffffff
// 004579d3  f00fc108             lock xadd dword ptr [eax], ecx
// 004579d7  751e                 jne 0x4579f7
// 004579d9  8b16                 mov edx, dword ptr [esi]
// 004579db  8b4204               mov eax, dword ptr [edx + 4]
// 004579de  8bce                 mov ecx, esi
// 004579e0  ffd0                 call eax
// 004579e2  8d4e08               lea ecx, [esi + 8]
// 004579e5  83caff               or edx, 0xffffffff
// 004579e8  f00fc111             lock xadd dword ptr [ecx], edx
// 004579ec  7509                 jne 0x4579f7
// 004579ee  8b06                 mov eax, dword ptr [esi]
// 004579f0  8b5008               mov edx, dword ptr [eax + 8]
// 004579f3  8bce                 mov ecx, esi
// 004579f5  ffd2                 call edx
// 004579f7  5f                   pop edi
// 004579f8  5e                   pop esi
// 004579f9  59                   pop ecx
// 004579fa  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

void* __cdecl operator new(unsigned int) throw();

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release() throw();
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared&) throw();
    ~Shared() throw();
};

struct S;

struct Node
{
    unsigned char storage[24];

    Node(S*, int, Shared) throw();
};

struct Container
{
    unsigned char storage[28];

    void insert(Node* const&) throw();
};

struct Dispatcher
{
    void* field0;
    void* field4;

    void method(int) throw();
};

struct S
{
    void* field0;
    Container pending;
    Dispatcher* dispatcher;

    void method(int, Shared) throw();
};

__forceinline void Control::release() throw()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

__forceinline Shared::~Shared() throw()
{
    if (control)
        control->release();
}

void S::method(int argument, Shared value) throw()
{
    Node* node = new Node(this, argument, value);
    argument = reinterpret_cast<int>(node);
    pending.insert(reinterpret_cast<Node* const&>(argument));
    dispatcher->method(reinterpret_cast<int>(node));
}
