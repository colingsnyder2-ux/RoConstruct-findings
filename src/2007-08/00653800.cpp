// roc 2007-08 00653800  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00653800
//
// 00653800  b8587c7c00           mov eax, 0x7c7c58
// 00653805  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00653800()
{
    return &G;
}
