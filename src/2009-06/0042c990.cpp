// roc 2009-06 0042c990  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c990
//
// 0042c990  b88c2a8b00           mov eax, 0x8b2a8c
// 0042c995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c990()
{
    return &G;
}
