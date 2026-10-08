// from server: 100% by colin
// roc 2007-08 0054e1d0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e1d0
//
// 0054e1d0  8a442404             mov al, byte ptr [esp + 4]
// 0054e1d4  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0054e1da  f6d8                 neg al
// 0054e1dc  1bc0                 sbb eax, eax
// 0054e1de  83e010               and eax, 0x10
// 0054e1e1  83e2ef               and edx, 0xffffffef
// 0054e1e4  0bc2                 or eax, edx
// 0054e1e6  8981b0000000         mov dword ptr [ecx + 0xb0], eax
// 0054e1ec  c20400               ret 4

struct S {
    void f(char);
};

void S::f(char a) {
    unsigned int v = *(unsigned int*)((char*)this + 0xb0);
    v &= 0xffffffef;
    v |= (a ? 0x10 : 0);
    *(unsigned int*)((char*)this + 0xb0) = v;
}
