// roc 2012-06 004153c0  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004153c0
//
// 004153c0  b8a850b400           mov eax, 0xb450a8
// 004153c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004153c0()
{
    return &G;
}
