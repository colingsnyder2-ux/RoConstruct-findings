// roc 2008-06 00465de0  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465de0
//
// 00465de0  b800bb8100           mov eax, 0x81bb00
// 00465de5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00465de0()
{
    return &G;
}
