// from server: 92% by colin
// roc 2008-06 005f5ac0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5ac0
//
// 005f5ac0  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 005f5ac6  c1e804               shr eax, 4
// 005f5ac9  83e001               and eax, 1
// 005f5acc  c3                   ret 

struct S {
    int f();
};

int S::f() {
    int eax = *(int*)((char*)this + 0xb0);
    eax >>= 4;
    eax &= 1;
    return eax;
}
