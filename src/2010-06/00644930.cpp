// roc 2010-06 00644930  unit: RBX::VMeshId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00644930
//
// 00644930  b86861bb00           mov eax, 0xbb6168
// 00644935  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00644930()
{
    return &G;
}
