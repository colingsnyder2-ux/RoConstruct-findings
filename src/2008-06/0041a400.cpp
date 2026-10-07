// roc 2008-06 0041a400  unit: Marshaller  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a400
//
// 0041a400  b8d0a24100           mov eax, 0x41a2d0
// 0041a405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041a400()
{
    return &G;
}
