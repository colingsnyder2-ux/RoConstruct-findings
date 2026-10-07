// roc 2009-06 0042c400  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c400
//
// 0042c400  b8e81d8b00           mov eax, 0x8b1de8
// 0042c405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c400()
{
    return &G;
}
