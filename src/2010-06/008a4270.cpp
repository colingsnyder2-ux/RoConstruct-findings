// roc 2010-06 008a4270  unit: CXTPRibbonControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4270
//
// 008a4270  b8e428a700           mov eax, 0xa728e4
// 008a4275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a4270()
{
    return &G;
}
