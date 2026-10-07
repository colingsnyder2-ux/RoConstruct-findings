// roc 2010-06 0042dfa0  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042dfa0
//
// 0042dfa0  b88465a000           mov eax, 0xa06584
// 0042dfa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042dfa0()
{
    return &G;
}
