// roc 2010-06 005af7a0  unit: RBX::W4KeywordFilterType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005af7a0
//
// 005af7a0  b8ec10ba00           mov eax, 0xba10ec
// 005af7a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005af7a0()
{
    return &G;
}
