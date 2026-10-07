// roc 2011-06 00856ac0  unit: CXTPOriginalControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856ac0
//
// 00856ac0  b88891ac00           mov eax, 0xac9188
// 00856ac5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00856ac0()
{
    return &G;
}
