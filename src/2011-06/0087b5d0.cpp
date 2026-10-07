// roc 2011-06 0087b5d0  unit: CPropertyGridItemBrickColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087b5d0
//
// 0087b5d0  b8b4dfac00           mov eax, 0xacdfb4
// 0087b5d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0087b5d0()
{
    return &G;
}
