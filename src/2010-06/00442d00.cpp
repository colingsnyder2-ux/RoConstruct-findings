// roc 2010-06 00442d00  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00442d00
//
// 00442d00  b8dcaaa000           mov eax, 0xa0aadc
// 00442d05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00442d00()
{
    return &G;
}
