// roc 2010-06 0052ade0  unit: boost::bad_lexical_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052ade0
//
// 0052ade0  b878eba100           mov eax, 0xa1eb78
// 0052ade5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0052ade0()
{
    return &G;
}
