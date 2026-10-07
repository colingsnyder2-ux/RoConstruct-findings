// roc 2008-06 00437830  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437830
//
// 00437830  b88c358100           mov eax, 0x81358c
// 00437835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00437830()
{
    return &G;
}
