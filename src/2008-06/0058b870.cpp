// from server: 80% by colin
// from server: 78% by king_originala
// roc 2008-06 0058b870  unit: RBX::ChangeHistoryService  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b870
//
// 0058b870  6aff                 push -1
// 0058b872  6868617c00           push 0x7c6168
// 0058b877  64a100000000         mov eax, dword ptr fs:[0]
// 0058b87d  50                   push eax
// 0058b87e  64892500000000       mov dword ptr fs:[0], esp
// 0058b885  51                   push ecx
// 0058b886  56                   push esi
// 0058b887  8bf1                 mov esi, ecx
// 0058b889  80be6401000000       cmp byte ptr [esi + 0x164], 0
// 0058b890  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058b898  7454                 je 0x58b8ee
// 0058b89a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058b89e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0058b8a6  85f6                 test esi, esi
// 0058b8a8  0f84a1000000         je 0x58b94f
// 0058b8ae  8d4604               lea eax, [esi + 4]
// 0058b8b1  83c9ff               or ecx, 0xffffffff
// 0058b8b4  f00fc108             lock xadd dword ptr [eax], ecx
// 0058b8b8  0f8591000000         jne 0x58b94f
// 0058b8be  8b16                 mov edx, dword ptr [esi]
// 0058b8c0  8b4204               mov eax, dword ptr [edx + 4]
// 0058b8c3  8bce                 mov ecx, esi
// 0058b8c5  ffd0                 call eax
// 0058b8c7  8d4e08               lea ecx, [esi + 8]
// 0058b8ca  83caff               or edx, 0xffffffff
// 0058b8cd  f00fc111             lock xadd dword ptr [ecx], edx
// 0058b8d1  757c                 jne 0x58b94f
// 0058b8d3  8b06                 mov eax, dword ptr [esi]
// 0058b8d5  8b5008               mov edx, dword ptr [eax + 8]
// 0058b8d8  8bce                 mov ecx, esi
// 0058b8da  ffd2                 call edx
// 0058b8dc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b8e0  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b8e7  5e                   pop esi
// 0058b8e8  83c410               add esp, 0x10
// 0058b8eb  c20800               ret 8
// 0058b8ee  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058b8f2  3bc6                 cmp eax, esi
// 0058b8f4  74a4                 je 0x58b89a
// 0058b8f6  6a00                 push 0
// 0058b8f8  6844989200           push 0x929844
// 0058b8fd  687c909200           push 0x92907c
// 0058b902  6a00                 push 0
// 0058b904  50                   push eax
// 0058b905  e8bc5e1100           call 0x6a17c6
// 0058b90a  83c414               add esp, 0x14
// 0058b90d  85c0                 test eax, eax
// 0058b90f  752d                 jne 0x58b93e
// 0058b911  398634010000         cmp dword ptr [esi + 0x134], eax
// 0058b917  7425                 je 0x58b93e
// 0058b919  83ec08               sub esp, 8
// 0058b91c  8d442420             lea eax, [esp + 0x20]
// 0058b920  8bcc                 mov ecx, esp
// 0058b922  8964240c             mov dword ptr [esp + 0xc], esp
// 0058b926  50                   push eax
// 0058b927  e8c45de8ff           call 0x4116f0
// 0058b92c  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0058b932  e889fdffff           call 0x58b6c0
// 0058b937  8bc8                 mov ecx, eax
// 0058b939  e8f2dbffff           call 0x589530
// 0058b93e  8d4c2418             lea ecx, [esp + 0x18]
// 0058b942  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0058b94a  e8114d0700           call 0x600660
// 0058b94f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b953  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b95a  5e                   pop esi
// 0058b95b  83c410               add esp, 0x10
// 0058b95e  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern unsigned char instanceType[];
extern unsigned char serviceType[];

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Result {
    void finish();
};

struct History {
    Result* process(Shared);
};

struct S {
    unsigned char padding[0x134];
    History* history;
    unsigned char padding2[0x2c];
    bool blocked;

    void f(Shared);
};

void S::f(Shared value)
{
    if (blocked)
        return;

    if (value.object == this)
        return;

    if (!__RTDynamicCast(value.object, 0, instanceType, serviceType, 0)
        && history)
        history->process(value)->finish();
}
