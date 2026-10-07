// roc 2009-06 0042dbc0  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042dbc0
//
// 0042dbc0  b8fc308b00           mov eax, 0x8b30fc
// 0042dbc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042dbc0()
{
    return &G;
}
