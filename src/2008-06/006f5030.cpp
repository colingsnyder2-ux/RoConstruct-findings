// from server: 100% by auto
// roc 2008-06 006f5030  unit: CXTPControlRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5030
//
// 006f5030  b8e4779600           mov eax, 0x9677e4
// 006f5035  c3                   ret 

extern char G;

char* func_006f5030()
{
    return &G;
}
