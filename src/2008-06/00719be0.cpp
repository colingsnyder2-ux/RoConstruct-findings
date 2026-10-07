// roc 2008-06 00719be0  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719be0
//
// 00719be0  b8acee8500           mov eax, 0x85eeac
// 00719be5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00719be0()
{
    return &G;
}
