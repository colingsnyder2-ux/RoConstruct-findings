// roc 2010-06 005b1370  unit: RBX::Handles::W4VisualStyle::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1370
//
// 005b1370  b8a417ba00           mov eax, 0xba17a4
// 005b1375  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b1370()
{
    return &G;
}
