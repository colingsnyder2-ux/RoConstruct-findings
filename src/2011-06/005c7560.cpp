// roc 2011-06 005c7560  unit: RBX::Handles::W4VisualStyle::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c7560
//
// 005c7560  b81ce7c300           mov eax, 0xc3e71c
// 005c7565  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c7560()
{
    return &G;
}
