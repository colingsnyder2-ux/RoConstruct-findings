// roc 2011-06 004300a0  unit: MyXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004300a0
//
// 004300a0  b8c058a600           mov eax, 0xa658c0
// 004300a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004300a0()
{
    return &G;
}
