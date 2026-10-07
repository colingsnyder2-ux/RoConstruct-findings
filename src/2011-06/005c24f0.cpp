// roc 2011-06 005c24f0  unit: RBX::GuiObject::W4SizeConstraint::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c24f0
//
// 005c24f0  b85cd2c300           mov eax, 0xc3d25c
// 005c24f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c24f0()
{
    return &G;
}
