// roc 2011-06 0040b5a0  unit: boost::bad_any_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b5a0
//
// 0040b5a0  b818c1a500           mov eax, 0xa5c118
// 0040b5a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040b5a0()
{
    return &G;
}
