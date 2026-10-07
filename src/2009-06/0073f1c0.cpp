// roc 2009-06 0073f1c0  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073f1c0
//
// 0073f1c0  b8e457a200           mov eax, 0xa257e4
// 0073f1c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0073f1c0()
{
    return &G;
}
