// roc 2011-06 005c9740  unit: RBX::Frame::W4Style::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9740
//
// 005c9740  b8e4efc300           mov eax, 0xc3efe4
// 005c9745  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c9740()
{
    return &G;
}
