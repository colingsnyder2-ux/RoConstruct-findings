// roc 2009-06 00808370  unit: CXTColorPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808370
//
// 00808370  b854bb9000           mov eax, 0x90bb54
// 00808375  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00808370()
{
    return &G;
}
