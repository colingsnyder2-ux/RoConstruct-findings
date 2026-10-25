// from server: 100% by king_originala
// roc 2008-06 004a17f0  unit: RBX::Network::VServer::?$FactoryProduct  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a17f0
//
// 004a17f0  64a100000000         mov eax, dword ptr fs:[0]
// 004a17f6  6aff                 push -1
// 004a17f8  6868617c00           push 0x7c6168
// 004a17fd  50                   push eax
// 004a17fe  64892500000000       mov dword ptr fs:[0], esp
// 004a1805  53                   push ebx
// 004a1806  56                   push esi
// 004a1807  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a180b  6a00                 push 0
// 004a180d  68b48d9300           push 0x938db4
// 004a1812  687c909200           push 0x92907c
// 004a1817  6a00                 push 0
// 004a1819  50                   push eax
// 004a181a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004a1822  e89fff1f00           call 0x6a17c6
// 004a1827  8b742430             mov esi, dword ptr [esp + 0x30]
// 004a182b  83c414               add esp, 0x14
// 004a182e  85c0                 test eax, eax
// 004a1830  0f95c3               setne bl
// 004a1833  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004a183b  85f6                 test esi, esi
// 004a183d  742a                 je 0x4a1869
// 004a183f  8d4e04               lea ecx, [esi + 4]
// 004a1842  83caff               or edx, 0xffffffff
// 004a1845  f00fc111             lock xadd dword ptr [ecx], edx
// 004a1849  751e                 jne 0x4a1869
// 004a184b  8b06                 mov eax, dword ptr [esi]
// 004a184d  8b5004               mov edx, dword ptr [eax + 4]
// 004a1850  8bce                 mov ecx, esi
// 004a1852  ffd2                 call edx
// 004a1854  8d4608               lea eax, [esi + 8]
// 004a1857  83c9ff               or ecx, 0xffffffff
// 004a185a  f00fc108             lock xadd dword ptr [eax], ecx
// 004a185e  7509                 jne 0x4a1869
// 004a1860  8b16                 mov edx, dword ptr [esi]
// 004a1862  8b4208               mov eax, dword ptr [edx + 8]
// 004a1865  8bce                 mov ecx, esi
// 004a1867  ffd0                 call eax
// 004a1869  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a186d  5e                   pop esi
// 004a186e  8ac3                 mov al, bl
// 004a1870  64890d00000000       mov dword ptr fs:[0], ecx
// 004a1877  5b                   pop ebx
// 004a1878  83c40c               add esp, 0xc
// 004a187b  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void* __cdecl dynamicCast(void*, long, void*, void*, int);
extern unsigned char instanceType[];
extern unsigned char replicatorType[];

struct ControlBlock {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strongCount;
    volatile long weakCount;
};

struct Shared {
    void* object;
    ControlBlock* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    ControlBlock* p = control;
    if (p && _InterlockedDecrement(&p->strongCount) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weakCount) == 0)
            p->destroy();
    }
}

bool __cdecl f(Shared value)
{
    return dynamicCast(value.object, 0, instanceType, replicatorType, 0) != 0;
}
