// roc 2008-06 00433410  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433410
//
// 00433410  b820258100           mov eax, 0x812520
// 00433415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00433410()
{
    return &G;
}
