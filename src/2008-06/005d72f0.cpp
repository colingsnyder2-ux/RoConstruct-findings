// from server: 100% by king_originala
// roc 2008-06 005d72f0  unit: RBX::TimerService  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d72f0
//
// 005d72f0  6aff                 push -1
// 005d72f2  68d65c7d00           push 0x7d5cd6
// 005d72f7  64a100000000         mov eax, dword ptr fs:[0]
// 005d72fd  50                   push eax
// 005d72fe  64892500000000       mov dword ptr fs:[0], esp
// 005d7305  51                   push ecx
// 005d7306  56                   push esi
// 005d7307  57                   push edi
// 005d7308  8bf9                 mov edi, ecx
// 005d730a  897c2408             mov dword ptr [esp + 8], edi
// 005d730e  8d8f3c010000         lea ecx, [edi + 0x13c]
// 005d7314  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005d731c  e85ffdffff           call 0x5d7080
// 005d7321  8bb738010000         mov esi, dword ptr [edi + 0x138]
// 005d7327  c644241400           mov byte ptr [esp + 0x14], 0
// 005d732c  85f6                 test esi, esi
// 005d732e  742a                 je 0x5d735a
// 005d7330  8d4604               lea eax, [esi + 4]
// 005d7333  83c9ff               or ecx, 0xffffffff
// 005d7336  f00fc108             lock xadd dword ptr [eax], ecx
// 005d733a  751e                 jne 0x5d735a
// 005d733c  8b16                 mov edx, dword ptr [esi]
// 005d733e  8b4204               mov eax, dword ptr [edx + 4]
// 005d7341  8bce                 mov ecx, esi
// 005d7343  ffd0                 call eax
// 005d7345  8d4e08               lea ecx, [esi + 8]
// 005d7348  83caff               or edx, 0xffffffff
// 005d734b  f00fc111             lock xadd dword ptr [ecx], edx
// 005d734f  7509                 jne 0x5d735a
// 005d7351  8b06                 mov eax, dword ptr [esi]
// 005d7353  8b5008               mov edx, dword ptr [eax + 8]
// 005d7356  8bce                 mov ecx, esi
// 005d7358  ffd2                 call edx
// 005d735a  8bcf                 mov ecx, edi
// 005d735c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d7364  e8f7f5ffff           call 0x5d6960
// 005d7369  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d736d  5f                   pop edi
// 005d736e  5e                   pop esi
// 005d736f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d7376  83c410               add esp, 0x10
// 005d7379  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct ControlBlock {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct SharedMember {
    void* object;
    ControlBlock* control;
    ~SharedMember();
};

inline SharedMember::~SharedMember()
{
    ControlBlock* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct ListMember {
    unsigned char storage[24];
    ~ListMember();
};

struct Base {
    unsigned char storage[0x134];
    ~Base();
};

struct TimerService : Base {
    SharedMember shared;
    ListMember timers;
    ~TimerService();
};

TimerService::~TimerService()
{
}
