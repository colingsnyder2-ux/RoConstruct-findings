// roc 2008-06 00563cd0  unit: boost::any::N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563cd0
//
// 00563cd0  b8e8be9200           mov eax, 0x92bee8
// 00563cd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00563cd0()
{
    return &G;
}
