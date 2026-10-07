// roc 2008-06 0071c110  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c110
//
// 0071c110  b800f38500           mov eax, 0x85f300
// 0071c115  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0071c110()
{
    return &G;
}
