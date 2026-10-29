// roc 2010-06 00699970  unit: RBX::VPhysicsService::?$EventDesc  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699970
//
// 00699970  807c240400           cmp byte ptr [esp + 4], 0
// 00699975  8b01                 mov eax, dword ptr [ecx]
// 00699977  7411                 je 0x69998a
// 00699979  83f801               cmp eax, 1
// 0069997c  7e1a                 jle 0x699998
// 0069997e  99                   cdq 
// 0069997f  2bc2                 sub eax, edx
// 00699981  d1f8                 sar eax, 1
// 00699983  8901                 mov dword ptr [ecx], eax
// 00699985  b001                 mov al, 1
// 00699987  c20400               ret 4
// 0069998a  83f810               cmp eax, 0x10
// 0069998d  7d09                 jge 0x699998
// 0069998f  03c0                 add eax, eax
// 00699991  8901                 mov dword ptr [ecx], eax
// 00699993  b001                 mov al, 1
// 00699995  c20400               ret 4
// 00699998  32c0                 xor al, al
// 0069999a  c20400               ret 4
// copied from an identical function in another client (function ?f@EventDesc@ns_ROCX000013@@QAEEE@Z)

namespace ns_ROCX000013 {
// from server: 100% by atomic.potato
struct EventDesc
{
    int value;
    unsigned char update;

    unsigned char __thiscall f(unsigned char update);
};

unsigned char __thiscall EventDesc::f(unsigned char update)
{
    if (update)
    {
        if (value > 1)
        {
            value = value / 2;
            return 1;
        }
    }
    else
    {
        if (value < 0x10)
        {
            value += value;
            return 1;
        }
    }
    return 0;
}
}