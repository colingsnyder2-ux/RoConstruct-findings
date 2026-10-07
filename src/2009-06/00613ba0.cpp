// roc 2009-06 00613ba0  unit: UString_sink::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00613ba0
//
// 00613ba0  b8ac91a000           mov eax, 0xa091ac
// 00613ba5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00613ba0()
{
    return &G;
}
