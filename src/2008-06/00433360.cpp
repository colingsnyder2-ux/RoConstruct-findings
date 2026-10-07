// roc 2008-06 00433360  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433360
//
// 00433360  b82c248100           mov eax, 0x81242c
// 00433365  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433360()
{
    return &G;
}
