// roc 2011-06 004b36e0  unit: boost::any::N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b36e0
//
// 004b36e0  b8d0abc000           mov eax, 0xc0abd0
// 004b36e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b36e0()
{
    return &G;
}
