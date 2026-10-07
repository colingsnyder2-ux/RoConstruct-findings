// roc 2010-06 0042def0  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042def0
//
// 0042def0  b89464a000           mov eax, 0xa06494
// 0042def5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042def0()
{
    return &G;
}
