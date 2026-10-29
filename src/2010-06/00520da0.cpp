// roc 2010-06 00520da0  unit: CSHA1  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00520da0
//
// 00520da0  8b442404             mov eax, dword ptr [esp + 4]
// 00520da4  8b08                 mov ecx, dword ptr [eax]
// 00520da6  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 00520daa  7403                 je 0x520daf
// 00520dac  32c0                 xor al, al
// 00520dae  c3                   ret 
// 00520daf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00520db3  83e901               sub ecx, 1
// 00520db6  740d                 je 0x520dc5
// 00520db8  83c004               add eax, 4
// 00520dbb  833800               cmp dword ptr [eax], 0
// 00520dbe  75ec                 jne 0x520dac
// 00520dc0  83e901               sub ecx, 1
// 00520dc3  75f3                 jne 0x520db8
// 00520dc5  b001                 mov al, 1
// 00520dc7  c3                   ret 
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