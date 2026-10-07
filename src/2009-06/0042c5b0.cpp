// roc 2009-06 0042c5b0  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042c5b0
//
// 0042c5b0  b82c248b00           mov eax, 0x8b242c
// 0042c5b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042c5b0()
{
    return &G;
}
