// roc 2008-06 00433660  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433660
//
// 00433660  b83c258100           mov eax, 0x81253c
// 00433665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433660()
{
    return &G;
}
