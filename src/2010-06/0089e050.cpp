// roc 2010-06 0089e050  unit: CXTPRibbonGroup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e050
//
// 0089e050  b850b9be00           mov eax, 0xbeb950
// 0089e055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0089e050()
{
    return &G;
}
