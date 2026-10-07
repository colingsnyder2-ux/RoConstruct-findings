// roc 2008-06 0042cf80  unit: boost::any::H::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042cf80
//
// 0042cf80  b8d0be9200           mov eax, 0x92bed0
// 0042cf85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042cf80()
{
    return &G;
}
