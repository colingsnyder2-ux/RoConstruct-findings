// roc 2007-08 0054db60  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0054db60
//
// 0054db60  b8d0d58900           mov eax, 0x89d5d0
// 0054db65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0054db60()
{
    return &G;
}
