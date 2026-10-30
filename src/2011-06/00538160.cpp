// roc 2011-06 00538160  unit: CSHA1  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00538160
//
// 00538160  8b442404             mov eax, dword ptr [esp + 4]
// 00538164  8b08                 mov ecx, dword ptr [eax]
// 00538166  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 0053816a  7403                 je 0x53816f
// 0053816c  32c0                 xor al, al
// 0053816e  c3                   ret 
// 0053816f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00538173  83e901               sub ecx, 1
// 00538176  740d                 je 0x538185
// 00538178  83c004               add eax, 4
// 0053817b  833800               cmp dword ptr [eax], 0
// 0053817e  75ec                 jne 0x53816c
// 00538180  83e901               sub ecx, 1
// 00538183  75f3                 jne 0x538178
// 00538185  b001                 mov al, 1
// 00538187  c3                   ret 
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