// roc 2010-06 005acf80  unit: W4AffectType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005acf80
//
// 005acf80  b83008ba00           mov eax, 0xba0830
// 005acf85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005acf80()
{
    return &G;
}
