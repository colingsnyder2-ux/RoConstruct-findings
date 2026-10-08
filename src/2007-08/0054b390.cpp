// roc 2007-08 0054b390  unit: UString_sink::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b390
//
// 0054b390  b86ccd8900           mov eax, 0x89cd6c
// 0054b395  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0054b390()
{
    return &G;
}
