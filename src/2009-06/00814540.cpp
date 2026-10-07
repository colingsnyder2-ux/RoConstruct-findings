// roc 2009-06 00814540  unit: CXTPRibbonControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00814540
//
// 00814540  b884d89000           mov eax, 0x90d884
// 00814545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00814540()
{
    return &G;
}
