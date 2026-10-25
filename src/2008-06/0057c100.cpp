// from server: 100% by king_originala
// roc 2008-06 0057c100  unit: RBX::VInstance::?$SignalDesc  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c100
//
// 0057c100  6aff                 push -1
// 0057c102  68710d7d00           push 0x7d0d71
// 0057c107  64a100000000         mov eax, dword ptr fs:[0]
// 0057c10d  50                   push eax
// 0057c10e  64892500000000       mov dword ptr fs:[0], esp
// 0057c115  83ec14               sub esp, 0x14
// 0057c118  53                   push ebx
// 0057c119  33db                 xor ebx, ebx
// 0057c11b  56                   push esi
// 0057c11c  895c2408             mov dword ptr [esp + 8], ebx
// 0057c120  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0057c124  56                   push esi
// 0057c125  895c2428             mov dword ptr [esp + 0x28], ebx
// 0057c129  e852ffffff           call 0x57c080
// 0057c12e  8b06                 mov eax, dword ptr [esi]
// 0057c130  51                   push ecx
// 0057c131  8bcc                 mov ecx, esp
// 0057c133  8901                 mov dword ptr [ecx], eax
// 0057c135  8b4604               mov eax, dword ptr [esi + 4]
// 0057c138  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0057c13c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0057c144  89642414             mov dword ptr [esp + 0x14], esp
// 0057c148  894104               mov dword ptr [ecx + 4], eax
// 0057c14b  3bc3                 cmp eax, ebx
// 0057c14d  740c                 je 0x57c15b
// 0057c14f  83c004               add eax, 4
// 0057c152  b901000000           mov ecx, 1
// 0057c157  f00fc108             lock xadd dword ptr [eax], ecx
// 0057c15b  8d4c2418             lea ecx, [esp + 0x18]
// 0057c15f  e8dc59e9ff           call 0x411b40
// 0057c164  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057c168  8b0e                 mov ecx, dword ptr [esi]
// 0057c16a  52                   push edx
// 0057c16b  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0057c173  e878e8ffff           call 0x57a9f0
// 0057c178  8b06                 mov eax, dword ptr [esi]
// 0057c17a  8d4c2410             lea ecx, [esp + 0x10]
// 0057c17e  c6805902000001       mov byte ptr [eax + 0x259], 1
// 0057c185  885c2424             mov byte ptr [esp + 0x24], bl
// 0057c189  e832b2ffff           call 0x5773c0
// 0057c18e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057c192  8bc6                 mov eax, esi
// 0057c194  5e                   pop esi
// 0057c195  64890d00000000       mov dword ptr fs:[0], ecx
// 0057c19c  5b                   pop ebx
// 0057c19d  83c420               add esp, 0x20
// 0057c1a0  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long reserved;
    volatile long references;

    void retain();
};

__forceinline void Control::retain()
{
    volatile long* count = &references;
    _ReadWriteBarrier();
    _InterlockedExchangeAdd(count, 1);
}

struct Object {
    char reserved[0x259];
    bool flag;

    void update(void*);
};

struct Shared {
    Object* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->retain();
}

struct Guard {
    Object* object;
    Control* control;
    long reserved;

    Guard(Shared);
    ~Guard();
};

Shared acquire();

Shared function(void* argument)
{
    Shared result = acquire();
    Guard guard(result);
    result.object->update(argument);
    result.object->flag = true;
    return result;
}
