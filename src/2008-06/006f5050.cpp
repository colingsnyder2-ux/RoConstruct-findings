// from server: 100% by auto
// roc 2008-06 006f5050  unit: CXTPControlSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5050
//
// 006f5050  b800789600           mov eax, 0x967800
// 006f5055  c3                   ret 

extern char G;

char* func_006f5050()
{
    return &G;
}
