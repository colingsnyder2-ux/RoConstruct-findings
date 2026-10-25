// from server: 100% by king_originala
// roc 2008-06 005cdbf0  unit: RBX::Camera  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cdbf0
//
// 005cdbf0  6aff                 push -1
// 005cdbf2  68a6547d00           push 0x7d54a6
// 005cdbf7  64a100000000         mov eax, dword ptr fs:[0]
// 005cdbfd  50                   push eax
// 005cdbfe  64892500000000       mov dword ptr fs:[0], esp
// 005cdc05  51                   push ecx
// 005cdc06  56                   push esi
// 005cdc07  8bf1                 mov esi, ecx
// 005cdc09  57                   push edi
// 005cdc0a  89742408             mov dword ptr [esp + 8], esi
// 005cdc0e  c70654a68300         mov dword ptr [esi], 0x83a654
// 005cdc14  c7461048a68300       mov dword ptr [esi + 0x10], 0x83a648
// 005cdc1b  c7461440a68300       mov dword ptr [esi + 0x14], 0x83a640
// 005cdc22  c7462038a68300       mov dword ptr [esi + 0x20], 0x83a638
// 005cdc29  c7462428a68300       mov dword ptr [esi + 0x24], 0x83a628
// 005cdc30  c7464418a68300       mov dword ptr [esi + 0x44], 0x83a618
// 005cdc37  c7466408a68300       mov dword ptr [esi + 0x64], 0x83a608
// 005cdc3e  c78684000000f8a58300 mov dword ptr [esi + 0x84], 0x83a5f8
// 005cdc48  c786a4000000e8a58300 mov dword ptr [esi + 0xa4], 0x83a5e8
// 005cdc52  c786c4000000d8a58300 mov dword ptr [esi + 0xc4], 0x83a5d8
// 005cdc5c  8bbee0010000         mov edi, dword ptr [esi + 0x1e0]
// 005cdc62  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005cdc6a  85ff                 test edi, edi
// 005cdc6c  742a                 je 0x5cdc98
// 005cdc6e  8d4704               lea eax, [edi + 4]
// 005cdc71  83c9ff               or ecx, 0xffffffff
// 005cdc74  f00fc108             lock xadd dword ptr [eax], ecx
// 005cdc78  751e                 jne 0x5cdc98
// 005cdc7a  8b17                 mov edx, dword ptr [edi]
// 005cdc7c  8b4204               mov eax, dword ptr [edx + 4]
// 005cdc7f  8bcf                 mov ecx, edi
// 005cdc81  ffd0                 call eax
// 005cdc83  8d4f08               lea ecx, [edi + 8]
// 005cdc86  83caff               or edx, 0xffffffff
// 005cdc89  f00fc111             lock xadd dword ptr [ecx], edx
// 005cdc8d  7509                 jne 0x5cdc98
// 005cdc8f  8b07                 mov eax, dword ptr [edi]
// 005cdc91  8b5008               mov edx, dword ptr [eax + 8]
// 005cdc94  8bcf                 mov ecx, edi
// 005cdc96  ffd2                 call edx
// 005cdc98  8d8e30010000         lea ecx, [esi + 0x130]
// 005cdc9e  c644241400           mov byte ptr [esp + 0x14], 0
// 005cdca3  e8f82af4ff           call 0x5107a0
// 005cdca8  8bce                 mov ecx, esi
// 005cdcaa  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005cdcb2  e869e4ffff           call 0x5cc120
// 005cdcb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cdcbb  5f                   pop edi
// 005cdcbc  5e                   pop esi
// 005cdcbd  64890d00000000       mov dword ptr fs:[0], ecx
// 005cdcc4  83c410               add esp, 0x10
// 005cdcc7  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* volatile control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Member {
    virtual ~Member();
};

struct Base {
    volatile unsigned long table0;
    char pad04[0x0c];
    volatile unsigned long table10;
    volatile unsigned long table14;
    char pad18[8];
    volatile unsigned long table20;
    volatile unsigned long table24;
    char pad28[0x1c];
    volatile unsigned long table44;
    char pad48[0x1c];
    volatile unsigned long table64;
    char pad68[0x1c];
    volatile unsigned long table84;
    char pad88[0x1c];
    volatile unsigned long tableA4;
    char padA8[0x1c];
    volatile unsigned long tableC4;
    char padC8[0x68];
    ~Base();
};

struct Camera : Base {
    Member member;
    char pad134[0xa8];
    Shared shared;
    ~Camera();
};

Camera::~Camera()
{
    table0 = 0x83a654;
    table10 = 0x83a648;
    table14 = 0x83a640;
    table20 = 0x83a638;
    table24 = 0x83a628;
    table44 = 0x83a618;
    table64 = 0x83a608;
    table84 = 0x83a5f8;
    tableA4 = 0x83a5e8;
    tableC4 = 0x83a5d8;
}
