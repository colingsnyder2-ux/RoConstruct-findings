// roc 2008-06 005f5160  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5160
//
// 005f5160  b800809500           mov eax, 0x958000
// 005f5165  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005f5160()
{
    return &G;
}
