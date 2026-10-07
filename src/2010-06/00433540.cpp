// roc 2010-06 00433540  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00433540
//
// 00433540  b83476a000           mov eax, 0xa07634
// 00433545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433540()
{
    return &G;
}
