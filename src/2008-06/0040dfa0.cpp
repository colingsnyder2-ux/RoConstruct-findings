// roc 2008-06 0040dfa0  unit: CBrowserDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040dfa0
//
// 0040dfa0  b8accf8000           mov eax, 0x80cfac
// 0040dfa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040dfa0()
{
    return &G;
}
