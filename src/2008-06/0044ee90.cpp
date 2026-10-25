// from server: 100% by auto
// roc 2008-06 0044ee90  unit: CRobloxDHtmlDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ee90
//
// 0044ee90  b860708100           mov eax, 0x817060
// 0044ee95  c3                   ret 

extern char G;

char* func_0044ee90()
{
    return &G;
}
