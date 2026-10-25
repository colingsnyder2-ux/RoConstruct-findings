// from server: 100% by king_originala
// roc 2008-06 0042b5f0  unit: EventHandler  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b5f0
//
// 0042b5f0  6aff                 push -1
// 0042b5f2  6828397c00           push 0x7c3928
// 0042b5f7  64a100000000         mov eax, dword ptr fs:[0]
// 0042b5fd  50                   push eax
// 0042b5fe  64892500000000       mov dword ptr fs:[0], esp
// 0042b605  83ec10               sub esp, 0x10
// 0042b608  56                   push esi
// 0042b609  8bf1                 mov esi, ecx
// 0042b60b  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0042b611  83ec08               sub esp, 8
// 0042b614  8bcc                 mov ecx, esp
// 0042b616  8901                 mov dword ptr [ecx], eax
// 0042b618  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0042b61e  8964240c             mov dword ptr [esp + 0xc], esp
// 0042b622  894104               mov dword ptr [ecx + 4], eax
// 0042b625  85c0                 test eax, eax
// 0042b627  740c                 je 0x42b635
// 0042b629  83c004               add eax, 4
// 0042b62c  b901000000           mov ecx, 1
// 0042b631  f00fc108             lock xadd dword ptr [eax], ecx
// 0042b635  8d4c2410             lea ecx, [esp + 0x10]
// 0042b639  e80265feff           call 0x411b40
// 0042b63e  8d8e10010000         lea ecx, [esi + 0x110]
// 0042b644  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0042b64c  e83ffdffff           call 0x42b390
// 0042b651  8d4c2408             lea ecx, [esp + 8]
// 0042b655  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0042b65d  e85ebd1400           call 0x5773c0
// 0042b662  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042b666  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b66d  5e                   pop esi
// 0042b66e  83c41c               add esp, 0x1c
// 0042b671  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    unsigned int reserved;
    volatile long references;
};

struct Shared {
    void* pointer;
    Control* control;

    __forceinline Shared(const Shared& other);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control) {
        volatile long* references = &control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(references, 1);
    }
}

struct Guard {
    void* pointer;
    Control* control;
    unsigned char padding[4];

    Guard(Shared value);
    ~Guard();
};

struct Container {
    void clear();
};

struct EventHandler {
    unsigned char padding[0x100];
    Shared shared;
    unsigned char gap[8];
    Container container;

    void f();
};

void EventHandler::f()
{
    Guard guard(shared);
    container.clear();
}
