// roc 2012-06 00434dc0  unit: CMainFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434dc0
//
// 00434dc0  b820f7b400           mov eax, 0xb4f720
// 00434dc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00434dc0()
{
    return &G;
}
