// roc 2009-06 007b3e40  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b3e40
//
// 007b3e40  b8a02e9000           mov eax, 0x902ea0
// 007b3e45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b3e40()
{
    return &G;
}
