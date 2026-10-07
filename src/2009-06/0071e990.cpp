// roc 2009-06 0071e990  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071e990
//
// 0071e990  b8581f8f00           mov eax, 0x8f1f58
// 0071e995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0071e990()
{
    return &G;
}
