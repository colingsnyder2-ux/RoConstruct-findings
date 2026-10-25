// from server: 100% by king_originala
// roc 2008-06 005d5c90  unit: RBX::VTeams::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5c90
//
// 005d5c90  6aff                 push -1
// 005d5c92  68785b7d00           push 0x7d5b78
// 005d5c97  64a100000000         mov eax, dword ptr fs:[0]
// 005d5c9d  50                   push eax
// 005d5c9e  64892500000000       mov dword ptr fs:[0], esp
// 005d5ca5  51                   push ecx
// 005d5ca6  56                   push esi
// 005d5ca7  8bf1                 mov esi, ecx
// 005d5ca9  57                   push edi
// 005d5caa  89742408             mov dword ptr [esp + 8], esi
// 005d5cae  c70654ce8300         mov dword ptr [esi], 0x83ce54
// 005d5cb4  c7461048ce8300       mov dword ptr [esi + 0x10], 0x83ce48
// 005d5cbb  c7461440ce8300       mov dword ptr [esi + 0x14], 0x83ce40
// 005d5cc2  c7462038ce8300       mov dword ptr [esi + 0x20], 0x83ce38
// 005d5cc9  c7462428ce8300       mov dword ptr [esi + 0x24], 0x83ce28
// 005d5cd0  c7464418ce8300       mov dword ptr [esi + 0x44], 0x83ce18
// 005d5cd7  c7466408ce8300       mov dword ptr [esi + 0x64], 0x83ce08
// 005d5cde  c78684000000f8cd8300 mov dword ptr [esi + 0x84], 0x83cdf8
// 005d5ce8  c786a4000000e8cd8300 mov dword ptr [esi + 0xa4], 0x83cde8
// 005d5cf2  c786c4000000d8cd8300 mov dword ptr [esi + 0xc4], 0x83cdd8
// 005d5cfc  8bbe34010000         mov edi, dword ptr [esi + 0x134]
// 005d5d02  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d5d0a  85ff                 test edi, edi
// 005d5d0c  742a                 je 0x5d5d38
// 005d5d0e  8d4704               lea eax, [edi + 4]
// 005d5d11  83c9ff               or ecx, 0xffffffff
// 005d5d14  f00fc108             lock xadd dword ptr [eax], ecx
// 005d5d18  751e                 jne 0x5d5d38
// 005d5d1a  8b17                 mov edx, dword ptr [edi]
// 005d5d1c  8b4204               mov eax, dword ptr [edx + 4]
// 005d5d1f  8bcf                 mov ecx, edi
// 005d5d21  ffd0                 call eax
// 005d5d23  8d4f08               lea ecx, [edi + 8]
// 005d5d26  83caff               or edx, 0xffffffff
// 005d5d29  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5d2d  7509                 jne 0x5d5d38
// 005d5d2f  8b07                 mov eax, dword ptr [edi]
// 005d5d31  8b5008               mov edx, dword ptr [eax + 8]
// 005d5d34  8bcf                 mov ecx, edi
// 005d5d36  ffd2                 call edx
// 005d5d38  8bce                 mov ecx, esi
// 005d5d3a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d5d42  e839feffff           call 0x5d5b80
// 005d5d47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d5d4b  5f                   pop edi
// 005d5d4c  5e                   pop esi
// 005d5d4d  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5d54  83c410               add esp, 0x10
// 005d5d57  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Base {
    volatile unsigned long words[76];
    ~Base();
};

struct Shared {
    void* object;
    Control* volatile control;
    ~Shared();
};

struct S : Base {
    Shared shared;
    ~S();
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

S::~S()
{
    words[0] = 0x0083ce54;
    words[4] = 0x0083ce48;
    words[5] = 0x0083ce40;
    words[8] = 0x0083ce38;
    words[9] = 0x0083ce28;
    words[17] = 0x0083ce18;
    words[25] = 0x0083ce08;
    words[33] = 0x0083cdf8;
    words[41] = 0x0083cde8;
    words[49] = 0x0083cdd8;
}
