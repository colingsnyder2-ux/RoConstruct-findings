// roc 2011-06 00819c40  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00819c40
//
// 00819c40  b82828ac00           mov eax, 0xac2828
// 00819c45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00819c40()
{
    return &G;
}
