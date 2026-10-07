// roc 2010-06 00453570  unit: CRobloxControlColorSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00453570
//
// 00453570  b8f025b800           mov eax, 0xb825f0
// 00453575  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00453570()
{
    return &G;
}
