// roc 2009-06 0042f450  unit: COutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042f450
//
// 0042f450  b8e0348b00           mov eax, 0x8b34e0
// 0042f455  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042f450()
{
    return &G;
}
