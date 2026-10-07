// roc 2010-06 005ada40  unit: RBX::GuiObject::W4SizeConstraint::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ada40
//
// 005ada40  b81c0aba00           mov eax, 0xba0a1c
// 005ada45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005ada40()
{
    return &G;
}
