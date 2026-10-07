// roc 2011-06 005c1c40  unit: W4AffectType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c1c40
//
// 005c1c40  b870d0c300           mov eax, 0xc3d070
// 005c1c45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c1c40()
{
    return &G;
}
