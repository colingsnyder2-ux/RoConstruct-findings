// from server: 100% by colin
// roc 2007-08 0054db70  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054db70
//
// 0054db70  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 0054db73  c1e804               shr eax, 4
// 0054db76  83e001               and eax, 1
// 0054db79  c3                   ret 

struct S_func_0054db70 {
    char pad[92];
    unsigned int m_p;
    unsigned int f();
};

unsigned int S_func_0054db70::f() {
    unsigned int eax = *(unsigned int*)((char*)this + 0x5c);
    eax = eax >> 4;
    eax = eax & 1;
    return eax;
}
