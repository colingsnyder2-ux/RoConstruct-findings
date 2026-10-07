// roc 2009-06 00804af0  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00804af0
//
// 00804af0  b8a0b69000           mov eax, 0x90b6a0
// 00804af5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00804af0()
{
    return &G;
}
