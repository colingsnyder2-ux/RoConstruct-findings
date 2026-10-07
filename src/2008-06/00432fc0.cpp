// roc 2008-06 00432fc0  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432fc0
//
// 00432fc0  b8901e8100           mov eax, 0x811e90
// 00432fc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00432fc0()
{
    return &G;
}
