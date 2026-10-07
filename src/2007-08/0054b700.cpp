// roc 2007-08 0054b700  unit: VHttpRequest_source::?$stream_buffer  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b700
//
// 0054b700  b818ce8900           mov eax, 0x89ce18
// 0054b705  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0054b700()
{
    return &G;
}
