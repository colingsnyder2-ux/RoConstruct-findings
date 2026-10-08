// roc 2007-08 006d2650  unit: CXTPReportHyperlink  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2650
//
// 006d2650  b83c807d00           mov eax, 0x7d803c
// 006d2655  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d2650()
{
    return &G;
}
