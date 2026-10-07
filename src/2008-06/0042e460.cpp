// roc 2008-06 0042e460  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e460
//
// 0042e460  b8a8078100           mov eax, 0x8107a8
// 0042e465  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042e460()
{
    return &G;
}
