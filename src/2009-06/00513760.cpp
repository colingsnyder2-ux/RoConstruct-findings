// roc 2009-06 00513760  unit: CSHA1  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00513760
//
// 00513760  8b442404             mov eax, dword ptr [esp + 4]
// 00513764  8b08                 mov ecx, dword ptr [eax]
// 00513766  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 0051376a  7403                 je 0x51376f
// 0051376c  32c0                 xor al, al
// 0051376e  c3                   ret 
// 0051376f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00513773  83e901               sub ecx, 1
// 00513776  740d                 je 0x513785
// 00513778  83c004               add eax, 4
// 0051377b  833800               cmp dword ptr [eax], 0
// 0051377e  75ec                 jne 0x51376c
// 00513780  83e901               sub ecx, 1
// 00513783  75f3                 jne 0x513778
// 00513785  b001                 mov al, 1
// 00513787  c3                   ret 
// copied from an identical function in another client (function ?f@CSHA1@ns_ROCX00000d@@SADPAHHH@Z)

namespace ns_ROCX00000d {
// from server: 100% by atomic.potato
struct CSHA1
{
    static char f(int *a, int count, int value);
};

char CSHA1::f(int *a, int count, int value)
{
    int *p = a;
    if (*p != value)
        return 0;
    if (--count == 0)
        return 1;
    do
    {
        p++;
        if (*p != 0)
            return 0;
        if (--count == 0)
            return 1;
    } while (count != 0);
    return 1;
}
}
