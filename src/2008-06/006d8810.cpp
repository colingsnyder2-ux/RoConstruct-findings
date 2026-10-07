// roc 2008-06 006d8810  unit: CXTPReportRecordItemDateTime  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d8810
//
// 006d8810  b8b06f9600           mov eax, 0x966fb0
// 006d8815  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d8810()
{
    return &G;
}
