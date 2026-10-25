// from server: 100% by auto
// roc 2008-06 005f80b0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f80b0
//
// 005f80b0  b89d805f00           mov eax, 0x5f809d
// 005f80b5  c3                   ret 

extern char G;

char* func_005f80b0()
{
    return &G;
}
