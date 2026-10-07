// roc 2010-06 0081f030  unit: CXTPPropertyGridItemEnum  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081f030
//
// 0081f030  b8cc3aa600           mov eax, 0xa63acc
// 0081f035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0081f030()
{
    return &G;
}
