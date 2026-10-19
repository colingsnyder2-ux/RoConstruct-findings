// from server: 92% by colin
// from server: 90% by colin
// roc 2008-06 0057b1e0  unit: RBX::DataModel  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b1e0
//
// 0057b1e0  6aff                 push -1
// 0057b1e2  6880987d00           push 0x7d9880
// 0057b1e7  64a100000000         mov eax, dword ptr fs:[0]
// 0057b1ed  50                   push eax
// 0057b1ee  64892500000000       mov dword ptr fs:[0], esp
// 0057b1f5  83ec28               sub esp, 0x28
// 0057b1f8  56                   push esi
// 0057b1f9  833900               cmp dword ptr [ecx], 0
// 0057b1fc  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0057b204  7514                 jne 0x57b21a
// 0057b206  8d4c2404             lea ecx, [esp + 4]
// 0057b20a  e8e1ece8ff           call 0x409ef0
// 0057b20f  50                   push eax
// 0057b210  c644243801           mov byte ptr [esp + 0x38], 1
// 0057b215  e8e6f2e8ff           call 0x40a500
// 0057b21a  8b442444             mov eax, dword ptr [esp + 0x44]
// 0057b21e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0057b222  50                   push eax
// 0057b223  83ec08               sub esp, 8
// 0057b226  8bc4                 mov eax, esp
// 0057b228  8910                 mov dword ptr [eax], edx
// 0057b22a  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0057b22e  895004               mov dword ptr [eax + 4], edx
// 0057b231  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0057b235  89642450             mov dword ptr [esp + 0x50], esp
// 0057b239  85c0                 test eax, eax
// 0057b23b  740c                 je 0x57b249
// 0057b23d  83c004               add eax, 4
// 0057b240  ba01000000           mov edx, 1
// 0057b245  f00fc110             lock xadd dword ptr [eax], edx
// 0057b249  8b01                 mov eax, dword ptr [ecx]
// 0057b24b  83c108               add ecx, 8
// 0057b24e  51                   push ecx
// 0057b24f  8b4804               mov ecx, dword ptr [eax + 4]
// 0057b252  ffd1                 call ecx
// 0057b254  8b742450             mov esi, dword ptr [esp + 0x50]
// 0057b258  83c410               add esp, 0x10
// 0057b25b  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0057b263  85f6                 test esi, esi
// 0057b265  742a                 je 0x57b291
// 0057b267  8d5604               lea edx, [esi + 4]
// 0057b26a  83c8ff               or eax, 0xffffffff
// 0057b26d  f00fc102             lock xadd dword ptr [edx], eax
// 0057b271  751e                 jne 0x57b291
// 0057b273  8b16                 mov edx, dword ptr [esi]
// 0057b275  8b4204               mov eax, dword ptr [edx + 4]
// 0057b278  8bce                 mov ecx, esi
// 0057b27a  ffd0                 call eax
// 0057b27c  8d4e08               lea ecx, [esi + 8]
// 0057b27f  83caff               or edx, 0xffffffff
// 0057b282  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b286  7509                 jne 0x57b291
// 0057b288  8b06                 mov eax, dword ptr [esi]
// 0057b28a  8b5008               mov edx, dword ptr [eax + 8]
// 0057b28d  8bce                 mov ecx, esi
// 0057b28f  ffd2                 call edx
// 0057b291  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057b295  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b29c  5e                   pop esi
// 0057b29d  83c434               add esp, 0x34
// 0057b2a0  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Error {
    char storage[40];
    Error();
    ~Error();
};

__declspec(noreturn) void __cdecl raiseError(const Error&);

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

    Shared(const Shared& other);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Table {
    void* unused;
    void (__cdecl *invoke)(void*, Shared, int);
};

struct S {
    Table* table;
    unsigned int reserved;
    char context[1];

    void f(Shared value, int argument);
};

void S::f(Shared value, int argument) {
    if (!table)
        raiseError(Error());
    table->invoke(context, value, argument);
}
