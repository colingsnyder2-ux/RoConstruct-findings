// roc 2008-06 004346a0  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004346a0
//
// 004346a0  b8642b8100           mov eax, 0x812b64
// 004346a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004346a0()
{
    return &G;
}
