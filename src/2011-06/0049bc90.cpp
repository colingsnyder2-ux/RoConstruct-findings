// roc 2011-06 0049bc90  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049bc90
//
// 0049bc90  b8ec60a700           mov eax, 0xa760ec
// 0049bc95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0049bc90()
{
    return &G;
}
