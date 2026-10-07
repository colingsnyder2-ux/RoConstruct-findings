// roc 2011-06 008522f0  unit: CXTPControlButtonColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008522f0
//
// 008522f0  b8686fc900           mov eax, 0xc96f68
// 008522f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008522f0()
{
    return &G;
}
