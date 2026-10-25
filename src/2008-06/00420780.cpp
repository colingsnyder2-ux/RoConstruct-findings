// from server: 100% by auto
// roc 2008-06 00420780  unit: CInstanceExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420780
//
// 00420780  b838f68000           mov eax, 0x80f638
// 00420785  c3                   ret 

extern char G;

char* func_00420780()
{
    return &G;
}
