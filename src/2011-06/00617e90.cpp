// roc 2011-06 00617e90  unit: boost::bad_lexical_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00617e90
//
// 00617e90  b83045a900           mov eax, 0xa94530
// 00617e95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00617e90()
{
    return &G;
}
