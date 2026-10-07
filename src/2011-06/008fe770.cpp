// roc 2011-06 008fe770  unit: CXTPRibbonControlSystemPopupBarButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe770
//
// 008fe770  b84cb2c900           mov eax, 0xc9b24c
// 008fe775  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fe770()
{
    return &G;
}
