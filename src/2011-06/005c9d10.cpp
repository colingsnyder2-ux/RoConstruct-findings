// roc 2011-06 005c9d10  unit: RBX::DialogRoot::W4DialogPurpose::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9d10
//
// 005c9d10  b82cf1c300           mov eax, 0xc3f12c
// 005c9d15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c9d10()
{
    return &G;
}
