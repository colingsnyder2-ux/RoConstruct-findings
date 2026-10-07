// roc 2009-06 0042c8b0  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c8b0
//
// 0042c8b0  b828298b00           mov eax, 0x8b2928
// 0042c8b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c8b0()
{
    return &G;
}
