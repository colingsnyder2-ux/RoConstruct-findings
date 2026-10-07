// roc 2011-06 00870820  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870820
//
// 00870820  b850c6ac00           mov eax, 0xacc650
// 00870825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00870820()
{
    return &G;
}
