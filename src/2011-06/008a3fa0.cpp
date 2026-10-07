// roc 2011-06 008a3fa0  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a3fa0
//
// 008a3fa0  b8dc8cc900           mov eax, 0xc98cdc
// 008a3fa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a3fa0()
{
    return &G;
}
