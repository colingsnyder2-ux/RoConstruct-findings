// from server: 100% by auto
// roc 2008-06 006f5180  unit: CXTPControlCheckBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5180
//
// 006f5180  b854789600           mov eax, 0x967854
// 006f5185  c3                   ret 

extern char G;

char* func_006f5180()
{
    return &G;
}
