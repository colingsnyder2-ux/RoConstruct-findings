// roc 2011-06 005c4320  unit: RBX::Feature::W4InOut::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4320
//
// 005c4320  b84cdac300           mov eax, 0xc3da4c
// 005c4325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c4320()
{
    return &G;
}
