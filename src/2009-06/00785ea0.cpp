// roc 2009-06 00785ea0  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00785ea0
//
// 00785ea0  b8f8d98f00           mov eax, 0x8fd9f8
// 00785ea5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00785ea0()
{
    return &G;
}
