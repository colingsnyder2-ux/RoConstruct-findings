// roc 2011-06 00856900  unit: CXTPRibbonBarMorePopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856900
//
// 00856900  b8e08dac00           mov eax, 0xac8de0
// 00856905  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00856900()
{
    return &G;
}
