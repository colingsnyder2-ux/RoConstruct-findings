// roc 2008-06 00440d20  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00440d20
//
// 00440d20  b8dc458100           mov eax, 0x8145dc
// 00440d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00440d20()
{
    return &G;
}
