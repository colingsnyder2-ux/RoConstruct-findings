// from server: 100% by king_originala
// roc 2008-06 004e80a0  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e80a0
//
// 004e80a0  6aff                 push -1
// 004e80a2  6818047c00           push 0x7c0418
// 004e80a7  64a100000000         mov eax, dword ptr fs:[0]
// 004e80ad  50                   push eax
// 004e80ae  64892500000000       mov dword ptr fs:[0], esp
// 004e80b5  51                   push ecx
// 004e80b6  56                   push esi
// 004e80b7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e80bb  83ec08               sub esp, 8
// 004e80be  8bc4                 mov eax, esp
// 004e80c0  8908                 mov dword ptr [eax], ecx
// 004e80c2  8b542428             mov edx, dword ptr [esp + 0x28]
// 004e80c6  895004               mov dword ptr [eax + 4], edx
// 004e80c9  8b442428             mov eax, dword ptr [esp + 0x28]
// 004e80cd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004e80d5  8964240c             mov dword ptr [esp + 0xc], esp
// 004e80d9  85c0                 test eax, eax
// 004e80db  740c                 je 0x4e80e9
// 004e80dd  83c004               add eax, 4
// 004e80e0  b901000000           mov ecx, 1
// 004e80e5  f00fc108             lock xadd dword ptr [eax], ecx
// 004e80e9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004e80ed  8b5104               mov edx, dword ptr [ecx + 4]
// 004e80f0  52                   push edx
// 004e80f1  e80ae2ffff           call 0x4e6300
// 004e80f6  8b742420             mov esi, dword ptr [esp + 0x20]
// 004e80fa  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004e8102  85f6                 test esi, esi
// 004e8104  742a                 je 0x4e8130
// 004e8106  8d4604               lea eax, [esi + 4]
// 004e8109  83c9ff               or ecx, 0xffffffff
// 004e810c  f00fc108             lock xadd dword ptr [eax], ecx
// 004e8110  751e                 jne 0x4e8130
// 004e8112  8b16                 mov edx, dword ptr [esi]
// 004e8114  8b4204               mov eax, dword ptr [edx + 4]
// 004e8117  8bce                 mov ecx, esi
// 004e8119  ffd0                 call eax
// 004e811b  8d4e08               lea ecx, [esi + 8]
// 004e811e  83caff               or edx, 0xffffffff
// 004e8121  f00fc111             lock xadd dword ptr [ecx], edx
// 004e8125  7509                 jne 0x4e8130
// 004e8127  8b06                 mov eax, dword ptr [esi]
// 004e8129  8b5008               mov edx, dword ptr [eax + 8]
// 004e812c  8bce                 mov ecx, esi
// 004e812e  ffd2                 call edx
// 004e8130  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e8134  64890d00000000       mov dword ptr fs:[0], ecx
// 004e813b  5e                   pop esi
// 004e813c  83c410               add esp, 0x10
// 004e813f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Holder {
    void* first;
    void* second;
    void invoke(void*, Shared);
};

void function(Holder* holder, Shared value)
{
    holder->invoke(holder->second, value);
}
