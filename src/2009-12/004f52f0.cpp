// roc 2009-12 004f52f0  unit: RBX::GfxAttachement  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f52f0
//
// 004f52f0  8bc1                 mov eax, ecx
// 004f52f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f52f6  8b8038010000         mov eax, dword ptr [eax + 0x138]
// 004f52fc  ba01000000           mov edx, 1
// 004f5301  d3e2                 shl edx, cl
// 004f5303  23c2                 and eax, edx
// 004f5305  f7d8                 neg eax
// 004f5307  1bc0                 sbb eax, eax
// 004f5309  f7d8                 neg eax
// 004f530b  c20400               ret 4
// copied from an identical function in another client (function ?get@S@ns_ROCX000004@@QAEHI@Z)

namespace ns_ROCX000004 {
struct S
{
    unsigned char padding[0x138];
    unsigned int flags;
    int get(unsigned int);
};

int S::get(unsigned int index)
{
    return (flags & (1u << index)) != 0;
}
}
