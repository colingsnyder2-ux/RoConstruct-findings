// roc 2008-06 00793b40  unit: CXTPRibbonTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793b40
//
// 00793b40  b864b69600           mov eax, 0x96b664
// 00793b45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00793b40()
{
    return &G;
}
