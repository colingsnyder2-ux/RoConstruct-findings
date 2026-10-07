// roc 2011-06 00489990  unit: CPublishAsPlaceDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489990
//
// 00489990  b89034a700           mov eax, 0xa73490
// 00489995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00489990()
{
    return &G;
}
