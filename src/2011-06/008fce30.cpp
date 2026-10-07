// roc 2011-06 008fce30  unit: CXTPRibbonControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fce30
//
// 008fce30  b814c4ad00           mov eax, 0xadc414
// 008fce35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fce30()
{
    return &G;
}
