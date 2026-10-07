// roc 2012-06 004b0e80  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b0e80
//
// 004b0e80  b81c38b600           mov eax, 0xb6381c
// 004b0e85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b0e80()
{
    return &G;
}
