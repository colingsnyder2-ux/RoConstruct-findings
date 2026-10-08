// from server: 100% by colin
// roc 2007-08 0054f3d0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f3d0
//
// 0054f3d0  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0054f3d6  c1e804               shr eax, 4
// 0054f3d9  83e001               and eax, 1
// 0054f3dc  c3                   ret 

struct S {
    unsigned char pad[0x9c];
    unsigned int flags;
    unsigned int get() const;
};

unsigned int S::get() const
{
    return (flags >> 4) & 1;
}
