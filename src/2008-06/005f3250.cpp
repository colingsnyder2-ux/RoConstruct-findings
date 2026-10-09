// roc 2008-06 005f3250  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3250
//
// 005f3250  0fb6442404           movzx eax, byte ptr [esp + 4]
// 005f3255  8b5154               mov edx, dword ptr [ecx + 0x54]
// 005f3258  f7d8                 neg eax
// 005f325a  1bc0                 sbb eax, eax
// 005f325c  83e010               and eax, 0x10
// 005f325f  83e2ef               and edx, 0xffffffef
// 005f3262  0bc2                 or eax, edx
// 005f3264  894154               mov dword ptr [ecx + 0x54], eax
// 005f3267  c20400               ret 4
// copied from an identical function in another client (function ?setFlag@S@ns_ROCX000001@@QAEX_N@Z)

namespace ns_ROCX000001 {
struct S {
    char pad[0x54];
    int m54;
    void setFlag(bool b);
};

void S::setFlag(bool b)
{
    m54 = (m54 & ~0x10) | (b ? 0x10 : 0);
}
}
