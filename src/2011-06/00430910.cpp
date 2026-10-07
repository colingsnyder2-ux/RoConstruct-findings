// roc 2011-06 00430910  unit: CWrapperView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430910
//
// 00430910  b8dc58a600           mov eax, 0xa658dc
// 00430915  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430910()
{
    return &G;
}
