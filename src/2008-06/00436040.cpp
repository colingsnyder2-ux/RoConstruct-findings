// roc 2008-06 00436040  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436040
//
// 00436040  b8742e8100           mov eax, 0x812e74
// 00436045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00436040()
{
    return &G;
}
