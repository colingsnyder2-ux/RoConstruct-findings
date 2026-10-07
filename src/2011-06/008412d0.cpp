// roc 2011-06 008412d0  unit: CXTPReportRecordItemPreview  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008412d0
//
// 008412d0  b8dc6ac900           mov eax, 0xc96adc
// 008412d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008412d0()
{
    return &G;
}
