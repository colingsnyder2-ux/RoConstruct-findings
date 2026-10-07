// roc 2009-06 00804b00  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00804b00
//
// 00804b00  b820b79000           mov eax, 0x90b720
// 00804b05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00804b00()
{
    return &G;
}
