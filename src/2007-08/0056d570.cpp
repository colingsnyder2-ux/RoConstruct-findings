// roc 2007-08 0056d570  unit: boost::any::N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056d570
//
// 0056d570  b8a8998900           mov eax, 0x8999a8
// 0056d575  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0056d570()
{
    return &G;
}
