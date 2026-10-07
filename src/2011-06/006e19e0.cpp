// roc 2011-06 006e19e0  unit: UString_sink::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e19e0
//
// 006e19e0  b8fc43c700           mov eax, 0xc743fc
// 006e19e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006e19e0()
{
    return &G;
}
