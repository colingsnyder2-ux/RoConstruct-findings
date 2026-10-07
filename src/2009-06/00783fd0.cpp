// roc 2009-06 00783fd0  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00783fd0
//
// 00783fd0  b808d68f00           mov eax, 0x8fd608
// 00783fd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00783fd0()
{
    return &G;
}
