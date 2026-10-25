// from server: 100% by tester
// roc 2011-06 006e5430  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e5430
//
// 006e5430  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 006e5436  c1e802               shr eax, 2
// 006e5439  83e001               and eax, 1
// 006e543c  c3                   ret 

struct S
{
    char pad[0xb0];
    unsigned int field;
    int get() const;
};

int S::get() const
{
    return (field >> 2) & 1;
}
