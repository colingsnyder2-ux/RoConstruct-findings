// roc 2007-08 00433d20  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433d20
//
// 00433d20  b800bd7800           mov eax, 0x78bd00
// 00433d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433d20()
{
    return &G;
}
