// roc 2008-06 0042eb30  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042eb30
//
// 0042eb30  b8c8ec9200           mov eax, 0x92ecc8
// 0042eb35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042eb30()
{
    return &G;
}
