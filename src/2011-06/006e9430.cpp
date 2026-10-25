// from server: 100% by tester
// roc 2011-06 006e9430  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e9430
//
// 006e9430  80790800             cmp byte ptr [ecx + 8], 0
// 006e9434  7404                 je 0x6e943a
// 006e9436  c6410800             mov byte ptr [ecx + 8], 0
// 006e943a  c3                   ret 

struct S {
    void f();
};

void S::f()
{
    if (*(unsigned char*)((char*)this + 8))
        *(unsigned char*)((char*)this + 8) = 0;
}
