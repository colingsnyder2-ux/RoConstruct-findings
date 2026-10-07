// roc 2010-06 0085a500  unit: CXTPReportTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085a500
//
// 0085a500  b87ca1a600           mov eax, 0xa6a17c
// 0085a505  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0085a500()
{
    return &G;
}
