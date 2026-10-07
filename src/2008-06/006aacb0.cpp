// roc 2008-06 006aacb0  unit: CXTPControlComboBoxList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aacb0
//
// 006aacb0  b858158500           mov eax, 0x851558
// 006aacb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006aacb0()
{
    return &G;
}
