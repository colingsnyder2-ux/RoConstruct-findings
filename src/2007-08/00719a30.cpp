// roc 2007-08 00719a30  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719a30
//
// 00719a30  b8e0a68b00           mov eax, 0x8ba6e0
// 00719a35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00719a30()
{
    return &G;
}
