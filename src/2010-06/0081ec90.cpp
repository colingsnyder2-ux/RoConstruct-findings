// roc 2010-06 0081ec90  unit: CXTPPropertyGridItemBool  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081ec90
//
// 0081ec90  b8b03aa600           mov eax, 0xa63ab0
// 0081ec95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0081ec90()
{
    return &G;
}
