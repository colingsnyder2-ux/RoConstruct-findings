// roc 2010-06 0042ded0  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042ded0
//
// 0042ded0  b82064a000           mov eax, 0xa06420
// 0042ded5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042ded0()
{
    return &G;
}
