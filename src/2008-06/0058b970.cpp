// from server: 80% by king_originala
// roc 2008-06 0058b970  unit: RBX::ChangeHistoryService  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b970
//
// 0058b970  6aff                 push -1
// 0058b972  6868617c00           push 0x7c6168
// 0058b977  64a100000000         mov eax, dword ptr fs:[0]
// 0058b97d  50                   push eax
// 0058b97e  64892500000000       mov dword ptr fs:[0], esp
// 0058b985  51                   push ecx
// 0058b986  56                   push esi
// 0058b987  8bf1                 mov esi, ecx
// 0058b989  80be6401000000       cmp byte ptr [esi + 0x164], 0
// 0058b990  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0058b998  7454                 je 0x58b9ee
// 0058b99a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058b99e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0058b9a6  85f6                 test esi, esi
// 0058b9a8  0f84a1000000         je 0x58ba4f
// 0058b9ae  8d4604               lea eax, [esi + 4]
// 0058b9b1  83c9ff               or ecx, 0xffffffff
// 0058b9b4  f00fc108             lock xadd dword ptr [eax], ecx
// 0058b9b8  0f8591000000         jne 0x58ba4f
// 0058b9be  8b16                 mov edx, dword ptr [esi]
// 0058b9c0  8b4204               mov eax, dword ptr [edx + 4]
// 0058b9c3  8bce                 mov ecx, esi
// 0058b9c5  ffd0                 call eax
// 0058b9c7  8d4e08               lea ecx, [esi + 8]
// 0058b9ca  83caff               or edx, 0xffffffff
// 0058b9cd  f00fc111             lock xadd dword ptr [ecx], edx
// 0058b9d1  757c                 jne 0x58ba4f
// 0058b9d3  8b06                 mov eax, dword ptr [esi]
// 0058b9d5  8b5008               mov edx, dword ptr [eax + 8]
// 0058b9d8  8bce                 mov ecx, esi
// 0058b9da  ffd2                 call edx
// 0058b9dc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058b9e0  64890d00000000       mov dword ptr fs:[0], ecx
// 0058b9e7  5e                   pop esi
// 0058b9e8  83c410               add esp, 0x10
// 0058b9eb  c20800               ret 8
// 0058b9ee  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058b9f2  3bc6                 cmp eax, esi
// 0058b9f4  74a4                 je 0x58b99a
// 0058b9f6  6a00                 push 0
// 0058b9f8  6844989200           push 0x929844
// 0058b9fd  687c909200           push 0x92907c
// 0058ba02  6a00                 push 0
// 0058ba04  50                   push eax
// 0058ba05  e8bc5d1100           call 0x6a17c6
// 0058ba0a  83c414               add esp, 0x14
// 0058ba0d  85c0                 test eax, eax
// 0058ba0f  752d                 jne 0x58ba3e
// 0058ba11  398634010000         cmp dword ptr [esi + 0x134], eax
// 0058ba17  7425                 je 0x58ba3e
// 0058ba19  83ec08               sub esp, 8
// 0058ba1c  8d442420             lea eax, [esp + 0x20]
// 0058ba20  8bcc                 mov ecx, esp
// 0058ba22  8964240c             mov dword ptr [esp + 0xc], esp
// 0058ba26  50                   push eax
// 0058ba27  e8c45ce8ff           call 0x4116f0
// 0058ba2c  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0058ba32  e889fcffff           call 0x58b6c0
// 0058ba37  8bc8                 mov ecx, eax
// 0058ba39  e822d5ffff           call 0x588f60
// 0058ba3e  8d4c2418             lea ecx, [esp + 0x18]
// 0058ba42  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0058ba4a  e8114c0700           call 0x600660
// 0058ba4f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058ba53  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ba5a  5e                   pop esi
// 0058ba5b  83c410               add esp, 0x10
// 0058ba5e  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Pointer {
    void* object;
    Control* control;

    Pointer(const Pointer&);
    ~Pointer();
};

inline Pointer::~Pointer()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct ResetValue {
    void reset();
    unsigned long words[2];
};

struct History {
    ResetValue* find(Pointer);
};

extern char instanceType[];
extern char serviceType[];
extern "C" void* __cdecl castObject(
    void*, long, const void*, const void*, int);

struct Service {
    char padding0[0x134];
    History* history;
    char padding1[0x2C];
    bool disabled;

    void changed(Pointer);
};

void Service::changed(Pointer value)
{
    if (disabled)
        return;

    if (value.object == this)
        return;

    if (!castObject(value.object, 0, instanceType, serviceType, 0)
        && history)
        history->find(value)->reset();
}
