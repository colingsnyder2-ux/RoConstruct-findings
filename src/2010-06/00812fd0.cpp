// roc 2010-06 00812fd0  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812fd0
//
// 00812fd0  b8701da600           mov eax, 0xa61d70
// 00812fd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00812fd0()
{
    return &G;
}
