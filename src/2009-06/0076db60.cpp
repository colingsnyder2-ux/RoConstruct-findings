// roc 2009-06 0076db60  unit: CXTPControlRadioButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076db60
//
// 0076db60  b8c06aa200           mov eax, 0xa26ac0
// 0076db65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076db60()
{
    return &G;
}
