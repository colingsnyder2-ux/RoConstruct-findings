// roc 2011-06 00841420  unit: CXTPReportRecordItemVariant  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00841420
//
// 00841420  b8fc6ac900           mov eax, 0xc96afc
// 00841425  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00841420()
{
    return &G;
}
