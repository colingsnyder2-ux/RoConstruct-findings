// from server: 100% by king_originala
// roc 2008-06 004238f0  unit: CSelectionTreeCtrl  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004238f0
//
// 004238f0  6a18                 push 0x18
// 004238f2  e829d02700           call 0x6a0920
// 004238f7  83c404               add esp, 4
// 004238fa  85c0                 test eax, eax
// 004238fc  743e                 je 0x42393c
// 004238fe  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00423902  8b542408             mov edx, dword ptr [esp + 8]
// 00423906  8908                 mov dword ptr [eax], ecx
// 00423908  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042390c  894808               mov dword ptr [eax + 8], ecx
// 0042390f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00423913  895004               mov dword ptr [eax + 4], edx
// 00423916  8b11                 mov edx, dword ptr [ecx]
// 00423918  89500c               mov dword ptr [eax + 0xc], edx
// 0042391b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0042391e  894810               mov dword ptr [eax + 0x10], ecx
// 00423921  85c9                 test ecx, ecx
// 00423923  740c                 je 0x423931
// 00423925  83c104               add ecx, 4
// 00423928  ba01000000           mov edx, 1
// 0042392d  f00fc111             lock xadd dword ptr [ecx], edx
// 00423931  8a4c2414             mov cl, byte ptr [esp + 0x14]
// 00423935  884814               mov byte ptr [eax + 0x14], cl
// 00423938  c6401500             mov byte ptr [eax + 0x15], 0
// 0042393c  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

extern void* __cdecl func_006a0920(unsigned int);

struct RefCount
{
    long reserved;
    volatile long count;
};

struct SharedValue
{
    void* value;
    RefCount* reference;
};

struct Node
{
    Node* first;
    Node* second;
    Node* third;
    SharedValue shared;
    unsigned char flag;
    unsigned char state;
};

Node* __stdcall func_004238f0(Node* first, Node* second, Node* third,
                            const SharedValue& shared, unsigned char flag)
{
    Node* result = static_cast<Node*>(func_006a0920(24));
    if (result)
    {
        result->first = first;
        result->second = second;
        result->third = third;
        result->shared.value = shared.value;
        result->shared.reference = shared.reference;
        if (result->shared.reference)
        {
            volatile long* count = &result->shared.reference->count;
            _ReadWriteBarrier();
            _InterlockedExchangeAdd(count, 1);
        }
        result->flag = flag;
        result->state = 0;
    }
    return result;
}
