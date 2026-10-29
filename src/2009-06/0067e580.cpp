// roc 2009-06 0067e580  unit: RBX::Mechanism  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067e580
//
// 0067e580  807c240400           cmp byte ptr [esp + 4], 0
// 0067e585  8b01                 mov eax, dword ptr [ecx]
// 0067e587  7411                 je 0x67e59a
// 0067e589  83f801               cmp eax, 1
// 0067e58c  7e1a                 jle 0x67e5a8
// 0067e58e  99                   cdq 
// 0067e58f  2bc2                 sub eax, edx
// 0067e591  d1f8                 sar eax, 1
// 0067e593  8901                 mov dword ptr [ecx], eax
// 0067e595  b001                 mov al, 1
// 0067e597  c20400               ret 4
// 0067e59a  83f810               cmp eax, 0x10
// 0067e59d  7d09                 jge 0x67e5a8
// 0067e59f  03c0                 add eax, eax
// 0067e5a1  8901                 mov dword ptr [ecx], eax
// 0067e5a3  b001                 mov al, 1
// 0067e5a5  c20400               ret 4
// 0067e5a8  32c0                 xor al, al
// 0067e5aa  c20400               ret 4
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
