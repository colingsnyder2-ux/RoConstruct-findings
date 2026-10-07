// roc 2007-08 00434180  unit: CObjectBrowser  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00434180
//
// 00434180  b830c37800           mov eax, 0x78c330
// 00434185  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00434180()
{
    return &G;
}
