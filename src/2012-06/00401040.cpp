// roc 2012-06 00401040  unit: CAboutRobloxDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00401040
//
// 00401040  b8802cb400           mov eax, 0xb42c80
// 00401045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00401040()
{
    return &G;
}
