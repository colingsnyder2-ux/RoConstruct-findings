// roc 2009-06 00817270  unit: CXTPDialogBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817270
//
// 00817270  b8c0ada200           mov eax, 0xa2adc0
// 00817275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00817270()
{
    return &G;
}
