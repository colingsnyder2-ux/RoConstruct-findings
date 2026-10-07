// roc 2010-06 007b44d0  unit: CXTPControlComboBoxList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b44d0
//
// 007b44d0  b87061be00           mov eax, 0xbe6170
// 007b44d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b44d0()
{
    return &G;
}
