// roc 2010-06 00461040  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00461040
//
// 00461040  b868e3a000           mov eax, 0xa0e368
// 00461045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00461040()
{
    return &G;
}
