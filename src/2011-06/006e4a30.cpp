// from server: 100% by tester
// roc 2011-06 006e4a30  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4a30
//
// 006e4a30  0fb6442404           movzx eax, byte ptr [esp + 4]
// 006e4a35  8b919c000000         mov edx, dword ptr [ecx + 0x9c]
// 006e4a3b  f7d8                 neg eax
// 006e4a3d  1bc0                 sbb eax, eax
// 006e4a3f  83e004               and eax, 4
// 006e4a42  83e2fb               and edx, 0xfffffffb
// 006e4a45  0bc2                 or eax, edx
// 006e4a47  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 006e4a4d  c20400               ret 4

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
