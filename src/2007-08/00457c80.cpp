// roc 2007-08 00457c80  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457c80
//
// 00457c80  b8382f7900           mov eax, 0x792f38
// 00457c85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00457c80()
{
    return &G;
}
