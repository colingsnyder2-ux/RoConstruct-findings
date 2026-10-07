// roc 2010-06 0042da10  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042da10
//
// 0042da10  b89858a000           mov eax, 0xa05898
// 0042da15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042da10()
{
    return &G;
}
