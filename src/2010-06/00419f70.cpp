// roc 2010-06 00419f70  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00419f70
//
// 00419f70  b8b834a000           mov eax, 0xa034b8
// 00419f75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00419f70()
{
    return &G;
}
