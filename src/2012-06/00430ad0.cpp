// roc 2012-06 00430ad0  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00430ad0
//
// 00430ad0  b810f2b400           mov eax, 0xb4f210
// 00430ad5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430ad0()
{
    return &G;
}
