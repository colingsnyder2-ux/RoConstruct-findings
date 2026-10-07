// roc 2007-08 00453500  unit: CRobloxDoc  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00453500
//
// 00453500  b8101a7900           mov eax, 0x791a10
// 00453505  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00453500()
{
    return &G;
}
