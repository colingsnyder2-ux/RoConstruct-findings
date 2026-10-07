// roc 2011-06 0040b860  unit: boost::any::H::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b860
//
// 0040b860  b84c7cc000           mov eax, 0xc07c4c
// 0040b865  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040b860()
{
    return &G;
}
