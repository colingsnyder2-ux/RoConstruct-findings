// roc 2007-08 006f2c80  unit: CXTPGraphicBitmapPng  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2c80
//
// 006f2c80  b880b87d00           mov eax, 0x7db880
// 006f2c85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f2c80()
{
    return &G;
}
