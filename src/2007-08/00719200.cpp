// roc 2007-08 00719200  unit: CXTPRibbonGroupControlPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719200
//
// 00719200  b850a68b00           mov eax, 0x8ba650
// 00719205  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00719200()
{
    return &G;
}
