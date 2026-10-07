// roc 2011-06 00481e80  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00481e80
//
// 00481e80  b8b81ea700           mov eax, 0xa71eb8
// 00481e85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00481e80()
{
    return &G;
}
