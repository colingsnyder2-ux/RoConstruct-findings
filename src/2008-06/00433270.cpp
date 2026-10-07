// roc 2008-06 00433270  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433270
//
// 00433270  b8f0218100           mov eax, 0x8121f0
// 00433275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433270()
{
    return &G;
}
