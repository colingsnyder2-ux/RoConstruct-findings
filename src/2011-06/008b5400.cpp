// roc 2011-06 008b5400  unit: CXTPReportTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b5400
//
// 008b5400  b84c44ad00           mov eax, 0xad444c
// 008b5405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008b5400()
{
    return &G;
}
