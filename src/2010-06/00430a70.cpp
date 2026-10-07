// roc 2010-06 00430a70  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430a70
//
// 00430a70  b8586fa000           mov eax, 0xa06f58
// 00430a75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430a70()
{
    return &G;
}
