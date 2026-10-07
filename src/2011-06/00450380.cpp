// roc 2011-06 00450380  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00450380
//
// 00450380  b800c6a600           mov eax, 0xa6c600
// 00450385  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00450380()
{
    return &G;
}
