// roc 2009-06 0041a750  unit: CInstanceExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a750
//
// 0041a750  b848fe8a00           mov eax, 0x8afe48
// 0041a755  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041a750()
{
    return &G;
}
