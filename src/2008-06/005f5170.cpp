// from server: 63% by colin
// roc 2008-06 005f5170  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5170
//
// 005f5170  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 005f5176  c1e804               shr eax, 4
// 005f5179  83e001               and eax, 1
// 005f517c  c3                   ret 

struct S {
    int this_offset_9c;
    int f();
};

int S::f() {
    int eax = this->this_offset_9c;
    eax >>= 4;
    eax &= 1;
    return eax;
}
