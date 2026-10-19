// from server: 87% by colin
// from server: 80% by king_originala
// roc 2008-06 004cbb60  unit: RBX::VInstance::?$NonFactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cbb60
//
// 004cbb60  6aff                 push -1
// 004cbb62  6868917d00           push 0x7d9168
// 004cbb67  64a100000000         mov eax, dword ptr fs:[0]
// 004cbb6d  50                   push eax
// 004cbb6e  64892500000000       mov dword ptr fs:[0], esp
// 004cbb75  83ec08               sub esp, 8
// 004cbb78  56                   push esi
// 004cbb79  8bf1                 mov esi, ecx
// 004cbb7b  8d4604               lea eax, [esi + 4]
// 004cbb7e  50                   push eax
// 004cbb7f  8d4c2408             lea ecx, [esp + 8]
// 004cbb83  51                   push ecx
// 004cbb84  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cbb88  e833f8ffff           call 0x4cb3c0
// 004cbb8d  8b10                 mov edx, dword ptr [eax]
// 004cbb8f  83ec08               sub esp, 8
// 004cbb92  8bcc                 mov ecx, esp
// 004cbb94  8911                 mov dword ptr [ecx], edx
// 004cbb96  8b4004               mov eax, dword ptr [eax + 4]
// 004cbb99  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004cbba1  8964242c             mov dword ptr [esp + 0x2c], esp
// 004cbba5  894104               mov dword ptr [ecx + 4], eax
// 004cbba8  85c0                 test eax, eax
// 004cbbaa  740c                 je 0x4cbbb8
// 004cbbac  83c004               add eax, 4
// 004cbbaf  b901000000           mov ecx, 1
// 004cbbb4  f00fc108             lock xadd dword ptr [eax], ecx
// 004cbbb8  8b16                 mov edx, dword ptr [esi]
// 004cbbba  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004cbbbe  52                   push edx
// 004cbbbf  e85cb80b00           call 0x587420
// 004cbbc4  8b742408             mov esi, dword ptr [esp + 8]
// 004cbbc8  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004cbbd0  85f6                 test esi, esi
// 004cbbd2  742a                 je 0x4cbbfe
// 004cbbd4  8d4604               lea eax, [esi + 4]
// 004cbbd7  83c9ff               or ecx, 0xffffffff
// 004cbbda  f00fc108             lock xadd dword ptr [eax], ecx
// 004cbbde  751e                 jne 0x4cbbfe
// 004cbbe0  8b16                 mov edx, dword ptr [esi]
// 004cbbe2  8b4204               mov eax, dword ptr [edx + 4]
// 004cbbe5  8bce                 mov ecx, esi
// 004cbbe7  ffd0                 call eax
// 004cbbe9  8d4e08               lea ecx, [esi + 8]
// 004cbbec  83caff               or edx, 0xffffffff
// 004cbbef  f00fc111             lock xadd dword ptr [ecx], edx
// 004cbbf3  7509                 jne 0x4cbbfe
// 004cbbf5  8b06                 mov eax, dword ptr [esi]
// 004cbbf7  8b5008               mov edx, dword ptr [eax + 8]
// 004cbbfa  8bce                 mov ecx, esi
// 004cbbfc  ffd2                 call edx
// 004cbbfe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cbc02  64890d00000000       mov dword ptr fs:[0], ecx
// 004cbc09  5e                   pop esi
// 004cbc0a  83c414               add esp, 0x14
// 004cbc0d  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

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

    __forceinline Shared() {}

    __forceinline Shared(const Shared& other)
        : object(other.object), control(other.control)
    {
        if (control)
            _InterlockedIncrement(&control->strong);
    }

    __forceinline ~Shared()
    {
        Control* p = control;
        if (p && _InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
};

struct Source {
    Shared* f(void* result, Source* source);
};

struct Receiver {
    void accept(void* key, Shared value);
};

struct S {
    void* key;
    Source source;
    void f(void* unused1, Receiver* receiver, Source* owner, void* unused2);
};

void S::f(void*, Receiver* receiver, Source* owner, void*)
{
    Shared temporary;
    receiver->accept(key, *owner->f(&temporary, &source));
}
