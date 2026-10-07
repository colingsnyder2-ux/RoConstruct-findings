// roc 2010-06 004433a0  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004433a0
//
// 004433a0  b848aba000           mov eax, 0xa0ab48
// 004433a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004433a0()
{
    return &G;
}
