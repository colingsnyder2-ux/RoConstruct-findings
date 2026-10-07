// roc 2009-06 00804bd0  unit: CXTPRichRender  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00804bd0
//
// 00804bd0  b818b89000           mov eax, 0x90b818
// 00804bd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00804bd0()
{
    return &G;
}
