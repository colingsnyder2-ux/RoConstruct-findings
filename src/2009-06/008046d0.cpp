// roc 2009-06 008046d0  unit: CXTColorPageCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008046d0
//
// 008046d0  b884b59000           mov eax, 0x90b584
// 008046d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008046d0()
{
    return &G;
}
