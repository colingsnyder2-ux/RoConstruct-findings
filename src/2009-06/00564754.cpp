// roc 2009-06 00564754  unit: boost::bad_lexical_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00564754
//
// 00564754  b801000000           mov eax, 1
// 00564759  c3                   ret 
// auto-matched from its assembly shape

int func_00564754()
{
    return 1;
}
