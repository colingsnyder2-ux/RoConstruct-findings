// from server: 100% by colin
// roc 2007-08 0054e1c0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e1c0
//
// 0054e1c0  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 0054e1c6  c1e804               shr eax, 4
// 0054e1c9  83e001               and eax, 1
// 0054e1cc  c3                   ret 

struct S {
    char pad[0xb0];
    unsigned int m_flags;
    unsigned int getFlag() const;
};

unsigned int S::getFlag() const {
    return (m_flags >> 4) & 1;
}
