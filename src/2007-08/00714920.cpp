// roc 2007-08 00714920  unit: CXTCaptionButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714920
//
// 00714920  b898ec7d00           mov eax, 0x7dec98
// 00714925  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00714920()
{
    return &G;
}
