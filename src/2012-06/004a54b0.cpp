// roc 2012-06 004a54b0  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a54b0
//
// 004a54b0  b8281bb600           mov eax, 0xb61b28
// 004a54b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a54b0()
{
    return &G;
}
