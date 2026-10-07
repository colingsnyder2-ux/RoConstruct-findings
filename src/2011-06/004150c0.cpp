// roc 2011-06 004150c0  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004150c0
//
// 004150c0  b838e5a500           mov eax, 0xa5e538
// 004150c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004150c0()
{
    return &G;
}
