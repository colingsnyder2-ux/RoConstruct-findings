// roc 2009-06 00818c10  unit: CXTWindowMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818c10
//
// 00818c10  b894f59000           mov eax, 0x90f594
// 00818c15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00818c10()
{
    return &G;
}
