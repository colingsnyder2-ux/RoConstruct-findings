// roc 2010-06 00810dc0  unit: CXTPDockingPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810dc0
//
// 00810dc0  b85819a600           mov eax, 0xa61958
// 00810dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00810dc0()
{
    return &G;
}
