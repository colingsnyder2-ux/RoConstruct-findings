// roc 2010-06 00811840  unit: CXTSplitterWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811840
//
// 00811840  b8b41aa600           mov eax, 0xa61ab4
// 00811845  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00811840()
{
    return &G;
}
