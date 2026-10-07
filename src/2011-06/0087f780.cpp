// roc 2011-06 0087f780  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087f780
//
// 0087f780  b838f3ac00           mov eax, 0xacf338
// 0087f785  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0087f780()
{
    return &G;
}
