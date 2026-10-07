// roc 2011-06 0043ec30  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043ec30
//
// 0043ec30  b8dc85a600           mov eax, 0xa685dc
// 0043ec35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043ec30()
{
    return &G;
}
