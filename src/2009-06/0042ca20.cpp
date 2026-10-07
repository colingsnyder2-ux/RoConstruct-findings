// roc 2009-06 0042ca20  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042ca20
//
// 0042ca20  b8a82a8b00           mov eax, 0x8b2aa8
// 0042ca25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042ca20()
{
    return &G;
}
