// from server: 100% by colin
// roc 2008-06 00457860  unit: RBX::VInstance::?$MarshaledListener  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457860
//
// 00457860  51                   push ecx
// 00457861  56                   push esi
// 00457862  57                   push edi
// 00457863  6a18                 push 0x18
// 00457865  8bf9                 mov edi, ecx
// 00457867  e8b4902400           call 0x6a0920
// 0045786c  8bf0                 mov esi, eax
// 0045786e  83c404               add esp, 4
// 00457871  85f6                 test esi, esi
// 00457873  7424                 je 0x457899
// 00457875  83ec08               sub esp, 8
// 00457878  8d44241c             lea eax, [esp + 0x1c]
// 0045787c  8bcc                 mov ecx, esp
// 0045787e  89642410             mov dword ptr [esp + 0x10], esp
// 00457882  50                   push eax
// 00457883  e8689efbff           call 0x4116f0
// 00457888  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0045788c  51                   push ecx
// 0045788d  57                   push edi
// 0045788e  8bce                 mov ecx, esi
// 00457890  e8dbf9ffff           call 0x457270
// 00457895  8bf0                 mov esi, eax
// 00457897  eb02                 jmp 0x45789b
// 00457899  33f6                 xor esi, esi
// 0045789b  8d542410             lea edx, [esp + 0x10]
// 0045789f  52                   push edx
// 004578a0  8d4f04               lea ecx, [edi + 4]
// 004578a3  89742414             mov dword ptr [esp + 0x14], esi
// 004578a7  e8f49afcff           call 0x4213a0
// 004578ac  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004578af  56                   push esi
// 004578b0  e89bb0fdff           call 0x432950
// 004578b5  8b742418             mov esi, dword ptr [esp + 0x18]
// 004578b9  85f6                 test esi, esi
// 004578bb  742a                 je 0x4578e7
// 004578bd  8d4604               lea eax, [esi + 4]
// 004578c0  83c9ff               or ecx, 0xffffffff
// 004578c3  f00fc108             lock xadd dword ptr [eax], ecx
// 004578c7  751e                 jne 0x4578e7
// 004578c9  8b16                 mov edx, dword ptr [esi]
// 004578cb  8b4204               mov eax, dword ptr [edx + 4]
// 004578ce  8bce                 mov ecx, esi
// 004578d0  ffd0                 call eax
// 004578d2  8d4e08               lea ecx, [esi + 8]
// 004578d5  83caff               or edx, 0xffffffff
// 004578d8  f00fc111             lock xadd dword ptr [ecx], edx
// 004578dc  7509                 jne 0x4578e7
// 004578de  8b06                 mov eax, dword ptr [esi]
// 004578e0  8b5008               mov edx, dword ptr [eax + 8]
// 004578e3  8bce                 mov ecx, esi
// 004578e5  ffd2                 call edx
// 004578e7  5f                   pop edi
// 004578e8  5e                   pop esi
// 004578e9  59                   pop ecx
// 004578ea  c20c00               ret 0xc

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
