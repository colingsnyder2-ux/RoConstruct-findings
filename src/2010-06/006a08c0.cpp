// roc 2010-06 006a08c0  unit: UString_sink::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a08c0
//
// 006a08c0  b88c8abc00           mov eax, 0xbc8a8c
// 006a08c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a08c0()
{
    return &G;
}
