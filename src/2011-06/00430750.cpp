// roc 2011-06 00430750  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430750
//
// 00430750  b854d3c000           mov eax, 0xc0d354
// 00430755  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430750()
{
    return &G;
}
