// roc 2012-06 004a5970  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a5970
//
// 004a5970  b8fc1cb600           mov eax, 0xb61cfc
// 004a5975  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5970()
{
    return &G;
}
