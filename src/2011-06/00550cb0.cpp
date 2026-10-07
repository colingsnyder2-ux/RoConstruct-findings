// roc 2011-06 00550cb0  unit: seg_00550000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00550cb0
//
// 00550cb0  b8a002a800           mov eax, 0xa802a0
// 00550cb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00550cb0()
{
    return &G;
}
