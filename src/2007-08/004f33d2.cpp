// roc 2007-08 004f33d2  unit: boost::bad_lexical_cast  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004f33d2
//
// 004f33d2  b801000000           mov eax, 1
// 004f33d7  c3                   ret 
// auto-matched from its assembly shape

int func_004f33d2()
{
    return 1;
}
