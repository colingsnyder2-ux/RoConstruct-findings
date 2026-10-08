// roc 2007-08 00672450  unit: CXTPControlColorSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672450
//
// 00672450  b8e0678b00           mov eax, 0x8b67e0
// 00672455  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00672450()
{
    return &G;
}
