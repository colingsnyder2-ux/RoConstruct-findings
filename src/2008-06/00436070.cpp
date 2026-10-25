// from server: 100% by auto
// roc 2008-06 00436070  unit: COutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436070
//
// 00436070  b8602f8100           mov eax, 0x812f60
// 00436075  c3                   ret 

extern char G;

char* func_00436070()
{
    return &G;
}
