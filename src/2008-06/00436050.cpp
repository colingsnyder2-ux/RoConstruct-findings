// from server: 100% by auto
// roc 2008-06 00436050  unit: CClassTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436050
//
// 00436050  b8c82e8100           mov eax, 0x812ec8
// 00436055  c3                   ret 

extern char G;

char* func_00436050()
{
    return &G;
}
