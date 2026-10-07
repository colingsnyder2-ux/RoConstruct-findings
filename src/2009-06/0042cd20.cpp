// roc 2009-06 0042cd20  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042cd20
//
// 0042cd20  b8c42a8b00           mov eax, 0x8b2ac4
// 0042cd25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042cd20()
{
    return &G;
}
