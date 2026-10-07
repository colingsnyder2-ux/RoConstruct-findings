// roc 2011-06 0085a300  unit: CXTPControlLabel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a300
//
// 0085a300  b89871c900           mov eax, 0xc97198
// 0085a305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a300()
{
    return &G;
}
