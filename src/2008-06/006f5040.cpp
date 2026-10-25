// from server: 100% by auto
// roc 2008-06 006f5040  unit: CXTPControlRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5040
//
// 006f5040  b810e10000           mov eax, 0xe110
// 006f5045  c3                   ret 

unsigned int func_006f5040()
{
    return 0xe110u;
}
