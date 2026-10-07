// roc 2008-06 005f2940  unit: UString_sink::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2940
//
// 005f2940  b89c779500           mov eax, 0x95779c
// 005f2945  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005f2940()
{
    return &G;
}
