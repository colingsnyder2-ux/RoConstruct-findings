// roc 2012-06 00495890  unit: CRobloxWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00495890
//
// 00495890  b8dcebb500           mov eax, 0xb5ebdc
// 00495895  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00495890()
{
    return &G;
}
