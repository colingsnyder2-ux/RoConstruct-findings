// roc 2008-06 0040a390  unit: boost::any::_N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a390
//
// 0040a390  b844969200           mov eax, 0x929644
// 0040a395  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040a390()
{
    return &G;
}
