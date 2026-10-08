// roc 2007-08 004f30c0  unit: boost::bad_lexical_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f30c0
//
// 004f30c0  b890f57900           mov eax, 0x79f590
// 004f30c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f30c0()
{
    return &G;
}
