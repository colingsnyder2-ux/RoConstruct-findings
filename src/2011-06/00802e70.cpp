// roc 2011-06 00802e70  unit: W4_D3DDEVTYPE::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00802e70
//
// 00802e70  b82857c900           mov eax, 0xc95728
// 00802e75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00802e70()
{
    return &G;
}
