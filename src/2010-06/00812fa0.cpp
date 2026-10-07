// roc 2010-06 00812fa0  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812fa0
//
// 00812fa0  b8c41ca600           mov eax, 0xa61cc4
// 00812fa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00812fa0()
{
    return &G;
}
