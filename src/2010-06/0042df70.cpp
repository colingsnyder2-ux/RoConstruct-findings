// roc 2010-06 0042df70  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042df70
//
// 0042df70  b8b064a000           mov eax, 0xa064b0
// 0042df75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042df70()
{
    return &G;
}
