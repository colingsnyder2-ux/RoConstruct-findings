// roc 2007-08 00553f90  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00553f90
//
// 00553f90  8a81f0000000         mov al, byte ptr [ecx + 0xf0]
// 00553f96  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00553f90 {
    char pad0[240];
    char m_x;
    char f();
};
char S_func_00553f90::f()
{
    return m_x;
}
