// roc 2009-06 007f3210  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3210
//
// 007f3210  b85ca19000           mov eax, 0x90a15c
// 007f3215  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f3210()
{
    return &G;
}
