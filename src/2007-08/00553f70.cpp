// roc 2007-08 00553f70  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00553f70
//
// 00553f70  8b81e8000000         mov eax, dword ptr [ecx + 0xe8]
// 00553f76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00553f70 {
    char pad0[232];
    int m_x;
    int f();
};
int S_func_00553f70::f()
{
    return m_x;
}
