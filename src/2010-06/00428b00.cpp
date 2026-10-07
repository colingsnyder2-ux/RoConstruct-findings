// roc 2010-06 00428b00  unit: CWrapperView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428b00
//
// 00428b00  b8a847a000           mov eax, 0xa047a8
// 00428b05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00428b00()
{
    return &G;
}
