// roc 2010-06 006a0c20  unit: VWinHttpRequest_source::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0c20
//
// 006a0c20  b83c8bbc00           mov eax, 0xbc8b3c
// 006a0c25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a0c20()
{
    return &G;
}
