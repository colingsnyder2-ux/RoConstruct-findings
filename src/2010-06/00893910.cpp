// roc 2010-06 00893910  unit: CXTPRichRender  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893910
//
// 00893910  b880ffa600           mov eax, 0xa6ff80
// 00893915  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00893910()
{
    return &G;
}
