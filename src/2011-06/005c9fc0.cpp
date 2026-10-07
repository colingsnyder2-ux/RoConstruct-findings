// roc 2011-06 005c9fc0  unit: RBX::DialogRoot::W4DialogTone::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9fc0
//
// 005c9fc0  b8e8f1c300           mov eax, 0xc3f1e8
// 005c9fc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c9fc0()
{
    return &G;
}
