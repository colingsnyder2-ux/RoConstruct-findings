// roc 2011-06 00443140  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00443140
//
// 00443140  b87c90a600           mov eax, 0xa6907c
// 00443145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00443140()
{
    return &G;
}
