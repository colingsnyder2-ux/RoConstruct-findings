// roc 2008-06 0078fd30  unit: CXTColorPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078fd30
//
// 0078fd30  b82cab8600           mov eax, 0x86ab2c
// 0078fd35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0078fd30()
{
    return &G;
}
