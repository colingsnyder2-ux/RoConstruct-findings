// roc 2007-08 00639320  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639320
//
// 00639320  b890607c00           mov eax, 0x7c6090
// 00639325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00639320()
{
    return &G;
}
