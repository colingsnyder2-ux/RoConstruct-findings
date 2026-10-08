// roc 2007-08 00435810  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00435810
//
// 00435810  b864c97800           mov eax, 0x78c964
// 00435815  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00435810()
{
    return &G;
}
