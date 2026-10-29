// roc 2011-06 006db320  unit: RBX::VPhysicsService::?$EventDesc  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db320
//
// 006db320  807c240400           cmp byte ptr [esp + 4], 0
// 006db325  8b01                 mov eax, dword ptr [ecx]
// 006db327  7411                 je 0x6db33a
// 006db329  83f801               cmp eax, 1
// 006db32c  7e1a                 jle 0x6db348
// 006db32e  99                   cdq 
// 006db32f  2bc2                 sub eax, edx
// 006db331  d1f8                 sar eax, 1
// 006db333  8901                 mov dword ptr [ecx], eax
// 006db335  b001                 mov al, 1
// 006db337  c20400               ret 4
// 006db33a  83f810               cmp eax, 0x10
// 006db33d  7d09                 jge 0x6db348
// 006db33f  03c0                 add eax, eax
// 006db341  8901                 mov dword ptr [ecx], eax
// 006db343  b001                 mov al, 1
// 006db345  c20400               ret 4
// 006db348  32c0                 xor al, al
// 006db34a  c20400               ret 4
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