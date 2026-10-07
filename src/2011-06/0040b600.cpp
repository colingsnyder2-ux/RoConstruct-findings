// roc 2011-06 0040b600  unit: boost::any::_N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b600
//
// 0040b600  b8747ac000           mov eax, 0xc07a74
// 0040b605  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040b600()
{
    return &G;
}
