// roc 2008-06 00465e30  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465e30
//
// 00465e30  b81cbb8100           mov eax, 0x81bb1c
// 00465e35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00465e30()
{
    return &G;
}
