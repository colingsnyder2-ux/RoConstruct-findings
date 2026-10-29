// roc 2009-12 00725800  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725800
//
// 00725800  0fb6442404           movzx eax, byte ptr [esp + 4]
// 00725805  8b919c000000         mov edx, dword ptr [ecx + 0x9c]
// 0072580b  f7d8                 neg eax
// 0072580d  1bc0                 sbb eax, eax
// 0072580f  83e004               and eax, 4
// 00725812  83e2fb               and edx, 0xfffffffb
// 00725815  0bc2                 or eax, edx
// 00725817  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0072581d  c20400               ret 4
// copied from an identical function in another client (function ?set@S@ns_ROCX00000b@@QAEXE@Z)

namespace ns_ROCX00000b {
// from server: 100% by tester
struct S
{
    char padding[0x9c];
    unsigned int value;
    void set(unsigned char enabled);
};

void S::set(unsigned char enabled)
{
    value = (value & ~4u) | ((enabled ? 1u : 0u) ? 4u : 0u);
}
}
