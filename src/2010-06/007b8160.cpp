// roc 2010-06 007b8160  unit: CXTPControlComboBoxList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8160
//
// 007b8160  b8906ca500           mov eax, 0xa56c90
// 007b8165  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b8160()
{
    return &G;
}
